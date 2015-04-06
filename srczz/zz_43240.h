#ifdef ZZ_INCLUDE_CODE
ZZ_43240:
	T8 = EMU_ReadU32(A0);
	T9 = EMU_ReadU32(A0 + 4); //+ 0x4
	GTE_SetRegister(GTE_CREG_RT11_RT12,T8);
	GTE_SetRegister(GTE_CREG_RT13_RT21,T9);
	T8 = EMU_ReadU32(A0 + 8); //+ 0x8
	T9 = EMU_ReadU32(A0 + 12); //+ 0xC
	A0 = EMU_ReadU32(A0 + 16); //+ 0x10
	GTE_SetRegister(GTE_CREG_RT22_RT23,T8);
	GTE_SetRegister(GTE_CREG_RT31_RT32,T9);
	GTE_SetRegister(GTE_CREG_RT33_NONE,A0);
#endif
ZZ_MARK_TARGET(0x80043240,0x80043268,ZZ_43240);
