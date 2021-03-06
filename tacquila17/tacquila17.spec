// -*- C++ -*-

TACQUILA_GTB(sam,gtb)
{
  MEMBER(DATA12 tac[2][16] ZERO_SUPPRESS);
  MEMBER(DATA12 adc[2][16] ZERO_SUPPRESS);
  
  UINT32 header
    {
        0_8: count;
      12_15: trigger_tacquila = RANGE(0,0);
      16_19: trigger_sam = RANGE(1,1);
      20_23: local_event_counter;
      24_27: gtb = MATCH(gtb);
      28_31: sam = MATCH(sam);
    }

  list(0 <= index < header.count)
    {    
      if (!(index & 1))
      {
      UINT32 ch_data NOENCODE
	{
	  0_11:  tac_value;
	  12_17: clock_cycle;
	  20:    trigger = RANGE(0,0);
	  21: 	 0b0;
	  22_26: channel = RANGE(0,15);
	  27_31: module = RANGE(1,2);

	  ENCODE(tac[module-1][channel],(value=tac_value)); 
	} 
       } else
       {
       UINT32 ch_data2 NOENCODE
	{
	  0_11:  adc_value;
	  20:    trigger = RANGE(0,0);
	  21: 	 0b1;
	  22_26: channel = RANGE(0,15);
	  27_31: module = RANGE(1,2);
	  
	  ENCODE(adc[module-1][channel],(value=adc_value));
	}
       }
    }
}

EVENT
{
 rpc = TACQUILA_RPC(type=10,subtype=1);
 ignore_unknown_subevent;
}


SUBEVENT(TACQUILA_RPC)
{
      tacq = TACQUILA_GTB(sam=6,gtb=0); 
}


SIGNAL(tac1t1, rpc.tacq.tac[0][0],DATA12);
SIGNAL(tac1q1, rpc.tacq.adc[0][0],DATA12);
SIGNAL(tac1t2, rpc.tacq.tac[0][1],DATA12);
SIGNAL(tac1q2, rpc.tacq.adc[0][1],DATA12);
SIGNAL(tac1t3, rpc.tacq.tac[0][2],DATA12);
SIGNAL(tac1q3, rpc.tacq.adc[0][2],DATA12);
SIGNAL(tac1t4, rpc.tacq.tac[0][3],DATA12);
SIGNAL(tac1q4, rpc.tacq.adc[0][3],DATA12);
SIGNAL(tac1t5, rpc.tacq.tac[0][4],DATA12);
SIGNAL(tac1q5, rpc.tacq.adc[0][4],DATA12);
SIGNAL(tac1t6, rpc.tacq.tac[0][5],DATA12);
SIGNAL(tac1q6, rpc.tacq.adc[0][5],DATA12);
SIGNAL(tac1t7, rpc.tacq.tac[0][6],DATA12);
SIGNAL(tac1q7, rpc.tacq.adc[0][6],DATA12);
SIGNAL(tac1t8, rpc.tacq.tac[0][7],DATA12);
SIGNAL(tac1q8, rpc.tacq.adc[0][7],DATA12);
SIGNAL(tac1t9, rpc.tacq.tac[0][8],DATA12);
SIGNAL(tac1q9, rpc.tacq.adc[0][8],DATA12);
SIGNAL(tac1t10, rpc.tacq.tac[0][9],DATA12);
SIGNAL(tac1q10, rpc.tacq.adc[0][9],DATA12);
SIGNAL(tac1t11, rpc.tacq.tac[0][10],DATA12);
SIGNAL(tac1q11, rpc.tacq.adc[0][10],DATA12);
SIGNAL(tac1t12, rpc.tacq.tac[0][11],DATA12);
SIGNAL(tac1q12, rpc.tacq.adc[0][11],DATA12);
SIGNAL(tac1t13, rpc.tacq.tac[0][12],DATA12);
SIGNAL(tac1q13, rpc.tacq.adc[0][12],DATA12);
SIGNAL(tac1t14, rpc.tacq.tac[0][13],DATA12);
SIGNAL(tac1q14, rpc.tacq.adc[0][13],DATA12);
SIGNAL(tac1t15, rpc.tacq.tac[0][14],DATA12);
SIGNAL(tac1q15, rpc.tacq.adc[0][14],DATA12);
SIGNAL(tac1t16, rpc.tacq.tac[0][15],DATA12);
SIGNAL(tac1q16, rpc.tacq.adc[0][15],DATA12);


SIGNAL(tac2t1, rpc.tacq.tac[1][0],DATA12);
SIGNAL(tac2q1, rpc.tacq.adc[1][0],DATA12);
SIGNAL(tac2t2, rpc.tacq.tac[1][1],DATA12);
SIGNAL(tac2q2, rpc.tacq.adc[1][1],DATA12);
SIGNAL(tac2t3, rpc.tacq.tac[1][2],DATA12);
SIGNAL(tac2q3, rpc.tacq.adc[1][2],DATA12);
SIGNAL(tac2t4, rpc.tacq.tac[1][3],DATA12);
SIGNAL(tac2q4, rpc.tacq.adc[1][3],DATA12);
SIGNAL(tac2t5, rpc.tacq.tac[1][4],DATA12);
SIGNAL(tac2q5, rpc.tacq.adc[1][4],DATA12);
SIGNAL(tac2t6, rpc.tacq.tac[1][5],DATA12);
SIGNAL(tac2q6, rpc.tacq.adc[1][5],DATA12);
SIGNAL(tac2t7, rpc.tacq.tac[1][6],DATA12);
SIGNAL(tac2q7, rpc.tacq.adc[1][6],DATA12);
SIGNAL(tac2t8, rpc.tacq.tac[1][7],DATA12);
SIGNAL(tac2q8, rpc.tacq.adc[1][7],DATA12);
SIGNAL(tac2t9, rpc.tacq.tac[1][8],DATA12);
SIGNAL(tac2q9, rpc.tacq.adc[1][8],DATA12);
SIGNAL(tac2t10, rpc.tacq.tac[1][9],DATA12);
SIGNAL(tac2q10, rpc.tacq.adc[1][9],DATA12);
SIGNAL(tac2t11, rpc.tacq.tac[1][10],DATA12);
SIGNAL(tac2q11, rpc.tacq.adc[1][10],DATA12);
SIGNAL(tac2t12, rpc.tacq.tac[1][11],DATA12);
SIGNAL(tac2q12, rpc.tacq.adc[1][11],DATA12);
SIGNAL(tac2t13, rpc.tacq.tac[1][12],DATA12);
SIGNAL(tac2q13, rpc.tacq.adc[1][12],DATA12);
SIGNAL(tac2t14, rpc.tacq.tac[1][13],DATA12);
SIGNAL(tac2q14, rpc.tacq.adc[1][13],DATA12);
SIGNAL(tac2t15, rpc.tacq.tac[1][14],DATA12);
SIGNAL(tac2q15, rpc.tacq.adc[1][14],DATA12);
SIGNAL(tac2t16, rpc.tacq.tac[1][15],DATA12);
SIGNAL(tac2q16, rpc.tacq.adc[1][15],DATA12);
