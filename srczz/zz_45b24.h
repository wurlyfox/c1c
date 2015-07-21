#ifdef ZZ_INCLUDE_CODE
ZZ_45B24:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22628); //+ 0x5864
	SP -= 32;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = EMU_ReadU8(V0);
	S2 = 0x80050000;
	S2 += 22653;
	S1 = V0 & 0x3;
	ZZ_CLOCKCYCLES(11,0x80045B50);
ZZ_45B24_2C:
	RA = 0x80045B58; //ZZ_45B24_34
	ZZ_CLOCKCYCLES(2,0x80043BA8);
	goto ZZ_43BA8;
ZZ_45B24_34:
	S0 = V0;
	if (!S0)
	{
		V0 = S0 & 0x4;
		ZZ_CLOCKCYCLES(3,0x80045BD8);
		goto ZZ_45B24_B4;
	}
	V0 = S0 & 0x4;
	if (!V0)
	{
		V0 = S0 & 0x2;
		ZZ_CLOCKCYCLES(5,0x80045B98);
		goto ZZ_45B24_74;
	}
	V0 = S0 & 0x2;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21924); //+ 0x55A4
	if (!V0)
	{
		ZZ_CLOCKCYCLES(10,0x80045B94);
		goto ZZ_45B24_70;
	}
	A0 = EMU_ReadU8(S2);
	A1 = 0x80050000;
	A1 += 29088;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80045B94; //ZZ_45B24_70
	ZZ_CLOCKCYCLES_JR(15);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,80045B8C)
	ZZ_JUMPREGISTER_END();
ZZ_45B24_70:
	V0 = S0 & 0x2;
	ZZ_CLOCKCYCLES(1,0x80045B98);
ZZ_45B24_74:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80045B50);
		goto ZZ_45B24_2C;
	}
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 21920); //+ 0x55A0
	if (!V1)
	{
		ZZ_CLOCKCYCLES(7,0x80045B50);
		goto ZZ_45B24_2C;
	}
	V0 = 0x80050000;
	V0 += 22652;
	A0 = EMU_ReadU8(V0);
	A1 = 0x80050000;
	A1 += 29080;
	ZZ_JUMPREGISTER_BEGIN(V1);
	RA = 0x80045BD0; //ZZ_45B24_AC
	ZZ_CLOCKCYCLES_JR(14);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V1,80045BC8)
	ZZ_JUMPREGISTER_END();
ZZ_45B24_AC:
	ZZ_CLOCKCYCLES(2,0x80045B50);
	goto ZZ_45B24_2C;
ZZ_45B24_B4:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22628); //+ 0x5864
	EMU_Write8(V0,S1);
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80045B24,0x80045B50,ZZ_45B24);
ZZ_MARK_TARGET(0x80045B50,0x80045B58,ZZ_45B24_2C);
ZZ_MARK_TARGET(0x80045B58,0x80045B94,ZZ_45B24_34);
ZZ_MARK_TARGET(0x80045B94,0x80045B98,ZZ_45B24_70);
ZZ_MARK_TARGET(0x80045B98,0x80045BD0,ZZ_45B24_74);
ZZ_MARK_TARGET(0x80045BD0,0x80045BD8,ZZ_45B24_AC);
ZZ_MARK_TARGET(0x80045BD8,0x80045C04,ZZ_45B24_B4);