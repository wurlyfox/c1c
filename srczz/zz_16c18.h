#ifdef ZZ_INCLUDE_CODE
ZZ_16C18:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26384); //+ 0x6710
	SP -= 40;
	EMU_Write32(SP + 36,RA); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	V1 = V0 - 25;
	V0 = V1 < 28;
	if (!V0)
	{
		EMU_Write32(SP + 24,S0); //+ 0x18
		ZZ_CLOCKCYCLES(10,0x80016C64);
		goto ZZ_16C18_4C;
	}
	EMU_Write32(SP + 24,S0); //+ 0x18
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 728); //+ 0x2D8
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(17);
	ZZ_JUMPREGISTER(0x80016C5C,ZZ_16C18_44);
	ZZ_JUMPREGISTER(0x80016C64,ZZ_16C18_4C);
	ZZ_JUMPREGISTER_END();
ZZ_16C18_44:
	RA = 0x80016C64; //ZZ_16C18_4C
	ZZ_CLOCKCYCLES(2,0x8003CE20);
	goto ZZ_3CE20;
ZZ_16C18_4C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31744); //+ 0xFFFF8400
	if ((int32_t)V0 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(5,0x80016CF4);
		goto ZZ_16C18_DC;
	}
	S0 = R0;
	S2 = R0;
	ZZ_CLOCKCYCLES(6,0x80016C7C);
ZZ_16C18_64:
	V0 = 0x80060000;
	V0 -= 31728;
	S1 = S2 + V0;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 26384); //+ 0x6710
	V0 = 0x19;
	if (V1 == V0)
	{
		V0 = 0x38;
		ZZ_CLOCKCYCLES(8,0x80016CAC);
		goto ZZ_16C18_94;
	}
	V0 = 0x38;
	if (V1 == V0)
	{
		A0 = 0x10000;
		ZZ_CLOCKCYCLES(10,0x80016CB8);
		goto ZZ_16C18_A0;
	}
	A0 = 0x10000;
	A0 |= 0x6000;
	ZZ_CLOCKCYCLES(12,0x80016CBC);
	goto ZZ_16C18_A4;
ZZ_16C18_94:
	A0 = 0x10000;
	A0 |= 0xE000;
	ZZ_CLOCKCYCLES(3,0x80016CBC);
	goto ZZ_16C18_A4;
ZZ_16C18_A0:
	A0 |= 0xCC00;
	ZZ_CLOCKCYCLES(1,0x80016CBC);
ZZ_16C18_A4:
	RA = 0x80016CC4; //ZZ_16C18_AC
	ZZ_CLOCKCYCLES(2,0x80011A58);
	goto ZZ_11A58;
ZZ_16C18_AC:
	if (V0)
	{
		EMU_Write32(S1 + 116,V0); //+ 0x74
		ZZ_CLOCKCYCLES(2,0x80016CD4);
		goto ZZ_16C18_BC;
	}
	EMU_Write32(S1 + 116,V0); //+ 0x74
	RA = 0x80016CD4; //ZZ_16C18_BC
	A0 = -15;
	ZZ_CLOCKCYCLES(4,0x8003D680);
	goto ZZ_3D680;
ZZ_16C18_BC:
	RA = 0x80016CDC; //ZZ_16C18_C4
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x80016DCC);
	goto ZZ_16DCC;
ZZ_16C18_C4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31744); //+ 0xFFFF8400
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		S2 += 8328;
		ZZ_CLOCKCYCLES(6,0x80016C7C);
		goto ZZ_16C18_64;
	}
	S2 += 8328;
	ZZ_CLOCKCYCLES(6,0x80016CF4);
ZZ_16C18_DC:
	V0 = -255;
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x80015E48,ZZ_15B58_2F0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80016C18,0x80016C5C,ZZ_16C18);
ZZ_MARK_TARGET(0x80016C5C,0x80016C64,ZZ_16C18_44);
ZZ_MARK_TARGET(0x80016C64,0x80016C7C,ZZ_16C18_4C);
ZZ_MARK_TARGET(0x80016C7C,0x80016CAC,ZZ_16C18_64);
ZZ_MARK_TARGET(0x80016CAC,0x80016CB8,ZZ_16C18_94);
ZZ_MARK_TARGET(0x80016CB8,0x80016CBC,ZZ_16C18_A0);
ZZ_MARK_TARGET(0x80016CBC,0x80016CC4,ZZ_16C18_A4);
ZZ_MARK_TARGET(0x80016CC4,0x80016CD4,ZZ_16C18_AC);
ZZ_MARK_TARGET(0x80016CD4,0x80016CDC,ZZ_16C18_BC);
ZZ_MARK_TARGET(0x80016CDC,0x80016CF4,ZZ_16C18_C4);
ZZ_MARK_TARGET(0x80016CF4,0x80016D14,ZZ_16C18_DC);
