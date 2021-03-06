// -*- C++ -*-


#include "vme_fzr.spec"


// Our event consists of two subevents which are two VME crates that were used
// The subevents are separated by the VME processor ID 
EVENT
{
  vme0 = CRATE(type=10,subtype=1);
}

SUBEVENT(CRATE)
{
   block = VME_FZR();
}




SIGNAL(D01, vme0.block.data[0],DATA32);
SIGNAL(D02, vme0.block.data[1],DATA32);
SIGNAL(D03, vme0.block.data[2],DATA32);
SIGNAL(D04, vme0.block.data[3],DATA32);
SIGNAL(D05, vme0.block.data[4],DATA32);
SIGNAL(D06, vme0.block.data[5],DATA32);
SIGNAL(D07, vme0.block.data[6],DATA32);
SIGNAL(D08, vme0.block.data[7],DATA32);
SIGNAL(D09, vme0.block.data[8],DATA32);
SIGNAL(D10, vme0.block.data[9],DATA32);
SIGNAL(D11, vme0.block.data[10],DATA32);
SIGNAL(D12, vme0.block.data[11],DATA32);
SIGNAL(D13, vme0.block.data[12],DATA32);
SIGNAL(D14, vme0.block.data[13],DATA32);
SIGNAL(D15, vme0.block.data[14],DATA32);
SIGNAL(D16, vme0.block.data[15],DATA32);
SIGNAL(D17, vme0.block.data[16],DATA32);
SIGNAL(D18, vme0.block.data[17],DATA32);
SIGNAL(D19, vme0.block.data[18],DATA32);
SIGNAL(D20, vme0.block.data[19],DATA32);
SIGNAL(D21, vme0.block.data[20],DATA32);
SIGNAL(D22, vme0.block.data[21],DATA32);
SIGNAL(D23, vme0.block.data[22],DATA32);
SIGNAL(D24, vme0.block.data[23],DATA32);
SIGNAL(D25, vme0.block.data[24],DATA32);
SIGNAL(D26, vme0.block.data[25],DATA32);
SIGNAL(D27, vme0.block.data[26],DATA32);
SIGNAL(D28, vme0.block.data[27],DATA32);
SIGNAL(D29, vme0.block.data[28],DATA32);
SIGNAL(D30, vme0.block.data[29],DATA32);
SIGNAL(D31, vme0.block.data[30],DATA32);
SIGNAL(D32, vme0.block.data[31],DATA32);


