// LOS VFTX2 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_VTF1);
SIGNAL(LOS01_VTF1, los.vftx2.time_fine[0], DATA12);
SIGNAL(LOS01_VTF2, los.vftx2.time_fine[1], DATA12);
SIGNAL(LOS01_VTF3, los.vftx2.time_fine[2], DATA12);
SIGNAL(LOS01_VTF4, los.vftx2.time_fine[3], DATA12);
SIGNAL(LOS01_VTF5, los.vftx2.time_fine[4], DATA12);
SIGNAL(LOS01_VTF6, los.vftx2.time_fine[5], DATA12);
SIGNAL(LOS01_VTF7, los.vftx2.time_fine[6], DATA12);
SIGNAL(LOS01_VTF8, los.vftx2.time_fine[7], DATA12);

// LOS VFTX2 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_VTC1);
SIGNAL(LOS01_VTC1, los.vftx2.time_coarse[0], DATA16);
SIGNAL(LOS01_VTC2, los.vftx2.time_coarse[1], DATA16);
SIGNAL(LOS01_VTC3, los.vftx2.time_coarse[2], DATA16);
SIGNAL(LOS01_VTC4, los.vftx2.time_coarse[3], DATA16);
SIGNAL(LOS01_VTC5, los.vftx2.time_coarse[4], DATA16);
SIGNAL(LOS01_VTC6, los.vftx2.time_coarse[5], DATA16);
SIGNAL(LOS01_VTC7, los.vftx2.time_coarse[6], DATA16);
SIGNAL(LOS01_VTC8, los.vftx2.time_coarse[7], DATA16);

#if defined(UNPACKER_IS_kvi2018_001_060) \
 || defined(UNPACKER_IS_kvi2018_013_020) \
 || defined(UNPACKER_IS_kvi2018_061_068) \
 || defined(UNPACKER_IS_kvi2018_069_101)
// LOS FQT/TAMEX3 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TTFL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TTFT1);
SIGNAL(LOS01_TTFL1, tamex.los_0.time_fine[1], DATA12);
SIGNAL(LOS01_TTFT1, tamex.los_0.time_fine[2], DATA12);
SIGNAL(LOS01_TTFL2, tamex.los_0.time_fine[3], DATA12);
SIGNAL(LOS01_TTFT2, tamex.los_0.time_fine[4], DATA12);
SIGNAL(LOS01_TTFL3, tamex.los_0.time_fine[5], DATA12);
SIGNAL(LOS01_TTFT3, tamex.los_0.time_fine[6], DATA12);
SIGNAL(LOS01_TTFL4, tamex.los_0.time_fine[7], DATA12);
SIGNAL(LOS01_TTFT4, tamex.los_0.time_fine[8], DATA12);
SIGNAL(LOS01_TTFL5, tamex.los_0.time_fine[9], DATA12);
SIGNAL(LOS01_TTFT5, tamex.los_0.time_fine[10], DATA12);
SIGNAL(LOS01_TTFL6, tamex.los_0.time_fine[11], DATA12);
SIGNAL(LOS01_TTFT6, tamex.los_0.time_fine[12], DATA12);
SIGNAL(LOS01_TTFL7, tamex.los_0.time_fine[13], DATA12);
SIGNAL(LOS01_TTFT7, tamex.los_0.time_fine[14], DATA12);
SIGNAL(LOS01_TTFL8, tamex.los_0.time_fine[15], DATA12);
SIGNAL(LOS01_TTFT8, tamex.los_0.time_fine[16], DATA12);

// LOS FQT/TAMEX3 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TTCL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TTCT1);
SIGNAL(LOS01_TTCL1, tamex.los_0.time_coarse[1], DATA12);
SIGNAL(LOS01_TTCT1, tamex.los_0.time_coarse[2], DATA12);
SIGNAL(LOS01_TTCL2, tamex.los_0.time_coarse[3], DATA12);
SIGNAL(LOS01_TTCT2, tamex.los_0.time_coarse[4], DATA12);
SIGNAL(LOS01_TTCL3, tamex.los_0.time_coarse[5], DATA12);
SIGNAL(LOS01_TTCT3, tamex.los_0.time_coarse[6], DATA12);
SIGNAL(LOS01_TTCL4, tamex.los_0.time_coarse[7], DATA12);
SIGNAL(LOS01_TTCT4, tamex.los_0.time_coarse[8], DATA12);
SIGNAL(LOS01_TTCL5, tamex.los_0.time_coarse[9], DATA12);
SIGNAL(LOS01_TTCT5, tamex.los_0.time_coarse[10], DATA12);
SIGNAL(LOS01_TTCL6, tamex.los_0.time_coarse[11], DATA12);
SIGNAL(LOS01_TTCT6, tamex.los_0.time_coarse[12], DATA12);
SIGNAL(LOS01_TTCL7, tamex.los_0.time_coarse[13], DATA12);
SIGNAL(LOS01_TTCT7, tamex.los_0.time_coarse[14], DATA12);
SIGNAL(LOS01_TTCL8, tamex.los_0.time_coarse[15], DATA12);
SIGNAL(LOS01_TTCT8, tamex.los_0.time_coarse[16], DATA12);
#endif

#if defined(UNPACKER_IS_kvi2018_los_padi_086_098) \
 || defined(UNPACKER_IS_kvi2018_los_padi_099_101)
// LOS PADI/TAMEX2 fine (TDC) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TTFL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TTFT1);
SIGNAL(LOS01_TTFL1, tamex.ptof_0.time_fine[17], DATA12);
SIGNAL(LOS01_TTFT1, tamex.ptof_0.time_fine[18], DATA12);
SIGNAL(LOS01_TTFL2, tamex.ptof_0.time_fine[19], DATA12);
SIGNAL(LOS01_TTFT2, tamex.ptof_0.time_fine[20], DATA12);
SIGNAL(LOS01_TTFL3, tamex.ptof_0.time_fine[21], DATA12);
SIGNAL(LOS01_TTFT3, tamex.ptof_0.time_fine[22], DATA12);
SIGNAL(LOS01_TTFL4, tamex.ptof_0.time_fine[23], DATA12);
SIGNAL(LOS01_TTFT4, tamex.ptof_0.time_fine[24], DATA12);
SIGNAL(LOS01_TTFL5, tamex.ptof_0.time_fine[25], DATA12);
SIGNAL(LOS01_TTFT5, tamex.ptof_0.time_fine[26], DATA12);
SIGNAL(LOS01_TTFL6, tamex.ptof_0.time_fine[27], DATA12);
SIGNAL(LOS01_TTFT6, tamex.ptof_0.time_fine[28], DATA12);
SIGNAL(LOS01_TTFL7, tamex.ptof_0.time_fine[29], DATA12);
SIGNAL(LOS01_TTFT7, tamex.ptof_0.time_fine[30], DATA12);
SIGNAL(LOS01_TTFL8, tamex.ptof_0.time_fine[31], DATA12);
SIGNAL(LOS01_TTFT8, tamex.ptof_0.time_fine[32], DATA12);

// LOS PADI/TAMEX2 coarse (clock) values.
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TTCL1);
SIGNAL(ZERO_SUPPRESS_MULTI(10): LOS01_TTCT1);
SIGNAL(LOS01_TTCL1, tamex.ptof_0.time_coarse[17], DATA12);
SIGNAL(LOS01_TTCT1, tamex.ptof_0.time_coarse[18], DATA12);
SIGNAL(LOS01_TTCL2, tamex.ptof_0.time_coarse[19], DATA12);
SIGNAL(LOS01_TTCT2, tamex.ptof_0.time_coarse[20], DATA12);
SIGNAL(LOS01_TTCL3, tamex.ptof_0.time_coarse[21], DATA12);
SIGNAL(LOS01_TTCT3, tamex.ptof_0.time_coarse[22], DATA12);
SIGNAL(LOS01_TTCL4, tamex.ptof_0.time_coarse[23], DATA12);
SIGNAL(LOS01_TTCT4, tamex.ptof_0.time_coarse[24], DATA12);
SIGNAL(LOS01_TTCL5, tamex.ptof_0.time_coarse[25], DATA12);
SIGNAL(LOS01_TTCT5, tamex.ptof_0.time_coarse[26], DATA12);
SIGNAL(LOS01_TTCL6, tamex.ptof_0.time_coarse[27], DATA12);
SIGNAL(LOS01_TTCT6, tamex.ptof_0.time_coarse[28], DATA12);
SIGNAL(LOS01_TTCL7, tamex.ptof_0.time_coarse[29], DATA12);
SIGNAL(LOS01_TTCT7, tamex.ptof_0.time_coarse[30], DATA12);
SIGNAL(LOS01_TTCL8, tamex.ptof_0.time_coarse[31], DATA12);
SIGNAL(LOS01_TTCT8, tamex.ptof_0.time_coarse[32], DATA12);
#endif
