// -*- C++ -*-

#include "sst_ext.spec"

SIDEREM_BLOCK(sam,gtb,siderem)
{
  MEMBER(DATA12 data[4][512] ZERO_SUPPRESS);

  UINT32 header
    {
      0_11:  count;
      12_15: local_event_counter;
      16_19: local_trigger;
      // trigger = 3 = sync
      20_23: siderem = MATCH(siderem); // 1-15, 1-16, but 16 impossible!
      24_27: gtb = MATCH(gtb); // 0-1
      28_31: sam = MATCH(sam); // 3-14, 15 is data marker!
    }

  list(0<=index<header.count) 
    {
      UINT32 ch_data NOENCODE
	{
	  0_11:  value;
	  12_13: adc_no;  // adc no
	  16_24: channel;

	  28_31: 0xf; // data marker

	  ENCODE(data[adc_no][channel],(value=value));
	}
    }
}

SUBEVENT(SIDEREM01_VME)
{
  select several
    {
      external sst[0] = EXT_SST(siderem=1,gtb=0,sam=5);
      external sst[1] = EXT_SST(siderem=2,gtb=0,sam=5);
      external sst[2] = EXT_SST(siderem=3,gtb=0,sam=5);
      external sst[3] = EXT_SST(siderem=1,gtb=1,sam=5);
      external sst[4] = EXT_SST(siderem=2,gtb=1,sam=5);
      external sst[5] = EXT_SST(siderem=3,gtb=1,sam=5);
    }
  /*
  select several
    {
      sst[0] = SIDEREM_BLOCK(siderem=1,gtb=0,sam=5);
      sst[1] = SIDEREM_BLOCK(siderem=2,gtb=0,sam=5);
      sst[2] = SIDEREM_BLOCK(siderem=3,gtb=0,sam=5);
      sst[3] = SIDEREM_BLOCK(siderem=1,gtb=1,sam=5);
      sst[4] = SIDEREM_BLOCK(siderem=2,gtb=1,sam=5);
    }
  */
}



