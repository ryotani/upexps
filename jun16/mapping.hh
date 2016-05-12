SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(32): LOS01_TC1);

// LOS fine (TDC) values.
SIGNAL(LOS01_TF1, los.vftx2.time_fine[0], DATA12);
SIGNAL(LOS01_TF2, los.vftx2.time_fine[1], DATA12);
SIGNAL(LOS01_TF3, los.vftx2.time_fine[2], DATA12);
SIGNAL(LOS01_TF4, los.vftx2.time_fine[3], DATA12);

// LOS coarse (clock) values.
SIGNAL(LOS01_TC1, los.vftx2.time_coarse[0], DATA16);
SIGNAL(LOS01_TC2, los.vftx2.time_coarse[1], DATA16);
SIGNAL(LOS01_TC3, los.vftx2.time_coarse[2], DATA16);
SIGNAL(LOS01_TC4, los.vftx2.time_coarse[3], DATA16);

SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFDP1_T1_E1_TC_B1);
SIGNAL(ZERO_SUPPRESS_MULTI(32): TOFDP1_T1_E1_TF_B1);

//TOFd
//          P T E t B = Plane, Tube, Edge, time, Bar
SIGNAL(TOFDV_1_1_1_C_1, tofd_vme.vftx2_1.time_coarse[0], DATA16);
SIGNAL(TOFDV_1_1_1_F_1, tofd_vme.vftx2_1.time_fine[0], DATA12);
SIGNAL(TOFDV_1_1_2_C_1, tofd_vme.vftx2_1.time_coarse[1], DATA16);
SIGNAL(TOFDV_1_1_2_F_1, tofd_vme.vftx2_1.time_fine[1], DATA12);
SIGNAL(TOFDV_1_2_1_C_1, tofd_vme.vftx2_1.time_coarse[2], DATA16);
SIGNAL(TOFDV_1_2_1_F_1, tofd_vme.vftx2_1.time_fine[2], DATA12);
SIGNAL(TOFDV_1_2_2_C_1, tofd_vme.vftx2_1.time_coarse[3], DATA16);
SIGNAL(TOFDV_1_2_2_F_1, tofd_vme.vftx2_1.time_fine[3], DATA12);
SIGNAL(TOFDV_1_1_1_C_2, tofd_vme.vftx2_1.time_coarse[4], DATA16);
SIGNAL(TOFDV_1_1_1_F_2, tofd_vme.vftx2_1.time_fine[4], DATA12);
SIGNAL(TOFDV_1_1_2_C_2, tofd_vme.vftx2_1.time_coarse[5], DATA16);
SIGNAL(TOFDV_1_1_2_F_2, tofd_vme.vftx2_1.time_fine[5], DATA12);
SIGNAL(TOFDV_1_2_1_C_2, tofd_vme.vftx2_1.time_coarse[6], DATA16);
SIGNAL(TOFDV_1_2_1_F_2, tofd_vme.vftx2_1.time_fine[6], DATA12);
SIGNAL(TOFDV_1_2_2_C_2, tofd_vme.vftx2_1.time_coarse[7], DATA16);
SIGNAL(TOFDV_1_2_2_F_2, tofd_vme.vftx2_1.time_fine[7], DATA12);
SIGNAL(TOFDV_1_1_1_C_3, tofd_vme.vftx2_1.time_coarse[8], DATA16);
SIGNAL(TOFDV_1_1_1_F_3, tofd_vme.vftx2_1.time_fine[8], DATA12);
SIGNAL(TOFDV_1_1_2_C_3, tofd_vme.vftx2_1.time_coarse[9], DATA16);
SIGNAL(TOFDV_1_1_2_F_3, tofd_vme.vftx2_1.time_fine[9], DATA12);
SIGNAL(TOFDV_1_2_1_C_3, tofd_vme.vftx2_1.time_coarse[10], DATA16);
SIGNAL(TOFDV_1_2_1_F_3, tofd_vme.vftx2_1.time_fine[10], DATA12);
SIGNAL(TOFDV_1_2_2_C_3, tofd_vme.vftx2_1.time_coarse[11], DATA16);
SIGNAL(TOFDV_1_2_2_F_3, tofd_vme.vftx2_1.time_fine[11], DATA12);
SIGNAL(TOFDV_1_1_1_C_4, tofd_vme.vftx2_1.time_coarse[12], DATA16);
SIGNAL(TOFDV_1_1_1_F_4, tofd_vme.vftx2_1.time_fine[12], DATA12);
SIGNAL(TOFDV_1_1_2_C_4, tofd_vme.vftx2_1.time_coarse[13], DATA16);
SIGNAL(TOFDV_1_1_2_F_4, tofd_vme.vftx2_1.time_fine[13], DATA12);
SIGNAL(TOFDV_1_2_1_C_4, tofd_vme.vftx2_1.time_coarse[14], DATA16);
SIGNAL(TOFDV_1_2_1_F_4, tofd_vme.vftx2_1.time_fine[14], DATA12);
SIGNAL(TOFDV_1_2_2_C_4, tofd_vme.vftx2_1.time_coarse[15], DATA16);
SIGNAL(TOFDV_1_2_2_F_4, tofd_vme.vftx2_1.time_fine[15], DATA12);

SIGNAL(TOFDV_1_1_1_C_5, tofd_vme.vftx2_2.time_coarse[0], DATA16);
SIGNAL(TOFDV_1_1_1_F_5, tofd_vme.vftx2_2.time_fine[0], DATA12);
SIGNAL(TOFDV_1_1_2_C_5, tofd_vme.vftx2_2.time_coarse[1], DATA16);
SIGNAL(TOFDV_1_1_2_F_5, tofd_vme.vftx2_2.time_fine[1], DATA12);
SIGNAL(TOFDV_1_2_1_C_5, tofd_vme.vftx2_2.time_coarse[2], DATA16);
SIGNAL(TOFDV_1_2_1_F_5, tofd_vme.vftx2_2.time_fine[2], DATA12);
SIGNAL(TOFDV_1_2_2_C_5, tofd_vme.vftx2_2.time_coarse[3], DATA16);
SIGNAL(TOFDV_1_2_2_F_5, tofd_vme.vftx2_2.time_fine[3], DATA12);
SIGNAL(TOFDV_1_1_1_C_6, tofd_vme.vftx2_2.time_coarse[4], DATA16);
SIGNAL(TOFDV_1_1_1_F_6, tofd_vme.vftx2_2.time_fine[4], DATA12);
SIGNAL(TOFDV_1_1_2_C_6, tofd_vme.vftx2_2.time_coarse[5], DATA16);
SIGNAL(TOFDV_1_1_2_F_6, tofd_vme.vftx2_2.time_fine[5], DATA12);
SIGNAL(TOFDV_1_2_1_C_6, tofd_vme.vftx2_2.time_coarse[6], DATA16);
SIGNAL(TOFDV_1_2_1_F_6, tofd_vme.vftx2_2.time_fine[6], DATA12);
SIGNAL(TOFDV_1_2_2_C_6, tofd_vme.vftx2_2.time_coarse[7], DATA16);
SIGNAL(TOFDV_1_2_2_F_6, tofd_vme.vftx2_2.time_fine[7], DATA12);
SIGNAL(TOFDV_2_1_1_C_1, tofd_vme.vftx2_2.time_coarse[8], DATA16);
SIGNAL(TOFDV_2_1_1_F_1, tofd_vme.vftx2_2.time_fine[8], DATA12);
SIGNAL(TOFDV_2_1_2_C_1, tofd_vme.vftx2_2.time_coarse[9], DATA16);
SIGNAL(TOFDV_2_1_2_F_1, tofd_vme.vftx2_2.time_fine[9], DATA12);
SIGNAL(TOFDV_2_2_1_C_1, tofd_vme.vftx2_2.time_coarse[10], DATA16);
SIGNAL(TOFDV_2_2_1_F_1, tofd_vme.vftx2_2.time_fine[10], DATA12);
SIGNAL(TOFDV_2_2_2_C_1, tofd_vme.vftx2_2.time_coarse[11], DATA16);
SIGNAL(TOFDV_2_2_2_F_1, tofd_vme.vftx2_2.time_fine[11], DATA12);
SIGNAL(TOFDV_2_1_1_C_2, tofd_vme.vftx2_2.time_coarse[12], DATA16);
SIGNAL(TOFDV_2_1_1_F_2, tofd_vme.vftx2_2.time_fine[12], DATA12);
SIGNAL(TOFDV_2_1_2_C_2, tofd_vme.vftx2_2.time_coarse[13], DATA16);
SIGNAL(TOFDV_2_1_2_F_2, tofd_vme.vftx2_2.time_fine[13], DATA12);
SIGNAL(TOFDV_2_2_1_C_2, tofd_vme.vftx2_2.time_coarse[14], DATA16);
SIGNAL(TOFDV_2_2_1_F_2, tofd_vme.vftx2_2.time_fine[14], DATA12);
SIGNAL(TOFDV_2_2_2_C_2, tofd_vme.vftx2_2.time_coarse[15], DATA16);
SIGNAL(TOFDV_2_2_2_F_2, tofd_vme.vftx2_2.time_fine[15], DATA12);

SIGNAL(TOFDV_2_1_1_C_3, tofd_vme.vftx2_3.time_coarse[0], DATA16);
SIGNAL(TOFDV_2_1_1_F_3, tofd_vme.vftx2_3.time_fine[0], DATA12);
SIGNAL(TOFDV_2_1_2_C_3, tofd_vme.vftx2_3.time_coarse[1], DATA16);
SIGNAL(TOFDV_2_1_2_F_3, tofd_vme.vftx2_3.time_fine[1], DATA12);
SIGNAL(TOFDV_2_2_1_C_3, tofd_vme.vftx2_3.time_coarse[2], DATA16);
SIGNAL(TOFDV_2_2_1_F_3, tofd_vme.vftx2_3.time_fine[2], DATA12);
SIGNAL(TOFDV_2_2_2_C_3, tofd_vme.vftx2_3.time_coarse[3], DATA16);
SIGNAL(TOFDV_2_2_2_F_3, tofd_vme.vftx2_3.time_fine[3], DATA12);
SIGNAL(TOFDV_2_1_1_C_4, tofd_vme.vftx2_3.time_coarse[4], DATA16);
SIGNAL(TOFDV_2_1_1_F_4, tofd_vme.vftx2_3.time_fine[4], DATA12);
SIGNAL(TOFDV_2_1_2_C_4, tofd_vme.vftx2_3.time_coarse[5], DATA16);
SIGNAL(TOFDV_2_1_2_F_4, tofd_vme.vftx2_3.time_fine[5], DATA12);
SIGNAL(TOFDV_2_2_1_C_4, tofd_vme.vftx2_3.time_coarse[6], DATA16);
SIGNAL(TOFDV_2_2_1_F_4, tofd_vme.vftx2_3.time_fine[6], DATA12);
SIGNAL(TOFDV_2_2_2_C_4, tofd_vme.vftx2_3.time_coarse[7], DATA16);
SIGNAL(TOFDV_2_2_2_F_4, tofd_vme.vftx2_3.time_fine[7], DATA12);
SIGNAL(TOFDV_2_1_1_C_5, tofd_vme.vftx2_3.time_coarse[8], DATA16);
SIGNAL(TOFDV_2_1_1_F_5, tofd_vme.vftx2_3.time_fine[8], DATA12);
SIGNAL(TOFDV_2_1_2_C_5, tofd_vme.vftx2_3.time_coarse[9], DATA16);
SIGNAL(TOFDV_2_1_2_F_5, tofd_vme.vftx2_3.time_fine[9], DATA12);
SIGNAL(TOFDV_2_2_1_C_5, tofd_vme.vftx2_3.time_coarse[10], DATA16);
SIGNAL(TOFDV_2_2_1_F_5, tofd_vme.vftx2_3.time_fine[10], DATA12);
SIGNAL(TOFDV_2_2_2_C_5, tofd_vme.vftx2_3.time_coarse[11], DATA16);
SIGNAL(TOFDV_2_2_2_F_5, tofd_vme.vftx2_3.time_fine[11], DATA12);
SIGNAL(TOFDV_2_1_1_C_6, tofd_vme.vftx2_3.time_coarse[12], DATA16);
SIGNAL(TOFDV_2_1_1_F_6, tofd_vme.vftx2_3.time_fine[12], DATA12);
SIGNAL(TOFDV_2_1_2_C_6, tofd_vme.vftx2_3.time_coarse[13], DATA16);
SIGNAL(TOFDV_2_1_2_F_6, tofd_vme.vftx2_3.time_fine[13], DATA12);
SIGNAL(TOFDV_2_2_1_C_6, tofd_vme.vftx2_3.time_coarse[14], DATA16);
SIGNAL(TOFDV_2_2_1_F_6, tofd_vme.vftx2_3.time_fine[14], DATA12);
SIGNAL(TOFDV_2_2_2_C_6, tofd_vme.vftx2_3.time_coarse[15], DATA16);
SIGNAL(TOFDV_2_2_2_F_6, tofd_vme.vftx2_3.time_fine[15], DATA12);

SIGNAL(TOFDT_3_1_1_C_1, tofd_tamex.tamex_1.time_coarse[0], DATA12);
SIGNAL(TOFDT_3_1_1_F_1, tofd_tamex.tamex_1.time_fine[0], DATA12);
SIGNAL(TOFDT_3_1_2_C_1, tofd_tamex.tamex_1.time_coarse[1], DATA12);
SIGNAL(TOFDT_3_1_2_F_1, tofd_tamex.tamex_1.time_fine[1], DATA12);
SIGNAL(TOFDT_3_2_1_C_1, tofd_tamex.tamex_1.time_coarse[2], DATA12);
SIGNAL(TOFDT_3_2_1_F_1, tofd_tamex.tamex_1.time_fine[2], DATA12);
SIGNAL(TOFDT_3_2_2_C_1, tofd_tamex.tamex_1.time_coarse[3], DATA12);
SIGNAL(TOFDT_3_2_2_F_1, tofd_tamex.tamex_1.time_fine[3], DATA12);
SIGNAL(TOFDT_3_1_1_C_2, tofd_tamex.tamex_1.time_coarse[4], DATA12);
SIGNAL(TOFDT_3_1_1_F_2, tofd_tamex.tamex_1.time_fine[4], DATA12);
SIGNAL(TOFDT_3_1_2_C_2, tofd_tamex.tamex_1.time_coarse[5], DATA12);
SIGNAL(TOFDT_3_1_2_F_2, tofd_tamex.tamex_1.time_fine[5], DATA12);
SIGNAL(TOFDT_3_2_1_C_2, tofd_tamex.tamex_1.time_coarse[6], DATA12);
SIGNAL(TOFDT_3_2_1_F_2, tofd_tamex.tamex_1.time_fine[6], DATA12);
SIGNAL(TOFDT_3_2_2_C_2, tofd_tamex.tamex_1.time_coarse[7], DATA12);
SIGNAL(TOFDT_3_2_2_F_2, tofd_tamex.tamex_1.time_fine[7], DATA12);
SIGNAL(TOFDT_3_1_1_C_3, tofd_tamex.tamex_1.time_coarse[8], DATA12);
SIGNAL(TOFDT_3_1_1_F_3, tofd_tamex.tamex_1.time_fine[8], DATA12);
SIGNAL(TOFDT_3_1_2_C_3, tofd_tamex.tamex_1.time_coarse[9], DATA12);
SIGNAL(TOFDT_3_1_2_F_3, tofd_tamex.tamex_1.time_fine[9], DATA12);
SIGNAL(TOFDT_3_2_1_C_3, tofd_tamex.tamex_1.time_coarse[10], DATA12);
SIGNAL(TOFDT_3_2_1_F_3, tofd_tamex.tamex_1.time_fine[10], DATA12);
SIGNAL(TOFDT_3_2_2_C_3, tofd_tamex.tamex_1.time_coarse[11], DATA12);
SIGNAL(TOFDT_3_2_2_F_3, tofd_tamex.tamex_1.time_fine[11], DATA12);
SIGNAL(TOFDT_3_1_1_C_4, tofd_tamex.tamex_1.time_coarse[12], DATA12);
SIGNAL(TOFDT_3_1_1_F_4, tofd_tamex.tamex_1.time_fine[12], DATA12);
SIGNAL(TOFDT_3_1_2_C_4, tofd_tamex.tamex_1.time_coarse[13], DATA12);
SIGNAL(TOFDT_3_1_2_F_4, tofd_tamex.tamex_1.time_fine[13], DATA12);
SIGNAL(TOFDT_3_2_1_C_4, tofd_tamex.tamex_1.time_coarse[14], DATA12);
SIGNAL(TOFDT_3_2_1_F_4, tofd_tamex.tamex_1.time_fine[14], DATA12);
SIGNAL(TOFDT_3_2_2_C_4, tofd_tamex.tamex_1.time_coarse[15], DATA12);
SIGNAL(TOFDT_3_2_2_F_4, tofd_tamex.tamex_1.time_fine[15], DATA12);
SIGNAL(TOFDT_3_1_1_C_5, tofd_tamex.tamex_1.time_coarse[16], DATA12);
SIGNAL(TOFDT_3_1_1_F_5, tofd_tamex.tamex_1.time_fine[16], DATA12);
SIGNAL(TOFDT_3_1_2_C_5, tofd_tamex.tamex_1.time_coarse[17], DATA12);
SIGNAL(TOFDT_3_1_2_F_5, tofd_tamex.tamex_1.time_fine[17], DATA12);
SIGNAL(TOFDT_3_2_1_C_5, tofd_tamex.tamex_1.time_coarse[18], DATA12);
SIGNAL(TOFDT_3_2_1_F_5, tofd_tamex.tamex_1.time_fine[18], DATA12);
SIGNAL(TOFDT_3_2_2_C_5, tofd_tamex.tamex_1.time_coarse[19], DATA12);
SIGNAL(TOFDT_3_2_2_F_5, tofd_tamex.tamex_1.time_fine[19], DATA12);
SIGNAL(TOFDT_3_1_1_C_6, tofd_tamex.tamex_1.time_coarse[20], DATA12);
SIGNAL(TOFDT_3_1_1_F_6, tofd_tamex.tamex_1.time_fine[20], DATA12);
SIGNAL(TOFDT_3_1_2_C_6, tofd_tamex.tamex_1.time_coarse[21], DATA12);
SIGNAL(TOFDT_3_1_2_F_6, tofd_tamex.tamex_1.time_fine[21], DATA12);
SIGNAL(TOFDT_3_2_1_C_6, tofd_tamex.tamex_1.time_coarse[22], DATA12);
SIGNAL(TOFDT_3_2_1_F_6, tofd_tamex.tamex_1.time_fine[22], DATA12);
SIGNAL(TOFDT_3_2_2_C_6, tofd_tamex.tamex_1.time_coarse[23], DATA12);
SIGNAL(TOFDT_3_2_2_F_6, tofd_tamex.tamex_1.time_fine[23], DATA12);
/*
SIGNAL(TOFD_P4T1E1B1_TC, tofd_tamex.tamex[0].time_coarse[24], DATA16);
SIGNAL(TOFD_P4T1B1B1_TF, tofd_tamex.tamex[0].time_fine[24], DATA12);
SIGNAL(TOFD_P4T1E2B1_TC, tofd_tamex.tamex[0].time_coarse[25], DATA16);
SIGNAL(TOFD_P4T1E2B1_TF, tofd_tamex.tamex[0].time_fine[25], DATA12);
SIGNAL(TOFD_P4T2E1B1_TC, tofd_tamex.tamex[0].time_coarse[26], DATA16);
SIGNAL(TOFD_P4T2E1B1_TF, tofd_tamex.tamex[0].time_fine[26], DATA12);
SIGNAL(TOFD_P4T2E2B1_TC, tofd_tamex.tamex[0].time_coarse[27], DATA16);
SIGNAL(TOFD_P4T2E2B1_TF, tofd_tamex.tamex[0].time_fine[27], DATA12);
SIGNAL(TOFD_P4T1E1B2_TC, tofd_tamex.tamex[0].time_coarse[28], DATA16);
SIGNAL(TOFD_P4T1B1B2_TF, tofd_tamex.tamex[0].time_fine[28], DATA12);
SIGNAL(TOFD_P4T1E2B2_TC, tofd_tamex.tamex[0].time_coarse[29], DATA16);
SIGNAL(TOFD_P4T1E2B2_TF, tofd_tamex.tamex[0].time_fine[29], DATA12);
SIGNAL(TOFD_P4T2E1B2_TC, tofd_tamex.tamex[0].time_coarse[30], DATA16);
SIGNAL(TOFD_P4T2E1B2_TF, tofd_tamex.tamex[0].time_fine[30], DATA12);
SIGNAL(TOFD_P4T2E2B2_TC, tofd_tamex.tamex[0].time_coarse[31], DATA16);
SIGNAL(TOFD_P4T2E2B2_TF, tofd_tamex.tamex[0].time_fine[31], DATA12);
*/

//SIGNAL(TOFD_P4T1E1B3_TC, tofd_tamex.tamex[1].time_coarse[0], DATA16);
//SIGNAL(TOFD_P4T1B1B3_TF, tofd_tamex.tamex[1].time_fine[0], DATA12);
//SIGNAL(TOFD_P4T1E2B3_TC, tofd_tamex.tamex[1].time_coarse[1], DATA16);
//SIGNAL(TOFD_P4T1E2B3_TF, tofd_tamex.tamex[1].time_fine[1], DATA12);
//SIGNAL(TOFD_P4T2E1B3_TC, tofd_tamex.tamex[1].time_coarse[2], DATA16);
//SIGNAL(TOFD_P4T2E1B3_TF, tofd_tamex.tamex[1].time_fine[2], DATA12);
//SIGNAL(TOFD_P4T2E2B3_TC, tofd_tamex.tamex[1].time_coarse[3], DATA16);
//SIGNAL(TOFD_P4T2E2B3_TF, tofd_tamex.tamex[1].time_fine[3], DATA12);
//SIGNAL(TOFD_P4T1E1B4_TC, tofd_tamex.tamex[1].time_coarse[4], DATA16);
//SIGNAL(TOFD_P4T1B1B4_TF, tofd_tamex.tamex[1].time_fine[4], DATA12);
//SIGNAL(TOFD_P4T1E2B4_TC, tofd_tamex.tamex[1].time_coarse[5], DATA16);
//SIGNAL(TOFD_P4T1E2B4_TF, tofd_tamex.tamex[1].time_fine[5], DATA12);
//SIGNAL(TOFD_P4T2E1B4_TC, tofd_tamex.tamex[1].time_coarse[6], DATA16);
//SIGNAL(TOFD_P4T2E1B4_TF, tofd_tamex.tamex[1].time_fine[6], DATA12);
//SIGNAL(TOFD_P4T2E2B4_TC, tofd_tamex.tamex[1].time_coarse[7], DATA16);
//SIGNAL(TOFD_P4T2E2B4_TF, tofd_tamex.tamex[1].time_fine[7], DATA12);
//SIGNAL(TOFD_P4T1E1B5_TC, tofd_tamex.tamex[1].time_coarse[8], DATA16);
//SIGNAL(TOFD_P4T1B1B5_TF, tofd_tamex.tamex[1].time_fine[8], DATA12);
//SIGNAL(TOFD_P4T1E2B5_TC, tofd_tamex.tamex[1].time_coarse[9], DATA16);
//SIGNAL(TOFD_P4T1E2B5_TF, tofd_tamex.tamex[1].time_fine[9], DATA12);
//SIGNAL(TOFD_P4T2E1B5_TC, tofd_tamex.tamex[1].time_coarse[10], DATA16);
//SIGNAL(TOFD_P4T2E1B5_TF, tofd_tamex.tamex[1].time_fine[10], DATA12);
//SIGNAL(TOFD_P4T2E2B5_TC, tofd_tamex.tamex[1].time_coarse[11], DATA16);
//SIGNAL(TOFD_P4T2E2B5_TF, tofd_tamex.tamex[1].time_fine[11], DATA12);
//SIGNAL(TOFD_P4T1E1B6_TC, tofd_tamex.tamex[1].time_coarse[12], DATA16);
//SIGNAL(TOFD_P4T1B1B6_TF, tofd_tamex.tamex[1].time_fine[12], DATA12);
//SIGNAL(TOFD_P4T1E2B6_TC, tofd_tamex.tamex[1].time_coarse[13], DATA16);
//SIGNAL(TOFD_P4T1E2B6_TF, tofd_tamex.tamex[1].time_fine[13], DATA12);
//SIGNAL(TOFD_P4T2E1B6_TC, tofd_tamex.tamex[1].time_coarse[14], DATA16);
//SIGNAL(TOFD_P4T2E1B6_TF, tofd_tamex.tamex[1].time_fine[14], DATA12);
//SIGNAL(TOFD_P4T2E2B6_TC, tofd_tamex.tamex[1].time_coarse[15], DATA16);
//SIGNAL(TOFD_P4T2E2B6_TF, tofd_tamex.tamex[1].time_fine[15], DATA12);