#ifdef ZZ_INCLUDE_CODE
ZZ_164E4:
	V0 = EMU_ReadU32(A0 + 8332); //+ 0x208C
	EMU_Write32(A0 + 8328,R0); //+ 0x2088
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A0 + 8336,V0); //+ 0x2090
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80016454,ZZ_1642C_28);
	ZZ_JUMPREGISTER(0x80016508,ZZ_164F4_14);
	ZZ_JUMPREGISTER(0x8002FBA8,ZZ_2F9D4_1D4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800164E4,0x800164F4,ZZ_164E4);
