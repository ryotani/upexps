#include "../land_common/barrier.spec"
#include "../land_common/gsi_febex_v2.spec"
#include "../land_common/land_vme.spec"
#include "../land_common/trloii.spec"
#include "../land_common/vme_gsi_vftx2.spec"
#include "../land_common/whiterabbit.spec"
#include "../land_common/gsi_tamex3.spec"
//#include "gsi_vftx2_straw.spec"

SCALER()
{
	UINT32	scaler;
}

VFTX2_STATUS()
{
	UINT32 status;
}

SUBEVENT(wr_100)
{
	ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
	multi_ = WR_MULTI();
}

SUBEVENT(empty_subev)
{
}

SUBEVENT(lmu_scalers_subev)
{
	scalers = TRLOII_LMU_SCALERS(id=0xc7);
}

SUBEVENT(los_subev)
{
	land_vme = LAND_STD_VME();
	barrier1 = BARRIER();
	barrier2 = BARRIER();
	select several {
		vftx2 = VME_GSI_VFTX2_7PS(id=2);
	}
}

SUBEVENT(los_scalers_subev)
{
	select several {
		scaler = SCALER();
	}
}

SUBEVENT(los_sampler_subev)
{
	land_vme = LAND_STD_VME();
	select several {
		sampler = TRLOII_SAMPLER(mark=0x1050);
	}
}

SUBEVENT(master_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
}

SUBEVENT(tracking_febex_subev)
{
	header0 = FEBEX_EVENTHEADER();
	select several {
		febex_0[ 0] = FEBEX_NOTRACE(sfp=0, card=0);
		febex_0[ 1] = FEBEX_NOTRACE(sfp=0, card=1);
		febex_0[ 2] = FEBEX_NOTRACE(sfp=0, card=2);
		febex_0[ 3] = FEBEX_NOTRACE(sfp=0, card=3);
		febex_0[ 4] = FEBEX_NOTRACE(sfp=0, card=4);
		febex_0[ 5] = FEBEX_NOTRACE(sfp=0, card=5);
		febex_0[ 6] = FEBEX_NOTRACE(sfp=0, card=6);
		febex_0[ 7] = FEBEX_NOTRACE(sfp=0, card=7);
		febex_0[ 8] = FEBEX_NOTRACE(sfp=0, card=8);
		febex_0[ 9] = FEBEX_NOTRACE(sfp=0, card=9);
		febex_0[10] = FEBEX_NOTRACE(sfp=0, card=10);
		febex_0[11] = FEBEX_NOTRACE(sfp=0, card=11);
		febex_0[12] = FEBEX_NOTRACE(sfp=0, card=12);
		febex_0[13] = FEBEX_NOTRACE(sfp=0, card=13);
		febex_0[14] = FEBEX_NOTRACE(sfp=0, card=14);
		febex_0[15] = FEBEX_NOTRACE(sfp=0, card=15);
		febextrace_0[ 0] = FEBEX_TRACE(sfp=0, card=0);
		febextrace_0[ 1] = FEBEX_TRACE(sfp=0, card=1);
		febextrace_0[ 2] = FEBEX_TRACE(sfp=0, card=2);
		febextrace_0[ 3] = FEBEX_TRACE(sfp=0, card=3);
		febextrace_0[ 4] = FEBEX_TRACE(sfp=0, card=4);
		febextrace_0[ 5] = FEBEX_TRACE(sfp=0, card=5);
		febextrace_0[ 6] = FEBEX_TRACE(sfp=0, card=6);
		febextrace_0[ 7] = FEBEX_TRACE(sfp=0, card=7);
		febextrace_0[ 8] = FEBEX_TRACE(sfp=0, card=8);
		febextrace_0[ 9] = FEBEX_TRACE(sfp=0, card=9);
		febextrace_0[10] = FEBEX_TRACE(sfp=0, card=10);
		febextrace_0[11] = FEBEX_TRACE(sfp=0, card=11);
		febextrace_0[12] = FEBEX_TRACE(sfp=0, card=12);
		febextrace_0[13] = FEBEX_TRACE(sfp=0, card=13);
		febextrace_0[14] = FEBEX_TRACE(sfp=0, card=14);
		febextrace_0[15] = FEBEX_TRACE(sfp=0, card=15);
	}
}

SUBEVENT(tbm_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
	select several {
		vftx2 = VME_GSI_VFTX2_LT(id=1);
	}
}

SUBEVENT(tofd_tamex_subev)
{
	header = TAMEX3_HEADER();
	select several {
		padding1 = TAMEX3_PADDING();
	}
	select several {
		tamex_1 = TAMEX3_SFP(sfp=2, card=0);
		tamex_2 = TAMEX3_SFP(sfp=2, card=1);
	}
	select several {
		padding2 = TAMEX3_PADDING();
	}
	select several {
		tamex_3 = TAMEX3_SFP(sfp=3, card=0);
		tamex_4 = TAMEX3_SFP(sfp=3, card=1);
	}
}

SUBEVENT(tofd_vme_subev)
{
	land_vme = LAND_STD_VME();
	barrier = BARRIER();
	select several {
		vftx2_1 = VME_GSI_VFTX2_7PS(id=1);
		vftx2_2 = VME_GSI_VFTX2_7PS(id=2);
		vftx2_3 = VME_GSI_VFTX2_7PS(id=3);
	}
}

SUBEVENT(tpat_subev)
{
	tpat = TRLOII_TPAT(id=0xcf);
}

EVENT
{
	master_ts = wr_100(type=10, subtype=1, control=0);
	master_tpat = tpat_subev(type=36, subtype=3600, control=0);
	master_lmu_scalers = lmu_scalers_subev(type=37, subtype=3700, control=0);
	master_vme = master_subev(type=88, subtype=8800, control=0);
	los = los_subev(type=88, subtype=8800, control=1);
	los_scalers = los_scalers_subev(type=38, subtype=3800, control=1);
	los_sampler = los_sampler_subev(type=39, subtype=3900, control=1);
	tofd_vme = tofd_vme_subev(type=88, subtype=8800, control=2);
	tofd_tamex = tofd_tamex_subev(type=102, subtype=10200, control=4);
	tracking_febex = tracking_febex_subev(type=100, subtype=10000, control=9);
	los_empty = empty_subev(type=10, subtype=1, control=1);
	tofd_empty = empty_subev(type=10, subtype=1, control=2);
}

#include "mapping.hh"
