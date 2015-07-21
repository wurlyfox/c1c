#ifdef ZZ_INCLUDE_CODE
ZZ_29AD8:
	A0 = EMU_ReadU32(GP + 772); //+ 0x304
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x80029AEC; //ZZ_29AD8_14
	ZZ_CLOCKCYCLES(5,0x80011C8C);
	goto ZZ_11C8C;
ZZ_29AD8_14:
	A0 = EMU_ReadU32(GP + 704); //+ 0x2C0
	RA = 0x80029AF8; //ZZ_29AD8_20
	ZZ_CLOCKCYCLES(3,0x80011C8C);
	goto ZZ_11C8C;
ZZ_29AD8_20:
	V0 = -255;
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80016470,ZZ_16420_50);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80029AD8,0x80029AEC,ZZ_29AD8);
ZZ_MARK_TARGET(0x80029AEC,0x80029AF8,ZZ_29AD8_14);
ZZ_MARK_TARGET(0x80029AF8,0x80029B0C,ZZ_29AD8_20);