// FRS scintillator
// LEFT ch1/16
// RIGHT ch2/16
// TREF ch11/16


// sofia scintillator at S2 :  sofsci2
// TF1 : PMT RIGHT - FINE TIME ch14/16
// TF2 : PMT LEFT - FINE TIME ch13/16
// TF3 : REFERENCE SIGNAL - FINE TIME ch 10/16
// TC1 : PMT RIGHT - CLOCK COUNT
// TC2 : PMT LEFT - CLOCK COUNT
// TC3 : REFERENCE SIGNAL - CLOCK COUNT

// scintillator at S8 : sofsci2
// TF1 : RIGHT - FINE TIME ch2/16
// TF2 : LEFT - FINE TIME ch1/16
// TF3 : MASTER START - FINE TIME ch4/16
// TC1 : RIGHT - CLOCK COUNT ch1
// TC2 : LEFT - CLOCK COUNT ch2
// TC3 : MASTER START - CLOCK COUNT ch4

// sofia scintillator at cave C : sofsci3
// TF1 : PMT RIGHT - FINE TIME
// TF2 : PMT LEFT - FINE TIME
// TF3 : REFERENCE SIGNAL - FINE TIME
// TC1 : PMT RIGHT - CLOCK COUNT
// TC2 : PMT LEFT - CLOCK COUNT
// TC3 : REFERENCE SIGNAL - CLOCK COUNT

SIGNAL(ZERO_SUPPRESS_MULTI(50):SOFSCI1_TF1);
SIGNAL(ZERO_SUPPRESS_MULTI(50):SOFSCI1_TC1);

// FRS scintillator at S2
// PMT RIGHT
SIGNAL(SOFSCI1_TF1,s2_vme.data.vftx21.time_fine[1],DATA12);
SIGNAL(SOFSCI1_TC1,s2_vme.data.vftx21.time_coarse[1],DATA16);
// PMT LEFT
SIGNAL(SOFSCI1_TF2,s2_vme.data.vftx21.time_fine[0],DATA12);
SIGNAL(SOFSCI1_TC2,s2_vme.data.vftx21.time_coarse[0],DATA16);
// REFERENCE SIGNAL
SIGNAL(SOFSCI1_TF3,s2_vme.data.vftx21.time_fine[10],DATA12);
SIGNAL(SOFSCI1_TC3,s2_vme.data.vftx21.time_coarse[10],DATA16);

// SOFIA scintillator at S2
// PMT RIGHT
SIGNAL(SOFSCI2_TF1,s2_vme.data.vftx21.time_fine[13],DATA12);
SIGNAL(SOFSCI2_TC1,s2_vme.data.vftx21.time_coarse[13],DATA16);
// PMT LEFT
SIGNAL(SOFSCI2_TF2,s2_vme.data.vftx21.time_fine[12],DATA12);
SIGNAL(SOFSCI2_TC2,s2_vme.data.vftx21.time_coarse[12],DATA16);
// REFERENCE SIGNAL
SIGNAL(SOFSCI2_TF3,s2_vme.data.vftx21.time_fine[9],DATA12);
SIGNAL(SOFSCI2_TC3,s2_vme.data.vftx21.time_coarse[9],DATA16);

// scintillator at S8
// S8 PMT RIGHT
SIGNAL(SOFSCI3_TF1,s8_vme.data.vftx21.time_fine[1],DATA12);
SIGNAL(SOFSCI3_TC1,s8_vme.data.vftx21.time_coarse[1],DATA16);
// S8 PMT LEFT
SIGNAL(SOFSCI3_TF2,s8_vme.data.vftx21.time_fine[0],DATA12);
SIGNAL(SOFSCI3_TC2,s8_vme.data.vftx21.time_coarse[0],DATA16);
// S8 REFERENCE SIGNAL
SIGNAL(SOFSCI3_TF3,s8_vme.data.vftx21.time_fine[3],DATA12);
SIGNAL(SOFSCI3_TC3,s8_vme.data.vftx21.time_coarse[3],DATA16);

// SOFIA scintillator at Cave C
// PMT RIGHT
SIGNAL(SOFSCI4_TF1,sofia_tof.data.vftx2[1].time_fine[15],DATA12);
SIGNAL(SOFSCI4_TC1,sofia_tof.data.vftx2[1].time_coarse[15],DATA16);
// PMT LEFT
SIGNAL(SOFSCI4_TF2,sofia_tof.data.vftx2[0].time_fine[15],DATA12);
SIGNAL(SOFSCI4_TC2,sofia_tof.data.vftx2[0].time_coarse[15],DATA16);
// REFERENCE SIGNAL
SIGNAL(SOFSCI4_TF3,sofia_tof.data.vftx2[2].time_fine[15],DATA12);
SIGNAL(SOFSCI4_TC3,sofia_tof.data.vftx2[2].time_coarse[15],DATA16);


