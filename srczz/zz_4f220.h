#ifdef ZZ_INCLUDE_CODE
ZZ_4F220:
	T0 = EMU_ReadU32(A0 + 20); //+ 0x14
	T1 = EMU_ReadU32(A0 + 24); //+ 0x18
	T2 = EMU_ReadU32(A0 + 28); //+ 0x1C
	GTE_SetRegister(GTE_CREG_TRX,T0);
	GTE_SetRegister(GTE_CREG_TRY,T1);
	GTE_SetRegister(GTE_CREG_TRZ,T2);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8001EFF4,ZZ_1EFA8_4C);
	ZZ_JUMPREGISTER(0x8001EED8,ZZ_1EE74_64);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F220,0x8004F240,ZZ_4F220);
