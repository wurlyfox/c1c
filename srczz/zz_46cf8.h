#ifdef ZZ_INCLUDE_CODE
ZZ_46CF8:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 13712); //+ 0xFFFFCA70
	AT = 0x80060000;
	EMU_Write32(AT - 13712,A0); //+ 0xFFFFCA70
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80015798,ZZ_15738_60);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80046CF8,0x80046D10,ZZ_46CF8);
