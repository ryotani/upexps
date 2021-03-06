#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char side_array[2] = {'M', 'S'};
static char edge_array[2] = {'L', 'T'};
static char prec_array[2] = {'C', 'F'};
static char const *prec_name_array[2] = {"coarse", "fine  "};

void
map(char const *a_dst, char const *a_name, unsigned a_subs, unsigned a_mapmt,
    unsigned a_spmt, unsigned a_tamex_i, unsigned a_tamex_ch_i, unsigned
    a_group)
{
	// electronics mapping of the adapter board from multi-anode PMT to clock TDC boards

	char const *sub;
	char *fib_src;
	unsigned i, j, p, k, max,board;
	signed msign;
	unsigned maxnum[16]={8,60,4,64,120,76,116,80,132,192,136,188,244,208,248,204};
	unsigned ch[256]; // board and electronic channel of PMT anode
	for(j=0;j<256;j++){
		ch[j]=0;
	}

	for(j=0;j<16;j++){  // loop over slots
		if(j<4 || (j>7 && j<12)){
			if(j%2 == 0) msign = 1;
			if(j%2 == 1) msign = -1;
		}
		else{
			if(j%2 == 0) msign = -1;
			if(j%2 == 1) msign = 1;
		}
		for(i=0;i<4;i++){
			max = maxnum[j] - i ;
			k = i*4 + j*16;
			ch[max -1] = k;
			ch[max+msign*16-1] = k+1;
			ch[max+msign*32-1] = k+2;
			ch[max+msign*48-1] = k+3;
		}
	}

	for (j = 0; j < 256; ++j) {
		printf("%3u: %3u\n", j, ch[j]);
	}

	for(i=0;i<256;i++) {
		fprintf(stderr, "PMT ch: %d, electronic ch: %d \n",i,ch[i]);
	}

	
	// fiber mapping in the PMT mask
	unsigned fib0[256],fib1[256],fib1b[256],fib2[256],fib3[256],fib4[256],fib5[256],fib6[256],fib7[256],fib10[256],fib_s[256]; // fiber number of mask
	for(j=0;j<256;j++){
		fib0[j]=0;
		fib1[j]=0;
		fib1b[j]=0;
		fib2[j]=0;
		fib3[j]=0;
		fib4[j]=0;
		fib5[j]=0;
		fib6[j]=0;
	}

	// 1 5 9 13 2 6 10 14 3 7 11 15 4 8 12 16
	for(j=0;j<16;j++){
		i=j*16;

		// no fibers, just PMT
		fib0[i]=j*16+16;
		fib0[i+1]=j*16+15;
		fib0[i+2]=j*16+14;
		fib0[i+3]=j*16+13;
		fib0[i+4]=j*16+12;
		fib0[i+5]=j*16+11;
		fib0[i+6]=j*16+10;
		fib0[i+7]=j*16+9;
		fib0[i+8]=j*16+8;
		fib0[i+9]=j*16+7;
		fib0[i+10]=j*16+6;
		fib0[i+11]=j*16+5;
		fib0[i+12]=j*16+4;
		fib0[i+13]=j*16+3;
		fib0[i+14]=j*16+2;
		fib0[i+15]=j*16+1;
		// fibers in colums from top to bottom
		fib1[i]=j*16+1;
		fib1[i+1]=j*16+5;
		fib1[i+2]=j*16+9;
		fib1[i+3]=j*16+13;
		fib1[i+4]=j*16+2;
		fib1[i+5]=j*16+6;
		fib1[i+6]=j*16+10;
		fib1[i+7]=j*16+14;
		fib1[i+8]=j*16+3;
		fib1[i+9]=j*16+7;
		fib1[i+10]=j*16+11;
		fib1[i+11]=j*16+15;
		fib1[i+12]=j*16+4;
		fib1[i+13]=j*16+8;
		fib1[i+14]=j*16+12;
		fib1[i+15]=j*16+16;

		// fibers in colums from bottom to top
		//sorting of fiber detector 1
		//different order for second MPMT

		fib1b[i+15]=j*16+1;
		fib1b[i+14]=j*16+5;
		fib1b[i+13]=j*16+9;
		fib1b[i+12]=j*16+13;
		fib1b[i+11]=j*16+2;
		fib1b[i+10]=j*16+6;
		fib1b[i+9]=j*16+10;
		fib1b[i+8]=j*16+14;
		fib1b[i+7]=j*16+3;
		fib1b[i+6]=j*16+7;
		fib1b[i+5]=j*16+11;
		fib1b[i+4]=j*16+15;
		fib1b[i+3]=j*16+4;
		fib1b[i+2]=j*16+8;
		fib1b[i+1]=j*16+12;
		fib1b[i]=j*16+16;

		// fibers in row from top to bottom
		fib3[ 0 + i] = i + 16;
		fib3[ 1 + i] = i + 12;
		fib3[ 2 + i] = i + 8;
		fib3[ 3 + i] = i + 4;
		fib3[ 4 + i] = i + 15;
		fib3[ 5 + i] = i + 11;
		fib3[ 6 + i] = i + 7;
		fib3[ 7 + i] = i + 3;
		fib3[ 8 + i] = i + 14;
		fib3[ 9 + i] = i + 10;
		fib3[10 + i] = i + 6;
		fib3[11 + i] = i + 2;
		fib3[12 + i] = i + 13;
		fib3[13 + i] = i + 9;
		fib3[14 + i] = i + 5;
		fib3[15 + i] = i + 1;
		// fibers in row from top to bottom
		fib4[i+15]=j*16+1;
		fib4[i+14]=j*16+5;
		fib4[i+13]=j*16+9;
		fib4[i+12]=j*16+13;
		fib4[i+11]=j*16+2;
		fib4[i+10]=j*16+6;
		fib4[i+9]=j*16+10;
		fib4[i+8]=j*16+14;
		fib4[i+7]=j*16+3;
		fib4[i+6]=j*16+7;
		fib4[i+5]=j*16+11;
		fib4[i+4]=j*16+15;
		fib4[i+3]=j*16+4;
		fib4[i+2]=j*16+8;
		fib4[i+1]=j*16+12;
		fib4[i]=j*16+16;

		/*
		   fib4[i]=j*16+1;
		   fib4[i+1]=j*16+5;
		   fib4[i+2]=j*16+9;
		   fib4[i+3]=j*16+13;
		   fib4[i+4]=j*16+2;
		   fib4[i+5]=j*16+6;
		   fib4[i+6]=j*16+10;
		   fib4[i+7]=j*16+14;
		   fib4[i+8]=j*16+3;
		   fib4[i+9]=j*16+7;
		   fib4[i+10]=j*16+11;
		   fib4[i+11]=j*16+15;
		   fib4[i+12]=j*16+4;
		   fib4[i+13]=j*16+8;
		   fib4[i+14]=j*16+12;
		   fib4[i+15]=j*16+16;
		   */
		/*
		   fib4[0+j]=j*16+16;
		   fib4[16+j]=j*16+12;
		   fib4[32+j]=j*16+8;
		   fib4[48+j]=j*16+4;
		   fib4[64+j]=j*16+15;
		   fib4[80+j]=j*16+11;
		   fib4[96+j]=j*16+7;
		   fib4[112+j]=j*16+3;
		   fib4[128+j]=j*16+14;
		   fib4[144+j]=j*16+10;
		   fib4[160+j]=j*16+6;
		   fib4[176+j]=j*16+2;
		   fib4[192+j]=j*16+13;
		   fib4[208+j]=j*16+9;
		   fib4[224+j]=j*16+5;
		   fib4[240+j]=j*16+1;
		   */
		// fibers in row from bottom to top, fiber sorting starts at bottom
		//sorting of fiber detector 5
		fib5[240+j]=j*16+16;
		fib5[224+j]=j*16+12;
		fib5[208+j]=j*16+8;
		fib5[192+j]=j*16+4;
		fib5[176+j]=j*16+15;
		fib5[160+j]=j*16+11;
		fib5[144+j]=j*16+7;
		fib5[128+j]=j*16+3;
		fib5[112+j]=j*16+14;
		fib5[96+j]=j*16+10;
		fib5[80+j]=j*16+6;
		fib5[64+j]=j*16+2;
		fib5[48+j]=j*16+13;
		fib5[32+j]=j*16+9;
		fib5[16+j]=j*16+5;
		fib5[0+j]=j*16+1;
		// fibers in row from bottom to top, fiber sorting starts at bottom
		// sorting of fiber detector 6
		fib6[240+j]=j*16+16;
		fib6[224+j]=j*16+12;
		fib6[208+j]=j*16+8;
		fib6[192+j]=j*16+4;
		fib6[176+j]=j*16+15;
		fib6[160+j]=j*16+11;
		fib6[144+j]=j*16+7;
		fib6[128+j]=j*16+3;
		fib6[112+j]=j*16+14;
		fib6[96+j]=j*16+10;
		fib6[80+j]=j*16+6;
		fib6[64+j]=j*16+2;
		fib6[48+j]=j*16+13;
		fib6[32+j]=j*16+9;
		fib6[16+j]=j*16+5;
		fib6[0+j]=j*16+1;
		// Fib7.
		fib7[i]=j*16+1;
		fib7[i+1]=j*16+5;
		fib7[i+2]=j*16+9;
		fib7[i+3]=j*16+13;
		fib7[i+4]=j*16+2;
		fib7[i+5]=j*16+6;
		fib7[i+6]=j*16+10;
		fib7[i+7]=j*16+14;
		fib7[i+8]=j*16+3;
		fib7[i+9]=j*16+7;
		fib7[i+10]=j*16+11;
		fib7[i+11]=j*16+15;
		fib7[i+12]=j*16+4;
		fib7[i+13]=j*16+8;
		fib7[i+14]=j*16+12;
		fib7[i+15]=j*16+16;
		// Fib10 + Fib11.
		fib10[i]=j*16+1;
		fib10[i+1]=j*16+5;
		fib10[i+2]=j*16+9;
		fib10[i+3]=j*16+13;
		fib10[i+4]=j*16+2;
		fib10[i+5]=j*16+6;
		fib10[i+6]=j*16+10;
		fib10[i+7]=j*16+14;
		fib10[i+8]=j*16+3;
		fib10[i+9]=j*16+7;
		fib10[i+10]=j*16+11;
		fib10[i+11]=j*16+15;
		fib10[i+12]=j*16+4;
		fib10[i+13]=j*16+8;
		fib10[i+14]=j*16+12;
		fib10[i+15]=j*16+16;
		// Stupid.
		fib_s[i +  0] = i +  1;
		fib_s[i +  1] = i +  2;
		fib_s[i +  2] = i +  3;
		fib_s[i +  3] = i +  4;
		fib_s[i +  4] = i +  5;
		fib_s[i +  5] = i +  6;
		fib_s[i +  6] = i +  7;
		fib_s[i +  7] = i +  8;
		fib_s[i +  8] = i +  9;
		fib_s[i +  9] = i + 10;
		fib_s[i + 10] = i + 11;
		fib_s[i + 11] = i + 12;
		fib_s[i + 12] = i + 13;
		fib_s[i + 13] = i + 14;
		fib_s[i + 14] = i + 15;
		fib_s[i + 15] = i + 16;
	}

	for(i=0;i<256;i++) {
		fprintf(stderr, "PMT: %d, fiber: %d \n",i,fib5[i]);
	}
	fprintf(stderr, "PMT: %d, ch: %d \n",0,ch[0]);
	fprintf(stderr, "PMT: %d, fiber: %d \n",0,fib5[0]);

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

	if (0 == strcmp("3a", a_name) ||
	    0 == strcmp("3b", a_name)) {
		fib_src = "fib10_ctdc";
		sub = "3";
	} else {
		static char store[100];
		fib_src = store;
		sprintf(fib_src, "fib%s_ctdc", a_name);
		sub = "";
	}

	//Go through the 256 holes of the mask. Assign a fiber on one side and a channel on the other side.
	for (sub_i = 0; sub_i < a_subs; ++sub_i) {
		for (i = 0; i < a_mapmt; i++) {
			unsigned card_i, channel_i, bunch_i;
			channel_i=ch[i];
			if(0 == strcmp("0", a_name)){
				bunch_i=fib0[i];
			}
			else if(0 == strcmp("1", a_name)){
				if (sub_i == 0)
				{
					bunch_i=fib1[i];
				}
				else
				{
					bunch_i=fib1b[i];
				}
			}
			else if(0 == strcmp("1a", a_name)){
				bunch_i=fib0[i];
			}
			else if(0 == strcmp("1b", a_name)){
				bunch_i=fib0[i];
			}
			else if(0 == strcmp("3a", a_name)){
				bunch_i=fib3[i];
			}
			else if(0 == strcmp("3b", a_name)){
				bunch_i=fib3[i];
			}
			else if(0 == strcmp("4", a_name)){
				bunch_i=fib4[i];
			}
			else if(0 == strcmp("5", a_name)){
				bunch_i=fib5[i];
			}
			else if(0 == strcmp("6", a_name)){
				bunch_i=fib6[i];
			}
			else if(0 == strcmp("7", a_name)){
				bunch_i=fib7[i];
			}
			else if(0 == strcmp("8", a_name)){
				bunch_i=fib7[i];
			}
			else if(0 == strcmp("10", a_name)){
				bunch_i=fib10[i];
			}
			else if(0 == strcmp("11", a_name)){
				bunch_i=fib10[i];
			}
			else if(0 == strcmp("12", a_name)){
				bunch_i=fib10[i];
			}
			else if(0 == strcmp("13", a_name)){
				bunch_i=fib10[i];
			}
			bunch_i += sub_i * a_mapmt;

			if (0 == strcmp("3a", a_name)) {
				card_i = 3;
				if (channel_i > 127) {
					--card_i;
					channel_i = channel_i - 128;
				}
			} else if (0 == strcmp("3b", a_name)) {
				card_i = 1;
				if (channel_i > 127) {
					--card_i;
					channel_i = channel_i - 128;
				}
			} else if (0 == strcmp("1a", a_name)) {
				card_i = 0;
				channel_i = i;
				if (channel_i > 127) {
					++card_i;
					channel_i = channel_i - 128;
				}
			} else if (0 == strcmp("1b", a_name)) {
				card_i = 2;
				channel_i = i;
				if (channel_i > 127) {
					++card_i;
					channel_i = channel_i - 128;
				}
			} else {
				card_i = 0;
				if (channel_i > 127) {
					++card_i;
					channel_i = channel_i - 128;
				}
			}
			card_i += sub_i * 2;

			/* Duplicate for leading/trailing and coarse/fine. */
			for (edge_i = 0; edge_i < 2; ++edge_i) {
				for (prec_i = 0; prec_i < 2; ++prec_i) {
					printf(
					    "SIGNAL(%s_TM%c%c%u, "
					    "fib1ab.data.ctdc[%u].time_%s[%u], DATA12);\n",
					    a_dst, edge_array[edge_i],
					    prec_array[prec_i], bunch_i,
					    card_i,
					    prec_name_array[prec_i],
					    2*channel_i + edge_i);
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
					    "fib1ab.data.tamex[%u].time_%s[%u], DATA12);\n",
					    a_dst, edge_array[edge_i],
					    prec_array[prec_i], sub_i * a_spmt + spmt_i + 1,
					    a_tamex_i, prec_name_array[prec_i],
						(0 == strcmp("99", a_name) ||
						0 == strcmp("99", a_name)) ?
					    (a_tamex_ch_i + sub_i * a_spmt + (a_spmt - spmt_i - 1)) * 2 + edge_i + 1 :
					    (a_tamex_ch_i + sub_i * a_spmt + spmt_i) * 2 + edge_i + 1);
				}
			}
		}
	}
}

void
sipm_map()
{
	unsigned ch;

	for (ch = 0; ch < 256; ++ch) {
	  unsigned top_ctdc, padi, pch, bottom_ctdc, edge_i, prec_i;

		/* Top side electronics mapping. */
		top_ctdc = ch / 128;
		padi = 7 & ((1 & ch) + 2 * (ch / 32));
		pch = 15 & (ch / 2);
		if ((1 & padi) == 0) pch = 15 - pch;

		/* Bottom side electronics mapping. */
		bottom_ctdc = 2 + (ch / 128);

		for (edge_i = 0; edge_i < 2; ++edge_i) {
			for (prec_i = 0; prec_i < 2; ++prec_i) {
				printf("SIGNAL(SFIB_TT%c%c%u, "
				    "fibsipm_ctdc.data.ctdc[%u].time_%s[%u], "
				    "DATA12);\n",
				    edge_array[edge_i], prec_array[prec_i],
				    ch + 1, top_ctdc, prec_name_array[prec_i],
				    2 * (padi * 16 + pch) + edge_i);
				printf("SIGNAL(SFIB_BT%c%c%u, "
				    "fibsipm_ctdc.data.ctdc[%u].time_%s[%u], "
				    "DATA12);\n",
				    edge_array[edge_i], prec_array[prec_i],
				    ch + 1, bottom_ctdc,
				    prec_name_array[prec_i],
				    2 * (padi * 16 + pch) + edge_i);
			}
		}
	}
}

int
main()
{
/*	map("FIBSEVEN", "7", 2, 256, 1, 1, 0, 1);
	map("FIBEIGHT", "8", 2, 256, 1, 1, 8, 1);
	map("FIBTEN", "10", 2, 256, 2, 2, 0, 1);
	map("FIBELEVEN", "11", 2, 256, 2, 2, 8, 1);
	map("FIBTWELVE", "12", 2, 256, 2, 1, 0, 1);
	map("FIBTHIRTEEN", "13", 2, 256, 2, 1, 8, 1);
	map("FIBTHREEA", "3a", 1, 256, 2, 0, 0, 2);
	map("FIBTHREEB", "3b", 1, 256, 2, 0, 8, 2);*/
	map("FIBONEA", "1a", 1, 256, 1, 0, 0, 2);
	map("FIBONEB", "1b", 1, 256, 1, 0, 8, 2);
/*	sipm_map();*/
	return 0;
}
