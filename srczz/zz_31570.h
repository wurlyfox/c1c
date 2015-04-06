#ifdef ZZ_INCLUDE_CODE
ZZ_31570:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A2 = EMU_ReadU32(A1);
	V0 = EMU_ReadU32(A0);
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	A1 = EMU_ReadU32(A0 + 8); //+ 0x8
	A0 = A2 - V0;
	RA = 0x80031594; //ZZ_31570_24
	A1 = V1 - A1;
	ZZ_CLOCKCYCLES(9,0x8004F310);
	goto ZZ_4F310;
ZZ_31570_24:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	V0 &= 0xFFF;
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80037A90,ZZ_37930_160);
	ZZ_JUMPREGISTER(0x80037AF0,ZZ_37930_1C0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80031570,0x80031594,ZZ_31570);
ZZ_MARK_TARGET(0x80031594,0x800315A4,ZZ_31570_24);
