#ifdef ZZ_INCLUDE_CODE
ZZ_4DA50:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8056); //+ 0xFFFFE088
	V0 = EMU_ReadU32(V0);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004DA50,0x8004DA68,ZZ_4DA50);
