#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void
ctdc_from_mapmt(int a_mapmt_ch, int *a_ctdc_i, int *a_ctdc_ch)
{
	int ch2 = a_mapmt_ch / 2;
	/* Figure out the row and column of the slot, then the slot. */
	int col = 7 - (ch2 & 7);
	int row = a_mapmt_ch / 128;
	int slot = row + 2 * col;
	/* Figure out the channel within one slot. */
	int ch = ((2 * (ch2 / 8)) & 15) + (1 & a_mapmt_ch);
	/* Figure out the CTDC card and channel from the slot and its channel. */
	*a_ctdc_i = slot >= 8;
	*a_ctdc_ch = (15 - ch) + 16 * (slot & 7);
/*printf("%u = row=%u col=%u slot=%u ch=%u i=%u ch=%u\n", a_mapmt_ch, row, col,
    slot, ch, *a_ctdc_i, *a_ctdc_ch);*/
}

int
bunch_from_mapmt(int a_mapmt_ch)
{
	int row = a_mapmt_ch / 16;
	int col = 15 & a_mapmt_ch;
	switch (col) {
	case  0: col = 16; break;
	case  1: col = 12; break;
	case  2: col =  8; break;
	case  3: col =  4; break;
	case  4: col = 15; break;
	case  5: col = 11; break;
	case  6: col =  7; break;
	case  7: col =  3; break;
	case  8: col = 14; break;
	case  9: col = 10; break;
	case 10: col =  6; break;
	case 11: col =  2; break;
	case 12: col = 13; break;
	case 13: col =  9; break;
	case 14: col =  5; break;
	case 15: col =  1; break;
	}
	return 16 * row + col;
}

void
map(char const *a_dst, char const *a_name, unsigned a_subs, unsigned a_mapmt,
    unsigned a_ctdc_i, unsigned a_spmt, unsigned a_tamex_i, unsigned
    a_tamex_ch_i, unsigned a_group)
{
	char side_array[2] = {'M', 'S'};
	char edge_array[2] = {'L', 'T'};
	char prec_array[2] = {'C', 'F'};
	char const *prec_name_array[2] = {"coarse", "fine  "};
	unsigned sub_i, side_i, edge_i, prec_i;
	unsigned spmt_i;

	/* Only support 256 MAPMT channels for now. */
	assert(256 == a_mapmt);

	/* Zero-suppress all channels. */
	for (side_i = 0; side_i < 2; ++side_i) {
		for (edge_i = 0; edge_i < 2; ++edge_i) {
			for (prec_i = 0; prec_i < 2; ++prec_i) {
				printf(
				    "SIGNAL(ZERO_SUPPRESS_MULTI(64): "
				    "%s_T%c%c%c1);\n", a_dst,
				    side_array[side_i], edge_array[edge_i],
				    prec_array[prec_i]);
			}
		}
	}

	//Go through the 256 holes of the mask. Assign a fiber on one side and a channel on the other side.
	for (sub_i = 0; sub_i < a_subs; ++sub_i) {
		int i;
		for (i = 0; i < a_mapmt; i++) {
			int bunch_i = bunch_from_mapmt(i);
			int ctdc_i, ctdc_ch;
			ctdc_from_mapmt(i, &ctdc_i, &ctdc_ch);
			/* Duplicate for leading/trailing and coarse/fine. */
			for (edge_i = 0; edge_i < 2; ++edge_i) {
				for (prec_i = 0; prec_i < 2; ++prec_i) {
					printf(
					    "SIGNAL(%s_TM%c%c%u, "
					    "fib10_ctdc.data.ctdc3[%u].time_%s[%u], DATA12);\n",
					    a_dst, edge_array[edge_i],
					    prec_array[prec_i], bunch_i,
					    a_ctdc_i + ctdc_i,
					    prec_name_array[prec_i],
					    2 * ctdc_ch + edge_i);
				}
			}
		}
	}

	/* SPMT side. */
	for (sub_i = 0; sub_i < a_subs; ++sub_i) {
		for (spmt_i = 0; spmt_i < a_spmt; ++spmt_i) {
			for (edge_i = 0; edge_i < 2; ++edge_i) {
				for (prec_i = 0; prec_i < 2; ++prec_i) {
					printf(
					    "SIGNAL(%s_TS%c%c%u, "
					    "fib_tamex.data.tamex[%u].time_%s[%u], DATA12);\n",
					    a_dst, edge_array[edge_i],
					    prec_array[prec_i], sub_i * a_spmt + spmt_i + 1,
					    a_tamex_i, prec_name_array[prec_i],
					    (a_tamex_ch_i + sub_i * a_spmt + spmt_i) * 2 + edge_i + 1);
				}
			}
		}
	}
}

int
main()
{
	if (0) {
		int i;
		for (i = 0; i < 256; ++i) {
			int j, k;
			ctdc_from_mapmt(i, &j, &k);
		}
		exit(0);
	}
	map("FIBTHREEA", "3a", 1, 256, 2, 2, 0, 0, 2);
	map("FIBTHREEB", "3b", 1, 256, 0, 2, 0, 8, 2);
	return 0;
}
