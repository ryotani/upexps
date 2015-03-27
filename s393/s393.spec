// -*- C++ -*-

#define SOFT_SCALER32_CHANNELS   16
#define MULTIHIT_TDC_2277_TCALMT 1

#include "spec/spec.spec"
#include "siderem01_vme.spec"
#include "cros3_ext.spec"
#include "land_camac_converter.spec"
#include "land_camac_scaler.spec"
#include "land_camac_pileup.spec"
#include "land_fastbus.spec"
#include "land_vme.spec"
#include "land_type_subtype.spec"

#include "vuprom_v35.spec"
#include "tacquila_map.spec"
#include "tacquila.spec"

DUMMY_WORD()
{
  UINT32 dummy_word;
}

SUBEVENT(DUMMY)
{
  select several
  {
    d = DUMMY_WORD();
  }
}


EVENT
{
  cros3    = CROS3_SUBEVENT(type = SUBEVENT_CROS3,subtype = SUBEVENT_CROS3_DATA);

  cros3_rewrite = CROS3_REWRITE_SUBEVENT(type = SUBEVENT_CROS3,subtype = SUBEVENT_CROS3_DATA_REWRITE);
  
  sst      = SIDEREM01_VME(type = SUBEVENT_SST,subtype = SUBEVENT_SST_DATA8200,control=3);
  camac    = LAND_CAMAC_CONVERTER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_CONVERTERS);
  fastbus1 = LAND_FASTBUS1(type = SUBEVENT_FASTBUS, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 1);
  fastbus2 = LAND_FASTBUS2(type = SUBEVENT_FASTBUS, subtype = SUBEVENT_FASTBUS_DATA3130, subcrate = 2);
  acq      = DUMMY(type = SUBEVENT_START_STOP_ACQ, subtype = 3100);

  vme2     = CB_VME(type = SUBEVENT_VME, subtype = SUBEVENT_VME_DATA8800,control=5,subcrate=2);
  vme3     = CB_VME(type = SUBEVENT_VME, subtype = SUBEVENT_VME_DATA8800,control=5,subcrate=3);

  vme4     = MASTER_VME(type = SUBEVENT_VME, subtype = SUBEVENT_VME_DATA8800,subcrate=4);

  camac_tcal_info = LAND_CAMAC_TCAL_INFO(type = SUBEVENT_CAMAC_TCAL, subtype = SUBEVENT_CAMAC_TCAL_INFO);
  camac_scalers = LAND_CAMAC_SCALER(type = SUBEVENT_CAMAC, subtype = SUBEVENT_CAMAC_SCALERS);
  fastbus1_error = LAND_FASTBUS_ERROR_NGF(type = SUBEVENT_FASTBUS_ERROR, subtype = SUBEVENT_FASTBUS_ERROR_INFO3131,subcrate=1);
  fastbus2_error = LAND_FASTBUS_ERROR_NGF(type = SUBEVENT_FASTBUS_ERROR, subtype = SUBEVENT_FASTBUS_ERROR_INFO3131,subcrate=2);
  pileup = LAND_CAMAC_PILEUP(type=34,subtype=3500,control=1);

  tacquila = TACQUILA_LAND_SUBEVENT(type=94,subtype=9400);
}

#include "mapping.hh"

SIGNAL(SST8_1024_E, , DATA12);
SIGNAL(ZERO_SUPPRESS: SST2_1024);

// SIGNAL(MASTER_ACCEPT,vme.scaler[1].data[0],DATA32);
// SIGNAL(MASTER_WANTED,vme.scaler[1].data[1],DATA32);

// the 16 gives the number of entries in the NO_INDEX_LIST
// the 1 gives the index where it's suppose to be inserted
// todo: enforce use of 1 in ucesb on list_ii
SIGNAL(PILEUP_1_T,pileup.tdc.data,DATA16); 
SIGNAL(NO_INDEX_LIST: PILEUP_16);

SIGNAL(TCALMT_1_T,pileup.tcal.data,DATA16); 
SIGNAL(NO_INDEX_LIST: TCALMT_16);

SIGNAL(TCALT,,float);
SIGNAL(TCALE,,float);

SIGNAL(TPREV,,float);
SIGNAL(TNEXT,,float);

SIGNAL(ZERO_SUPPRESS: N1_1); 
SIGNAL(ZERO_SUPPRESS: V1_1); 
SIGNAL(ZERO_SUPPRESS: TFW1); 
SIGNAL(ZERO_SUPPRESS: NTF1); 
SIGNAL(ZERO_SUPPRESS: DTF1); 

SIGNAL(ZERO_SUPPRESS: XB1); 
SIGNAL(ZERO_SUPPRESS: CS1);
SIGNAL(ZERO_SUPPRESS: CV1);
SIGNAL(ZERO_SUPPRESS: GFI1_1);
SIGNAL(ZERO_SUPPRESS: FGR1_1);
