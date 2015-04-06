#ifdef ZZ_INCLUDE_CODE
ZZ_32B14:
	SP -= 48;
	EMU_Write32(SP + 36,S3); //+ 0x24
	S3 = A0;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	if (!S3)
	{
		EMU_Write32(SP + 24,S0); //+ 0x18
		ZZ_CLOCKCYCLES(9,0x80032BBC);
		goto ZZ_32B14_A8;
	}
	EMU_Write32(SP + 24,S0); //+ 0x18
	S1 = EMU_ReadU32(GP + 392); //+ 0x188
	V1 = 0x80060000;
	V1 -= 2172;
	V0 = S1 << 2;
	V0 += S1;
	V0 <<= 4;
	S2 = V0 + V1;
	V0 = (int32_t)S1 < 24;
	if (!V0)
	{
		S4 = 0x32;
		ZZ_CLOCKCYCLES(19,0x80032BBC);
		goto ZZ_32B14_A8;
	}
	S4 = 0x32;
	S0 = S2 + 29;
	ZZ_CLOCKCYCLES(20,0x80032B64);
ZZ_32B14_50:
	V0 = EMU_ReadU32(S0 - 25); //+ 0xFFFFFFE7
	V0 &= 0x8;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80032BA8);
		goto ZZ_32B14_94;
	}
	V0 = EMU_ReadU32(S0 - 17); //+ 0xFFFFFFEF
	if (V0 != S3)
	{
		A1 = 0x40000000;
		ZZ_CLOCKCYCLES(9,0x80032BA8);
		goto ZZ_32B14_94;
	}
	A1 = 0x40000000;
	A0 = EMU_ReadU32(S2);
	A3 = EMU_ReadU32(S0 - 17); //+ 0xFFFFFFEF
	A2 = SP + 16;
	EMU_Write32(GP + 200,S4); //+ 0xC8
	RA = 0x80032BA0; //ZZ_32B14_8C
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(15,0x8003322C);
	goto ZZ_3322C;
ZZ_32B14_8C:
	EMU_Write32(S0 - 17,R0); //+ 0xFFFFFFEF
	EMU_Write8(S0,R0);
	ZZ_CLOCKCYCLES(2,0x80032BA8);
ZZ_32B14_94:
	S1 += 1;
	S0 += 80;
	V0 = (int32_t)S1 < 24;
	if (V0)
	{
		S2 += 80;
		ZZ_CLOCKCYCLES(5,0x80032B64);
		goto ZZ_32B14_50;
	}
	S2 += 80;
	ZZ_CLOCKCYCLES(5,0x80032BBC);
ZZ_32B14_A8:
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80019D70,ZZ_19CF4_7C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80032B14,0x80032B64,ZZ_32B14);
ZZ_MARK_TARGET(0x80032B64,0x80032BA0,ZZ_32B14_50);
ZZ_MARK_TARGET(0x80032BA0,0x80032BA8,ZZ_32B14_8C);
ZZ_MARK_TARGET(0x80032BA8,0x80032BBC,ZZ_32B14_94);
ZZ_MARK_TARGET(0x80032BBC,0x80032BE0,ZZ_32B14_A8);
