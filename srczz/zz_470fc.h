#ifdef ZZ_INCLUDE_CODE
ZZ_470FC:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A1 = A0;
	RA = 0x80047110; //ZZ_470FC_14
	A0 = 0x4;
	ZZ_CLOCKCYCLES(5,0x8003E754);
	goto ZZ_3E754;
ZZ_470FC_14:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800470B8,ZZ_47078_40);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800470FC,0x80047110,ZZ_470FC);
ZZ_MARK_TARGET(0x80047110,0x80047120,ZZ_470FC_14);
