#ifdef ZZ_INCLUDE_CODE
ZZ_2E8A4:
	AT = 0x80050000;
	EMU_Write32(AT + 26372,R0); //+ 0x6704
	AT = 0x80060000;
	EMU_Write32(AT + 6704,R0); //+ 0x1A30
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80015E48,ZZ_15B58_2F0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002E8A4,0x8002E8BC,ZZ_2E8A4);