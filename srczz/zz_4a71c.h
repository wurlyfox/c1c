#ifdef ZZ_INCLUDE_CODE
ZZ_4A71C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12788); //+ 0xFFFFCE0C
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12784); //+ 0xFFFFCE10
	SP -= 32;
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = EMU_ReadU32(V0);
	V0 = EMU_ReadU32(V1);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12780); //+ 0xFFFFCE14
	V0 = V0 - V1;
	if ((int32_t)A0 >= 0)
	{
		S1 = V0 & 0xFFFF;
		ZZ_CLOCKCYCLES(16,0x8004A76C);
		goto ZZ_4A71C_50;
	}
	S1 = V0 & 0xFFFF;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8400); //+ 0xFFFFDF30
	ZZ_CLOCKCYCLES(20,0x8004A84C);
	goto ZZ_4A71C_130;
ZZ_4A71C_50:
	V0 = 1;
	if (A0 == V0)
	{
		V0 = S1;
		ZZ_CLOCKCYCLES(3,0x8004A84C);
		goto ZZ_4A71C_130;
	}
	V0 = S1;
	if ((int32_t)A0 <= 0)
	{
		ZZ_CLOCKCYCLES(5,0x8004A798);
		goto ZZ_4A71C_7C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12776); //+ 0xFFFFCE18
	V0 -= 1;
	V0 += A0;
	ZZ_CLOCKCYCLES(11,0x8004A7A0);
	goto ZZ_4A71C_84;
ZZ_4A71C_7C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12776); //+ 0xFFFFCE18
	ZZ_CLOCKCYCLES(2,0x8004A7A0);
ZZ_4A71C_84:
	if ((int32_t)A0 <= 0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(2,0x8004A7AC);
		goto ZZ_4A71C_90;
	}
	A1 = R0;
	A1 = A0 - 1;
	ZZ_CLOCKCYCLES(3,0x8004A7AC);
ZZ_4A71C_90:
	RA = 0x8004A7B4; //ZZ_4A71C_98
	A0 = V0;
	ZZ_CLOCKCYCLES(2,0x8004A864);
	goto ZZ_4A864;
ZZ_4A71C_98:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12788); //+ 0xFFFFCE0C
	S0 = EMU_ReadU32(V0);
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 8400); //+ 0xFFFFDF30
	A1 = 1;
	RA = 0x8004A7D8; //ZZ_4A71C_BC
	A0 += 1;
	ZZ_CLOCKCYCLES(9,0x8004A864);
	goto ZZ_4A864;
ZZ_4A71C_BC:
	V0 = 0x400000;
	V0 &= S0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8004A824);
		goto ZZ_4A71C_108;
	}
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12788); //+ 0xFFFFCE0C
	V0 = EMU_ReadU32(V1);
	V0 ^= S0;
	if ((int32_t)V0 < 0)
	{
		ZZ_CLOCKCYCLES(12,0x8004A824);
		goto ZZ_4A71C_108;
	}
	A0 = 0x80000000;
	ZZ_CLOCKCYCLES(13,0x8004A80C);
ZZ_4A71C_F0:
	V0 = EMU_ReadU32(V1);
	V0 ^= S0;
	V0 &= A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8004A80C);
		goto ZZ_4A71C_F0;
	}
	ZZ_CLOCKCYCLES(6,0x8004A824);
ZZ_4A71C_108:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8400); //+ 0xFFFFDF30
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12784); //+ 0xFFFFCE10
	AT = 0x80060000;
	EMU_Write32(AT - 12776,V0); //+ 0xFFFFCE18
	V1 = EMU_ReadU32(V1);
	V0 = S1;
	AT = 0x80060000;
	EMU_Write32(AT - 12780,V1); //+ 0xFFFFCE14
	ZZ_CLOCKCYCLES(10,0x8004A84C);
ZZ_4A71C_130:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80047974,ZZ_47940_34);
	ZZ_JUMPREGISTER(0x80049340,ZZ_49310_30);
	ZZ_JUMPREGISTER(0x800365A8,ZZ_364A8_100);
	ZZ_JUMPREGISTER(0x800479B4,ZZ_47940_74);
	ZZ_JUMPREGISTER(0x80048764,ZZ_48740_24);
	ZZ_JUMPREGISTER(0x800365B8,ZZ_364A8_110);
	ZZ_JUMPREGISTER(0x800365C8,ZZ_364A8_120);
	ZZ_JUMPREGISTER(0x8004805C,ZZ_47E8C_1D0);
	ZZ_JUMPREGISTER(0x800365D8,ZZ_364A8_130);
	ZZ_JUMPREGISTER(0x80049370,ZZ_49310_60);
	ZZ_JUMPREGISTER(0x800487A8,ZZ_48740_68);
	ZZ_JUMPREGISTER(0x80047BF8,ZZ_47BC0_38);
	ZZ_JUMPREGISTER(0x800480AC,ZZ_47E8C_220);
	ZZ_JUMPREGISTER(0x80048FC0,ZZ_48F5C_64);
	ZZ_JUMPREGISTER(0x800492D0,ZZ_4920C_C4);
	ZZ_JUMPREGISTER(0x80048FF0,ZZ_48F5C_94);
	ZZ_JUMPREGISTER(0x80016970,ZZ_1658C_3E4);
	ZZ_JUMPREGISTER(0x80047C3C,ZZ_47BC0_7C);
	ZZ_JUMPREGISTER(0x800169A0,ZZ_1658C_414);
	ZZ_JUMPREGISTER(0x80049148,ZZ_48F5C_1EC);
	ZZ_JUMPREGISTER(0x80035890,ZZ_3578C_104);
	ZZ_JUMPREGISTER(0x800358AC,ZZ_3578C_120);
	ZZ_JUMPREGISTER(0x80035A20,ZZ_3578C_294);
	ZZ_JUMPREGISTER(0x8004EC18,ZZ_4EC08_10);
	ZZ_JUMPREGISTER(0x80048D3C,ZZ_48B90_1AC);
	ZZ_JUMPREGISTER(0x80048D68,ZZ_48B90_1D8);
	ZZ_JUMPREGISTER(0x8004EC4C,ZZ_4EC3C_10);
	ZZ_JUMPREGISTER(0x80048DA8,ZZ_48B90_218);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A71C,0x8004A76C,ZZ_4A71C);
ZZ_MARK_TARGET(0x8004A76C,0x8004A798,ZZ_4A71C_50);
ZZ_MARK_TARGET(0x8004A798,0x8004A7A0,ZZ_4A71C_7C);
ZZ_MARK_TARGET(0x8004A7A0,0x8004A7AC,ZZ_4A71C_84);
ZZ_MARK_TARGET(0x8004A7AC,0x8004A7B4,ZZ_4A71C_90);
ZZ_MARK_TARGET(0x8004A7B4,0x8004A7D8,ZZ_4A71C_98);
ZZ_MARK_TARGET(0x8004A7D8,0x8004A80C,ZZ_4A71C_BC);
ZZ_MARK_TARGET(0x8004A80C,0x8004A824,ZZ_4A71C_F0);
ZZ_MARK_TARGET(0x8004A824,0x8004A84C,ZZ_4A71C_108);
ZZ_MARK_TARGET(0x8004A84C,0x8004A864,ZZ_4A71C_130);
