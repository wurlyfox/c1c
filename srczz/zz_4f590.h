#ifdef ZZ_INCLUDE_CODE
ZZ_4F590:
	SP -= 32;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5512); //+ 0xFFFFEA78
	EMU_Write32(SP + 24,RA); //+ 0x18
	EMU_Write32(SP + 20,S1); //+ 0x14
	V0 = EMU_ReadU32(A0);
	V1 = 0xB0000;
	V0 |= V1;
	EMU_Write32(A0,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	AT = 0x80060000;
	EMU_Write32(AT - 5500,R0); //+ 0xFFFFEA84
	AT = 0x80060000;
	EMU_Write32(AT - 5496,R0); //+ 0xFFFFEA88
	AT = 0x80060000;
	EMU_Write16(AT - 5504,R0); //+ 0xFFFFEA80
	EMU_Write16(V0 + 384,R0); //+ 0x180
	EMU_Write16(V0 + 386,R0); //+ 0x182
	RA = 0x8004F5EC; //ZZ_4F590_5C
	EMU_Write16(V0 + 426,R0); //+ 0x1AA
	ZZ_CLOCKCYCLES(23,0x80050068);
	goto ZZ_50068;
ZZ_4F590_5C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	EMU_Write16(V0 + 384,R0); //+ 0x180
	EMU_Write16(V0 + 386,R0); //+ 0x182
	V0 = EMU_ReadU16(V0 + 430); //+ 0x1AE
	V0 &= 0x7FF;
	if (!V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(10,0x8004F660);
		goto ZZ_4F590_D0;
	}
	V1 = R0;
	V1 += 1;
	ZZ_CLOCKCYCLES(11,0x8004F618);
ZZ_4F590_88:
	V0 = V1 < 3841;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8004F640);
		goto ZZ_4F590_B0;
	}
	A0 = 0x80010000;
	A0 += 4236;
	A1 = 0x80010000;
	RA = 0x8004F638; //ZZ_4F590_A8
	A1 += 4252;
	ZZ_CLOCKCYCLES(8,0x800494DC);
	goto ZZ_494DC;
ZZ_4F590_A8:
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004F664);
	goto ZZ_4F590_D4;
ZZ_4F590_B0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V0 = EMU_ReadU16(V0 + 430); //+ 0x1AE
	V0 &= 0x7FF;
	if (V0)
	{
		V1 += 1;
		ZZ_CLOCKCYCLES(8,0x8004F618);
		goto ZZ_4F590_88;
	}
	V1 += 1;
	ZZ_CLOCKCYCLES(8,0x8004F660);
ZZ_4F590_D0:
	A0 = R0;
	ZZ_CLOCKCYCLES(1,0x8004F664);
ZZ_4F590_D4:
	A1 = 0x80060000;
	A1 += 14028;
	V0 = 2;
	AT = 0x80060000;
	EMU_Write32(AT - 5492,V0); //+ 0xFFFFEA8C
	V0 = 3;
	AT = 0x80060000;
	EMU_Write32(AT - 5488,V0); //+ 0xFFFFEA90
	V0 = 8;
	AT = 0x80060000;
	EMU_Write32(AT - 5484,V0); //+ 0xFFFFEA94
	V0 = 7;
	AT = 0x80060000;
	EMU_Write32(AT - 5480,V0); //+ 0xFFFFEA98
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V1 = 4;
	EMU_Write16(V0 + 428,V1); //+ 0x1AC
	V1 = 0xFFFF;
	EMU_Write16(V0 + 388,R0); //+ 0x184
	EMU_Write16(V0 + 390,R0); //+ 0x186
	EMU_Write16(V0 + 396,V1); //+ 0x18C
	EMU_Write16(V0 + 398,V1); //+ 0x18E
	EMU_Write16(V0 + 408,R0); //+ 0x198
	EMU_Write16(V0 + 410,R0); //+ 0x19A
	ZZ_CLOCKCYCLES(25,0x8004F6C8);
ZZ_4F590_138:
	EMU_Write16(A1,R0);
	A0 += 1;
	V0 = (int32_t)A0 < 10;
	if (V0)
	{
		A1 += 2;
		ZZ_CLOCKCYCLES(5,0x8004F6C8);
		goto ZZ_4F590_138;
	}
	A1 += 2;
	if (S0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(7,0x8004F7D0);
		goto ZZ_4F590_240;
	}
	V0 = R0;
	A0 = 0x80060000;
	A0 -= 5464;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V1 = 512;
	AT = 0x80060000;
	EMU_Write16(AT - 5504,V1); //+ 0xFFFFEA80
	EMU_Write16(V0 + 400,R0); //+ 0x190
	EMU_Write16(V0 + 402,R0); //+ 0x192
	EMU_Write16(V0 + 404,R0); //+ 0x194
	EMU_Write16(V0 + 406,R0); //+ 0x196
	EMU_Write16(V0 + 432,R0); //+ 0x1B0
	EMU_Write16(V0 + 434,R0); //+ 0x1B2
	EMU_Write16(V0 + 436,R0); //+ 0x1B4
	EMU_Write16(V0 + 438,R0); //+ 0x1B6
	RA = 0x8004F728; //ZZ_4F590_198
	A1 = 16;
	ZZ_CLOCKCYCLES(24,0x8004F810);
	goto ZZ_4F810;
ZZ_4F590_198:
	A0 = R0;
	A2 = 16383;
	A1 = 512;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	ZZ_CLOCKCYCLES(6,0x8004F740);
ZZ_4F590_1B0:
	EMU_Write16(V1,R0);
	EMU_Write16(V1 + 2,R0); //+ 0x2
	EMU_Write16(V1 + 4,A2); //+ 0x4
	EMU_Write16(V1 + 6,A1); //+ 0x6
	EMU_Write16(V1 + 8,R0); //+ 0x8
	EMU_Write16(V1 + 10,R0); //+ 0xA
	A0 += 1;
	V0 = (int32_t)A0 < 24;
	if (V0)
	{
		V1 += 16;
		ZZ_CLOCKCYCLES(10,0x8004F740);
		goto ZZ_4F590_1B0;
	}
	V1 += 16;
	S1 = 0xFFFF;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	S0 = 255;
	EMU_Write16(V0 + 392,S1); //+ 0x188
	RA = 0x8004F784; //ZZ_4F590_1F4
	EMU_Write16(V0 + 394,S0); //+ 0x18A
	ZZ_CLOCKCYCLES(17,0x80050068);
	goto ZZ_50068;
ZZ_4F590_1F4:
	RA = 0x8004F78C; //ZZ_4F590_1FC
	ZZ_CLOCKCYCLES(2,0x80050068);
	goto ZZ_50068;
ZZ_4F590_1FC:
	RA = 0x8004F794; //ZZ_4F590_204
	ZZ_CLOCKCYCLES(2,0x80050068);
	goto ZZ_50068;
ZZ_4F590_204:
	RA = 0x8004F79C; //ZZ_4F590_20C
	ZZ_CLOCKCYCLES(2,0x80050068);
	goto ZZ_50068;
ZZ_4F590_20C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	EMU_Write16(V0 + 396,S1); //+ 0x18C
	RA = 0x8004F7B4; //ZZ_4F590_224
	EMU_Write16(V0 + 398,S0); //+ 0x18E
	ZZ_CLOCKCYCLES(6,0x80050068);
	goto ZZ_50068;
ZZ_4F590_224:
	RA = 0x8004F7BC; //ZZ_4F590_22C
	ZZ_CLOCKCYCLES(2,0x80050068);
	goto ZZ_50068;
ZZ_4F590_22C:
	RA = 0x8004F7C4; //ZZ_4F590_234
	ZZ_CLOCKCYCLES(2,0x80050068);
	goto ZZ_50068;
ZZ_4F590_234:
	RA = 0x8004F7CC; //ZZ_4F590_23C
	ZZ_CLOCKCYCLES(2,0x80050068);
	goto ZZ_50068;
ZZ_4F590_23C:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x8004F7D0);
ZZ_4F590_240:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5528); //+ 0xFFFFEA68
	V1 = 1;
	AT = 0x80060000;
	EMU_Write32(AT - 5476,V1); //+ 0xFFFFEA9C
	V1 = 0xC000;
	EMU_Write16(A0 + 426,V1); //+ 0x1AA
	AT = 0x80060000;
	EMU_Write32(AT - 5472,R0); //+ 0xFFFFEAA0
	AT = 0x80060000;
	EMU_Write32(AT - 5468,R0); //+ 0xFFFFEAA4
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 32;
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER(0x800501BC,ZZ_501A0_1C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F590,0x8004F5EC,ZZ_4F590);
ZZ_MARK_TARGET(0x8004F5EC,0x8004F618,ZZ_4F590_5C);
ZZ_MARK_TARGET(0x8004F618,0x8004F638,ZZ_4F590_88);
ZZ_MARK_TARGET(0x8004F638,0x8004F640,ZZ_4F590_A8);
ZZ_MARK_TARGET(0x8004F640,0x8004F660,ZZ_4F590_B0);
ZZ_MARK_TARGET(0x8004F660,0x8004F664,ZZ_4F590_D0);
ZZ_MARK_TARGET(0x8004F664,0x8004F6C8,ZZ_4F590_D4);
ZZ_MARK_TARGET(0x8004F6C8,0x8004F728,ZZ_4F590_138);
ZZ_MARK_TARGET(0x8004F728,0x8004F740,ZZ_4F590_198);
ZZ_MARK_TARGET(0x8004F740,0x8004F784,ZZ_4F590_1B0);
ZZ_MARK_TARGET(0x8004F784,0x8004F78C,ZZ_4F590_1F4);
ZZ_MARK_TARGET(0x8004F78C,0x8004F794,ZZ_4F590_1FC);
ZZ_MARK_TARGET(0x8004F794,0x8004F79C,ZZ_4F590_204);
ZZ_MARK_TARGET(0x8004F79C,0x8004F7B4,ZZ_4F590_20C);
ZZ_MARK_TARGET(0x8004F7B4,0x8004F7BC,ZZ_4F590_224);
ZZ_MARK_TARGET(0x8004F7BC,0x8004F7C4,ZZ_4F590_22C);
ZZ_MARK_TARGET(0x8004F7C4,0x8004F7CC,ZZ_4F590_234);
ZZ_MARK_TARGET(0x8004F7CC,0x8004F7D0,ZZ_4F590_23C);
ZZ_MARK_TARGET(0x8004F7D0,0x8004F810,ZZ_4F590_240);
