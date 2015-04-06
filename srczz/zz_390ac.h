#ifdef ZZ_INCLUDE_CODE
ZZ_390AC:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A1;
	A0 = S2 >> 12;
	A1 = A0 & 0xFFF;
	A2 = A1;
	V1 = A0 & 0xE00;
	V0 = 0xE00;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	if (V1 != V0)
	{
		EMU_Write32(SP + 20,S1); //+ 0x14
		ZZ_CLOCKCYCLES(13,0x80039114);
		goto ZZ_390AC_68;
	}
	EMU_Write32(SP + 20,S1); //+ 0x14
	V0 = 0xE1F;
	if (A1 != V0)
	{
		V0 = A0 & 0x1FF;
		ZZ_CLOCKCYCLES(16,0x80039104);
		goto ZZ_390AC_58;
	}
	V0 = A0 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	S1 = V0;
	EMU_Write32(S0 + 188,S1); //+ 0xBC
	ZZ_CLOCKCYCLES(22,0x80039124);
	goto ZZ_390AC_78;
ZZ_390AC_58:
	V0 <<= 2;
	V0 += 64;
	S1 = S0 + V0;
	ZZ_CLOCKCYCLES(4,0x80039124);
	goto ZZ_390AC_78;
ZZ_390AC_68:
	A0 = S0;
	RA = 0x80039120; //ZZ_390AC_74
	A1 = A2;
	ZZ_CLOCKCYCLES(3,0x80036FA4);
	goto ZZ_36FA4;
ZZ_390AC_74:
	S1 = V0;
	ZZ_CLOCKCYCLES(1,0x80039124);
ZZ_390AC_78:
	A0 = S2 & 0xFFF;
	V1 = S2 & 0xE00;
	V0 = 0xE00;
	if (V1 != V0)
	{
		A1 = A0;
		ZZ_CLOCKCYCLES(5,0x80039168);
		goto ZZ_390AC_BC;
	}
	A1 = A0;
	V0 = 0xE1F;
	if (A0 != V0)
	{
		V0 = S2 & 0x1FF;
		ZZ_CLOCKCYCLES(8,0x80039158);
		goto ZZ_390AC_AC;
	}
	V0 = S2 & 0x1FF;
	V0 = EMU_ReadU32(S0 + 188); //+ 0xBC
	V0 -= 4;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(13,0x80039170);
	goto ZZ_390AC_C4;
ZZ_390AC_AC:
	V0 <<= 2;
	V0 += 64;
	V0 += S0;
	ZZ_CLOCKCYCLES(4,0x80039170);
	goto ZZ_390AC_C4;
ZZ_390AC_BC:
	RA = 0x80039170; //ZZ_390AC_C4
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80036FA4);
	goto ZZ_36FA4;
ZZ_390AC_C4:
	A0 = EMU_ReadU32(V0);
	RA = 0x8003917C; //ZZ_390AC_D0
	A1 = S1;
	ZZ_CLOCKCYCLES(3,0x80026250);
	goto ZZ_26250;
ZZ_390AC_D0:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x8003A26C,ZZ_3A234_38);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800390AC,0x80039104,ZZ_390AC);
ZZ_MARK_TARGET(0x80039104,0x80039114,ZZ_390AC_58);
ZZ_MARK_TARGET(0x80039114,0x80039120,ZZ_390AC_68);
ZZ_MARK_TARGET(0x80039120,0x80039124,ZZ_390AC_74);
ZZ_MARK_TARGET(0x80039124,0x80039158,ZZ_390AC_78);
ZZ_MARK_TARGET(0x80039158,0x80039168,ZZ_390AC_AC);
ZZ_MARK_TARGET(0x80039168,0x80039170,ZZ_390AC_BC);
ZZ_MARK_TARGET(0x80039170,0x8003917C,ZZ_390AC_C4);
ZZ_MARK_TARGET(0x8003917C,0x80039198,ZZ_390AC_D0);
