#ifdef ZZ_INCLUDE_CODE
ZZ_500D0:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	if (!S0)
	{
		EMU_Write32(SP + 20,RA); //+ 0x14
		ZZ_CLOCKCYCLES(5,0x800500F8);
		goto ZZ_500D0_28;
	}
	EMU_Write32(SP + 20,RA); //+ 0x14
	V0 = 1;
	if (S0 == V0)
	{
		ZZ_CLOCKCYCLES(8,0x80050118);
		goto ZZ_500D0_48;
	}
	ZZ_CLOCKCYCLES(10,0x80050184);
	goto ZZ_500D0_B4;
ZZ_500D0_28:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V1 + 426); //+ 0x1AA
	AT = 0x80060000;
	EMU_Write32(AT - 5396,R0); //+ 0xFFFFEAEC
	V0 &= 0xFF7F;
	ZZ_CLOCKCYCLES(8,0x80050180);
	goto ZZ_500D0_B0;
ZZ_500D0_48:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5392); //+ 0xFFFFEAF0
	if (V0 == S0)
	{
		ZZ_CLOCKCYCLES(5,0x80050164);
		goto ZZ_500D0_94;
	}
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5388); //+ 0xFFFFEAF4
	RA = 0x8005013C; //ZZ_500D0_6C
	ZZ_CLOCKCYCLES(9,0x800503B0);
	goto ZZ_503B0;
ZZ_500D0_6C:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80050164);
		goto ZZ_500D0_94;
	}
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V1 + 426); //+ 0x1AA
	AT = 0x80060000;
	EMU_Write32(AT - 5396,R0); //+ 0xFFFFEAEC
	V0 &= 0xFF7F;
	ZZ_CLOCKCYCLES(10,0x80050180);
	goto ZZ_500D0_B0;
ZZ_500D0_94:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V1 + 426); //+ 0x1AA
	AT = 0x80060000;
	EMU_Write32(AT - 5396,S0); //+ 0xFFFFEAEC
	V0 |= 0x80;
	ZZ_CLOCKCYCLES(7,0x80050180);
ZZ_500D0_B0:
	EMU_Write16(V1 + 426,V0); //+ 0x1AA
	ZZ_CLOCKCYCLES(1,0x80050184);
ZZ_500D0_B4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5396); //+ 0xFFFFEAEC
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x800328C8,ZZ_32894_34);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800500D0,0x800500F8,ZZ_500D0);
ZZ_MARK_TARGET(0x800500F8,0x80050118,ZZ_500D0_28);
ZZ_MARK_TARGET(0x80050118,0x8005013C,ZZ_500D0_48);
ZZ_MARK_TARGET(0x8005013C,0x80050164,ZZ_500D0_6C);
ZZ_MARK_TARGET(0x80050164,0x80050180,ZZ_500D0_94);
ZZ_MARK_TARGET(0x80050180,0x80050184,ZZ_500D0_B0);
ZZ_MARK_TARGET(0x80050184,0x8005019C,ZZ_500D0_B4);
