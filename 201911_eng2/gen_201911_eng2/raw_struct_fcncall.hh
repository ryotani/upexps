/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_raw_event_TIMESTAMP_LOS_WR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP_LOS_WR)::FCNCALL_NAME(raw_event_TIMESTAMP_LOS_WR)
{
  FCNCALL_INIT;
  // DATA16 T[4];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP_LOS_WR

#ifndef USER_DEF_raw_event_TIMESTAMP_LOS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP_LOS)::FCNCALL_NAME(raw_event_TIMESTAMP_LOS)
{
  FCNCALL_INIT;
  // DATA12 ID;
  {
  FCNCALL_SUBNAME("ID");
  { FCNCALL_CALL_CTRL_WRAP(ID,ID.FCNCALL_CALL(ID)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TIMESTAMP_LOS_WR WR;
  {
  FCNCALL_SUBNAME("WR");
  { FCNCALL_CALL_CTRL_WRAP(WR,WR.FCNCALL_CALL(WR)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP_LOS

#ifndef USER_DEF_raw_event_TIMESTAMP_SCITWO_WR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP_SCITWO_WR)::FCNCALL_NAME(raw_event_TIMESTAMP_SCITWO_WR)
{
  FCNCALL_INIT;
  // DATA16 T[4];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP_SCITWO_WR

#ifndef USER_DEF_raw_event_TIMESTAMP_SCITWO
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP_SCITWO)::FCNCALL_NAME(raw_event_TIMESTAMP_SCITWO)
{
  FCNCALL_INIT;
  // DATA12 ID;
  {
  FCNCALL_SUBNAME("ID");
  { FCNCALL_CALL_CTRL_WRAP(ID,ID.FCNCALL_CALL(ID)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TIMESTAMP_SCITWO_WR WR;
  {
  FCNCALL_SUBNAME("WR");
  { FCNCALL_CALL_CTRL_WRAP(WR,WR.FCNCALL_CALL(WR)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP_SCITWO

#ifndef USER_DEF_raw_event_TIMESTAMP_SCIEIGHT_WR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP_SCIEIGHT_WR)::FCNCALL_NAME(raw_event_TIMESTAMP_SCIEIGHT_WR)
{
  FCNCALL_INIT;
  // DATA16 T[4];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP_SCIEIGHT_WR

#ifndef USER_DEF_raw_event_TIMESTAMP_SCIEIGHT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP_SCIEIGHT)::FCNCALL_NAME(raw_event_TIMESTAMP_SCIEIGHT)
{
  FCNCALL_INIT;
  // DATA12 ID;
  {
  FCNCALL_SUBNAME("ID");
  { FCNCALL_CALL_CTRL_WRAP(ID,ID.FCNCALL_CALL(ID)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TIMESTAMP_SCIEIGHT_WR WR;
  {
  FCNCALL_SUBNAME("WR");
  { FCNCALL_CALL_CTRL_WRAP(WR,WR.FCNCALL_CALL(WR)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP_SCIEIGHT

#ifndef USER_DEF_raw_event_TIMESTAMP
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_TIMESTAMP)::FCNCALL_NAME(raw_event_TIMESTAMP)
{
  FCNCALL_INIT;
  // raw_event_TIMESTAMP_LOS LOS;
  {
  FCNCALL_SUBNAME("LOS");
  { FCNCALL_CALL_CTRL_WRAP(LOS,LOS.FCNCALL_CALL(LOS)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TIMESTAMP_SCITWO SCITWO;
  {
  FCNCALL_SUBNAME("SCITWO");
  { FCNCALL_CALL_CTRL_WRAP(SCITWO,SCITWO.FCNCALL_CALL(SCITWO)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_TIMESTAMP_SCIEIGHT SCIEIGHT;
  {
  FCNCALL_SUBNAME("SCIEIGHT");
  { FCNCALL_CALL_CTRL_WRAP(SCIEIGHT,SCIEIGHT.FCNCALL_CALL(SCIEIGHT)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_TIMESTAMP

#ifndef USER_DEF_raw_event_LOS
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_LOS)::FCNCALL_NAME(raw_event_LOS)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
  {
  FCNCALL_SUBNAME("VTF");
  { FCNCALL_CALL_CTRL_WRAP(VTF,VTF.FCNCALL_CALL(VTF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
  {
  FCNCALL_SUBNAME("VTC");
  { FCNCALL_CALL_CTRL_WRAP(VTC,VTC.FCNCALL_CALL(VTC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,8,32> MT;
  {
  FCNCALL_SUBNAME("MT");
  { FCNCALL_CALL_CTRL_WRAP(MT,MT.FCNCALL_CALL(MT)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTFL;
  {
  FCNCALL_SUBNAME("TTFL");
  { FCNCALL_CALL_CTRL_WRAP(TTFL,TTFL.FCNCALL_CALL(TTFL)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTFT;
  {
  FCNCALL_SUBNAME("TTFT");
  { FCNCALL_CALL_CTRL_WRAP(TTFT,TTFT.FCNCALL_CALL(TTFT)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTCL;
  {
  FCNCALL_SUBNAME("TTCL");
  { FCNCALL_CALL_CTRL_WRAP(TTCL,TTCL.FCNCALL_CALL(TTCL)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,8,32> TTCT;
  {
  FCNCALL_SUBNAME("TTCT");
  { FCNCALL_CALL_CTRL_WRAP(TTCT,TTCT.FCNCALL_CALL(TTCT)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_LOS

#ifndef USER_DEF_raw_event_SCITWO
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SCITWO)::FCNCALL_NAME(raw_event_SCITWO)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
  {
  FCNCALL_SUBNAME("VTF");
  { FCNCALL_CALL_CTRL_WRAP(VTF,VTF.FCNCALL_CALL(VTF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
  {
  FCNCALL_SUBNAME("VTC");
  { FCNCALL_CALL_CTRL_WRAP(VTC,VTC.FCNCALL_CALL(VTC)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SCITWO

#ifndef USER_DEF_raw_event_SCIEIGHT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SCIEIGHT)::FCNCALL_NAME(raw_event_SCIEIGHT)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,8,32> VTF;
  {
  FCNCALL_SUBNAME("VTF");
  { FCNCALL_CALL_CTRL_WRAP(VTF,VTF.FCNCALL_CALL(VTF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,8,32> VTC;
  {
  FCNCALL_SUBNAME("VTC");
  { FCNCALL_CALL_CTRL_WRAP(VTC,VTC.FCNCALL_CALL(VTC)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SCIEIGHT

#ifndef USER_DEF_raw_event_FIBONEA
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_FIBONEA)::FCNCALL_NAME(raw_event_FIBONEA)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
  {
  FCNCALL_SUBNAME("TMLC");
  { FCNCALL_CALL_CTRL_WRAP(TMLC,TMLC.FCNCALL_CALL(TMLC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
  {
  FCNCALL_SUBNAME("TMLF");
  { FCNCALL_CALL_CTRL_WRAP(TMLF,TMLF.FCNCALL_CALL(TMLF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
  {
  FCNCALL_SUBNAME("TMTC");
  { FCNCALL_CALL_CTRL_WRAP(TMTC,TMTC.FCNCALL_CALL(TMTC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
  {
  FCNCALL_SUBNAME("TMTF");
  { FCNCALL_CALL_CTRL_WRAP(TMTF,TMTF.FCNCALL_CALL(TMTF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLC;
  {
  FCNCALL_SUBNAME("TSLC");
  { FCNCALL_CALL_CTRL_WRAP(TSLC,TSLC.FCNCALL_CALL(TSLC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLF;
  {
  FCNCALL_SUBNAME("TSLF");
  { FCNCALL_CALL_CTRL_WRAP(TSLF,TSLF.FCNCALL_CALL(TSLF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTC;
  {
  FCNCALL_SUBNAME("TSTC");
  { FCNCALL_CALL_CTRL_WRAP(TSTC,TSTC.FCNCALL_CALL(TSTC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTF;
  {
  FCNCALL_SUBNAME("TSTF");
  { FCNCALL_CALL_CTRL_WRAP(TSTF,TSTF.FCNCALL_CALL(TSTF)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_FIBONEA

#ifndef USER_DEF_raw_event_FIBONEB
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_FIBONEB)::FCNCALL_NAME(raw_event_FIBONEB)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLC;
  {
  FCNCALL_SUBNAME("TMLC");
  { FCNCALL_CALL_CTRL_WRAP(TMLC,TMLC.FCNCALL_CALL(TMLC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMLF;
  {
  FCNCALL_SUBNAME("TMLF");
  { FCNCALL_CALL_CTRL_WRAP(TMLF,TMLF.FCNCALL_CALL(TMLF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTC;
  {
  FCNCALL_SUBNAME("TMTC");
  { FCNCALL_CALL_CTRL_WRAP(TMTC,TMTC.FCNCALL_CALL(TMTC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TMTF;
  {
  FCNCALL_SUBNAME("TMTF");
  { FCNCALL_CALL_CTRL_WRAP(TMTF,TMTF.FCNCALL_CALL(TMTF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLC;
  {
  FCNCALL_SUBNAME("TSLC");
  { FCNCALL_CALL_CTRL_WRAP(TSLC,TSLC.FCNCALL_CALL(TSLC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSLF;
  {
  FCNCALL_SUBNAME("TSLF");
  { FCNCALL_CALL_CTRL_WRAP(TSLF,TSLF.FCNCALL_CALL(TSLF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTC;
  {
  FCNCALL_SUBNAME("TSTC");
  { FCNCALL_CALL_CTRL_WRAP(TSTC,TSTC.FCNCALL_CALL(TSTC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,1,64> TSTF;
  {
  FCNCALL_SUBNAME("TSTF");
  { FCNCALL_CALL_CTRL_WRAP(TSTF,TSTF.FCNCALL_CALL(TSTF)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_FIBONEB

#ifndef USER_DEF_raw_event_SFIB
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SFIB)::FCNCALL_NAME(raw_event_SFIB)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTLC;
  {
  FCNCALL_SUBNAME("TTLC");
  { FCNCALL_CALL_CTRL_WRAP(TTLC,TTLC.FCNCALL_CALL(TTLC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTLC;
  {
  FCNCALL_SUBNAME("BTLC");
  { FCNCALL_CALL_CTRL_WRAP(BTLC,BTLC.FCNCALL_CALL(BTLC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTLF;
  {
  FCNCALL_SUBNAME("TTLF");
  { FCNCALL_CALL_CTRL_WRAP(TTLF,TTLF.FCNCALL_CALL(TTLF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTLF;
  {
  FCNCALL_SUBNAME("BTLF");
  { FCNCALL_CALL_CTRL_WRAP(BTLF,BTLF.FCNCALL_CALL(BTLF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTTC;
  {
  FCNCALL_SUBNAME("TTTC");
  { FCNCALL_CALL_CTRL_WRAP(TTTC,TTTC.FCNCALL_CALL(TTTC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTTC;
  {
  FCNCALL_SUBNAME("BTTC");
  { FCNCALL_CALL_CTRL_WRAP(BTTC,BTTC.FCNCALL_CALL(BTTC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> TTTF;
  {
  FCNCALL_SUBNAME("TTTF");
  { FCNCALL_CALL_CTRL_WRAP(TTTF,TTTF.FCNCALL_CALL(TTTF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA12,DATA12,256,64> BTTF;
  {
  FCNCALL_SUBNAME("BTTF");
  { FCNCALL_CALL_CTRL_WRAP(BTTF,BTTF.FCNCALL_CALL(BTTF)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SFIB

#ifndef USER_DEF_raw_event_NN_WR
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_WR)::FCNCALL_NAME(raw_event_NN_WR)
{
  FCNCALL_INIT;
  // DATA12 ID;
  {
  FCNCALL_SUBNAME("ID");
  { FCNCALL_CALL_CTRL_WRAP(ID,ID.FCNCALL_CALL(ID)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 T[4];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_WR

#ifndef USER_DEF_raw_event_NN_P_tcl_T
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P_tcl_T)::FCNCALL_NAME(raw_event_NN_P_tcl_T)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  {
  FCNCALL_SUBNAME("B");
  { FCNCALL_CALL_CTRL_WRAP(B,B.FCNCALL_CALL(B)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P_tcl_T

#ifndef USER_DEF_raw_event_NN_P_tcl
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P_tcl)::FCNCALL_NAME(raw_event_NN_P_tcl)
{
  FCNCALL_INIT;
  // raw_event_NN_P_tcl_T T[2];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P_tcl

#ifndef USER_DEF_raw_event_NN_P_tfl_T
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P_tfl_T)::FCNCALL_NAME(raw_event_NN_P_tfl_T)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  {
  FCNCALL_SUBNAME("B");
  { FCNCALL_CALL_CTRL_WRAP(B,B.FCNCALL_CALL(B)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P_tfl_T

#ifndef USER_DEF_raw_event_NN_P_tfl
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P_tfl)::FCNCALL_NAME(raw_event_NN_P_tfl)
{
  FCNCALL_INIT;
  // raw_event_NN_P_tfl_T T[2];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P_tfl

#ifndef USER_DEF_raw_event_NN_P_tct_T
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P_tct_T)::FCNCALL_NAME(raw_event_NN_P_tct_T)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  {
  FCNCALL_SUBNAME("B");
  { FCNCALL_CALL_CTRL_WRAP(B,B.FCNCALL_CALL(B)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P_tct_T

#ifndef USER_DEF_raw_event_NN_P_tct
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P_tct)::FCNCALL_NAME(raw_event_NN_P_tct)
{
  FCNCALL_INIT;
  // raw_event_NN_P_tct_T T[2];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P_tct

#ifndef USER_DEF_raw_event_NN_P_tft_T
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P_tft_T)::FCNCALL_NAME(raw_event_NN_P_tft_T)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,50,200> B;
  {
  FCNCALL_SUBNAME("B");
  { FCNCALL_CALL_CTRL_WRAP(B,B.FCNCALL_CALL(B)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P_tft_T

#ifndef USER_DEF_raw_event_NN_P_tft
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P_tft)::FCNCALL_NAME(raw_event_NN_P_tft)
{
  FCNCALL_INIT;
  // raw_event_NN_P_tft_T T[2];
  {
  FCNCALL_SUBNAME("T");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(T__i0,,__i0,T[__i0].FCNCALL_CALL(T[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P_tft

#ifndef USER_DEF_raw_event_NN_P
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN_P)::FCNCALL_NAME(raw_event_NN_P)
{
  FCNCALL_INIT;
  // raw_event_NN_P_tcl tcl;
  {
  FCNCALL_SUBNAME("tcl");
  { FCNCALL_CALL_CTRL_WRAP(tcl,tcl.FCNCALL_CALL(tcl)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_NN_P_tfl tfl;
  {
  FCNCALL_SUBNAME("tfl");
  { FCNCALL_CALL_CTRL_WRAP(tfl,tfl.FCNCALL_CALL(tfl)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_NN_P_tct tct;
  {
  FCNCALL_SUBNAME("tct");
  { FCNCALL_CALL_CTRL_WRAP(tct,tct.FCNCALL_CALL(tct)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_NN_P_tft tft;
  {
  FCNCALL_SUBNAME("tft");
  { FCNCALL_CALL_CTRL_WRAP(tft,tft.FCNCALL_CALL(tft)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN_P

#ifndef USER_DEF_raw_event_NN
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_NN)::FCNCALL_NAME(raw_event_NN)
{
  FCNCALL_INIT;
  // raw_event_NN_WR WR;
  {
  FCNCALL_SUBNAME("WR");
  { FCNCALL_CALL_CTRL_WRAP(WR,WR.FCNCALL_CALL(WR)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_NN_P P[16];
  {
  FCNCALL_SUBNAME("P");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(P__i0,,__i0,P[__i0].FCNCALL_CALL(P[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_NN

#ifndef USER_DEF_raw_event_MUSIC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_MUSIC)::FCNCALL_NAME(raw_event_MUSIC)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,10> E;
  {
  FCNCALL_SUBNAME("E");
  { FCNCALL_CALL_CTRL_WRAP(E,E.FCNCALL_CALL(E)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,8,10> T;
  {
  FCNCALL_SUBNAME("T");
  { FCNCALL_CALL_CTRL_WRAP(T,T.FCNCALL_CALL(T)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,10> TREF;
  {
  FCNCALL_SUBNAME("TREF");
  { FCNCALL_CALL_CTRL_WRAP(TREF,TREF.FCNCALL_CALL(TREF)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_MUSIC

#ifndef USER_DEF_raw_event_SOFSCI
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SOFSCI)::FCNCALL_NAME(raw_event_SOFSCI)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,3,10> TF;
  {
  FCNCALL_SUBNAME("TF");
  { FCNCALL_CALL_CTRL_WRAP(TF,TF.FCNCALL_CALL(TF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,3,10> TC;
  {
  FCNCALL_SUBNAME("TC");
  { FCNCALL_CALL_CTRL_WRAP(TC,TC.FCNCALL_CALL(TC)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SOFSCI

#ifndef USER_DEF_raw_event_SOFTWIM_S
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SOFTWIM_S)::FCNCALL_NAME(raw_event_SOFTWIM_S)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,10> E;
  {
  FCNCALL_SUBNAME("E");
  { FCNCALL_CALL_CTRL_WRAP(E,E.FCNCALL_CALL(E)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,16,10> T;
  {
  FCNCALL_SUBNAME("T");
  { FCNCALL_CALL_CTRL_WRAP(T,T.FCNCALL_CALL(T)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16_OVERFLOW,DATA16_OVERFLOW,2,10> TREF;
  {
  FCNCALL_SUBNAME("TREF");
  { FCNCALL_CALL_CTRL_WRAP(TREF,TREF.FCNCALL_CALL(TREF)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SOFTWIM_S

#ifndef USER_DEF_raw_event_SOFTWIM
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SOFTWIM)::FCNCALL_NAME(raw_event_SOFTWIM)
{
  FCNCALL_INIT;
  // raw_event_SOFTWIM_S S[1];
  {
  FCNCALL_SUBNAME("S");
  FCNCALL_FOR(__i0,1)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(S__i0,,__i0,S[__i0].FCNCALL_CALL(S[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SOFTWIM

#ifndef USER_DEF_raw_event_SOFTOFW_P
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SOFTOFW_P)::FCNCALL_NAME(raw_event_SOFTOFW_P)
{
  FCNCALL_INIT;
  // raw_array_multi_zero_suppress<DATA12,DATA12,2,10> TF;
  {
  FCNCALL_SUBNAME("TF");
  { FCNCALL_CALL_CTRL_WRAP(TF,TF.FCNCALL_CALL(TF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA16,DATA16,2,10> TC;
  {
  FCNCALL_SUBNAME("TC");
  { FCNCALL_CALL_CTRL_WRAP(TC,TC.FCNCALL_CALL(TC)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA14 E[2];
  {
  FCNCALL_SUBNAME("E");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(E__i0,,__i0,E[__i0].FCNCALL_CALL(E[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SOFTOFW_P

#ifndef USER_DEF_raw_event_SOFTOFW
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SOFTOFW)::FCNCALL_NAME(raw_event_SOFTOFW)
{
  FCNCALL_INIT;
  // raw_event_SOFTOFW_P P[28];
  {
  FCNCALL_SUBNAME("P");
  FCNCALL_FOR(__i0,28)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(P__i0,,__i0,P[__i0].FCNCALL_CALL(P[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SOFTOFW

#ifndef USER_DEF_raw_event_SOFMWPC_Plane
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SOFMWPC_Plane)::FCNCALL_NAME(raw_event_SOFMWPC_Plane)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA12,DATA12,288> Q;
  {
  FCNCALL_SUBNAME("Q");
  { FCNCALL_CALL_CTRL_WRAP(Q,Q.FCNCALL_CALL(Q)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SOFMWPC_Plane

#ifndef USER_DEF_raw_event_SOFMWPC
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SOFMWPC)::FCNCALL_NAME(raw_event_SOFMWPC)
{
  FCNCALL_INIT;
  // raw_event_SOFMWPC_Plane Plane[3];
  {
  FCNCALL_SUBNAME("Plane");
  FCNCALL_FOR(__i0,3)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(Plane__i0,,__i0,Plane[__i0].FCNCALL_CALL(Plane[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SOFMWPC

#ifndef USER_DEF_raw_event_SST
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_SST)::FCNCALL_NAME(raw_event_SST)
{
  FCNCALL_INIT;
  // DATA12 E;
  {
  FCNCALL_SUBNAME("E");
  { FCNCALL_CALL_CTRL_WRAP(E,E.FCNCALL_CALL(E)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_SST

#ifndef USER_DEF_raw_event_CALIFA
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_CALIFA)::FCNCALL_NAME(raw_event_CALIFA)
{
  FCNCALL_INIT;
  // raw_array_zero_suppress<DATA16,DATA16,2048> ENE;
  {
  FCNCALL_SUBNAME("ENE");
  { FCNCALL_CALL_CTRL_WRAP(ENE,ENE.FCNCALL_CALL(ENE)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,2048> TSLSB;
  {
  FCNCALL_SUBNAME("TSLSB");
  { FCNCALL_CALL_CTRL_WRAP(TSLSB,TSLSB.FCNCALL_CALL(TSLSB)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,2048> TSMSB;
  {
  FCNCALL_SUBNAME("TSMSB");
  { FCNCALL_CALL_CTRL_WRAP(TSMSB,TSMSB.FCNCALL_CALL(TSMSB)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,2048> NF;
  {
  FCNCALL_SUBNAME("NF");
  { FCNCALL_CALL_CTRL_WRAP(NF,NF.FCNCALL_CALL(NF)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,2048> NS;
  {
  FCNCALL_SUBNAME("NS");
  { FCNCALL_CALL_CTRL_WRAP(NS,NS.FCNCALL_CALL(NS)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_CALIFA

#ifndef USER_DEF_raw_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event)::FCNCALL_NAME(raw_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_event_base,FCNCALL_CLASS_NAME(raw_event_base)::FCNCALL_CALL_BASE());
  // raw_event_TIMESTAMP TIMESTAMP;
  {
  FCNCALL_SUBNAME("TIMESTAMP");
  { FCNCALL_CALL_CTRL_WRAP(TIMESTAMP,TIMESTAMP.FCNCALL_CALL(TIMESTAMP)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_LOS LOS[2];
  {
  FCNCALL_SUBNAME("LOS");
  FCNCALL_FOR(__i0,2)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(LOS__i0,,__i0,LOS[__i0].FCNCALL_CALL(LOS[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_SCITWO SCITWO;
  {
  FCNCALL_SUBNAME("SCITWO");
  { FCNCALL_CALL_CTRL_WRAP(SCITWO,SCITWO.FCNCALL_CALL(SCITWO)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_SCIEIGHT SCIEIGHT;
  {
  FCNCALL_SUBNAME("SCIEIGHT");
  { FCNCALL_CALL_CTRL_WRAP(SCIEIGHT,SCIEIGHT.FCNCALL_CALL(SCIEIGHT)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_FIBONEA FIBONEA;
  {
  FCNCALL_SUBNAME("FIBONEA");
  { FCNCALL_CALL_CTRL_WRAP(FIBONEA,FIBONEA.FCNCALL_CALL(FIBONEA)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_FIBONEB FIBONEB;
  {
  FCNCALL_SUBNAME("FIBONEB");
  { FCNCALL_CALL_CTRL_WRAP(FIBONEB,FIBONEB.FCNCALL_CALL(FIBONEB)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_SFIB SFIB;
  {
  FCNCALL_SUBNAME("SFIB");
  { FCNCALL_CALL_CTRL_WRAP(SFIB,SFIB.FCNCALL_CALL(SFIB)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_NN NN;
  {
  FCNCALL_SUBNAME("NN");
  { FCNCALL_CALL_CTRL_WRAP(NN,NN.FCNCALL_CALL(NN)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,512> SAMP;
  {
  FCNCALL_SUBNAME("SAMP");
  { FCNCALL_CALL_CTRL_WRAP(SAMP,SAMP.FCNCALL_CALL(SAMP)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_MUSIC MUSIC;
  {
  FCNCALL_SUBNAME("MUSIC");
  { FCNCALL_CALL_CTRL_WRAP(MUSIC,MUSIC.FCNCALL_CALL(MUSIC)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_SOFSCI SOFSCI[1];
  {
  FCNCALL_SUBNAME("SOFSCI");
  FCNCALL_FOR(__i0,1)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(SOFSCI__i0,,__i0,SOFSCI[__i0].FCNCALL_CALL(SOFSCI[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_SOFTWIM SOFTWIM;
  {
  FCNCALL_SUBNAME("SOFTWIM");
  { FCNCALL_CALL_CTRL_WRAP(SOFTWIM,SOFTWIM.FCNCALL_CALL(SOFTWIM)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_SOFTOFW SOFTOFW;
  {
  FCNCALL_SUBNAME("SOFTOFW");
  { FCNCALL_CALL_CTRL_WRAP(SOFTOFW,SOFTOFW.FCNCALL_CALL(SOFTOFW)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_SOFMWPC SOFMWPC[4];
  {
  FCNCALL_SUBNAME("SOFMWPC");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(SOFMWPC__i0,,__i0,SOFMWPC[__i0].FCNCALL_CALL(SOFMWPC[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<raw_event_SST,raw_event_SST,1024> SST[6];
  {
  FCNCALL_SUBNAME("SST");
  FCNCALL_FOR(__i0,6)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(SST__i0,,__i0,SST[__i0].FCNCALL_CALL(SST[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_CALIFA CALIFA;
  {
  FCNCALL_SUBNAME("CALIFA");
  { FCNCALL_CALL_CTRL_WRAP(CALIFA,CALIFA.FCNCALL_CALL(CALIFA)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event

#ifndef USER_DEF_raw_sticky
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_sticky)::FCNCALL_NAME(raw_sticky)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_sticky_base,FCNCALL_CLASS_NAME(raw_sticky_base)::FCNCALL_CALL_BASE());
  FCNCALL_RET;
}
#endif//USER_DEF_raw_sticky

#include "gen/default_fcncall_undef.hh"


/** END_FUNCTION_CALL_PER_MEMBER **************************************/