#ifdef ZZ_INCLUDE_CODE
ZZ_1AD30:
	SP -= 136;
	EMU_Write32(SP + 116,S5); //+ 0x74
	S5 = A1;
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 14064); //+ 0x36F0
	EMU_Write32(SP + 112,S4); //+ 0x70
	S4 = A0;
	EMU_Write32(SP + 132,RA); //+ 0x84
	EMU_Write32(SP + 128,FP); //+ 0x80
	EMU_Write32(SP + 124,S7); //+ 0x7C
	EMU_Write32(SP + 120,S6); //+ 0x78
	EMU_Write32(SP + 108,S3); //+ 0x6C
	EMU_Write32(SP + 104,S2); //+ 0x68
	EMU_Write32(SP + 100,S1); //+ 0x64
	EMU_Write32(SP + 96,S0); //+ 0x60
	V1 = EMU_ReadU32(S4 + 236); //+ 0xEC
	A0 = EMU_ReadU32(A1 + 8336); //+ 0x2090
	V0 = EMU_ReadU32(A1 + 8332); //+ 0x208C
	A2 = EMU_ReadU32(S4 + 232); //+ 0xE8
	V0 = A0 - V0;
	V0 += 200;
	V0 = V0 < 6001;
	if (V0)
	{
		S3 = V1 >> 8;
		ZZ_CLOCKCYCLES(24,0x8001ADA4);
		goto ZZ_1AD30_74;
	}
	S3 = V1 >> 8;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2524); //+ 0xFFFFF624
	if (S4 != V0)
	{
		ZZ_CLOCKCYCLES(29,0x8001B940);
		goto ZZ_1AD30_C10;
	}
	ZZ_CLOCKCYCLES(29,0x8001ADA4);
ZZ_1AD30_74:
	V1 = EMU_ReadU8(A2);
	V0 = 0x2;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 3;
		ZZ_CLOCKCYCLES(4,0x8001ADE8);
		goto ZZ_1AD30_B8;
	}
	V0 = (int32_t)V1 < 3;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(6,0x8001ADCC);
		goto ZZ_1AD30_9C;
	}
	V0 = 0x1;
	if (V1 == V0)
	{
		S3 = A0;
		ZZ_CLOCKCYCLES(8,0x8001B064);
		goto ZZ_1AD30_334;
	}
	S3 = A0;
	ZZ_CLOCKCYCLES(10,0x8001B940);
	goto ZZ_1AD30_C10;
ZZ_1AD30_9C:
	V0 = 0x4;
	if (V1 == V0)
	{
		V0 = 0x5;
		ZZ_CLOCKCYCLES(3,0x8001B014);
		goto ZZ_1AD30_2E4;
	}
	V0 = 0x5;
	if (V1 == V0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(5,0x8001AF34);
		goto ZZ_1AD30_204;
	}
	S0 = R0;
	ZZ_CLOCKCYCLES(7,0x8001B940);
	goto ZZ_1AD30_C10;
ZZ_1AD30_B8:
	A0 = S3 << 4;
	A0 += 8;
	A0 += A2;
	A0 += 4;
	A1 = A2 + 4;
	S1 = EMU_ReadU32(S5 + 4); //+ 0x4
	RA = 0x8001AE08; //ZZ_1AD30_D8
	S0 = A2;
	ZZ_CLOCKCYCLES(8,0x80018598);
	goto ZZ_18598;
ZZ_1AD30_D8:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 14064); //+ 0x36F0
	A0 = EMU_ReadU32(V1 + 8336); //+ 0x2090
	V0 = A0 + 44;
	EMU_Write32(V1 + 8336,V0); //+ 0x2090
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14064); //+ 0x36F0
	V0 = EMU_ReadU32(V0 + 8328); //+ 0x2088
	EMU_Write32(A0,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14064); //+ 0x36F0
	EMU_Write32(V0 + 8328,A0); //+ 0x2088
	V0 = EMU_ReadU32(S4 + 288); //+ 0x120
	A2 = S4 + 32;
	V1 = V0 & 0xFF;
	V0 >>= 8;
	V0 &= 0xFF;
	if (V0)
	{
		A1 = A0;
		ZZ_CLOCKCYCLES(24,0x8001AE94);
		goto ZZ_1AD30_164;
	}
	A1 = A0;
	V0 = 0x6;
	if (V1 == V0)
	{
		V0 = 0xD;
		ZZ_CLOCKCYCLES(27,0x8001AE7C);
		goto ZZ_1AD30_14C;
	}
	V0 = 0xD;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(29,0x8001AE84);
		goto ZZ_1AD30_154;
	}
	ZZ_CLOCKCYCLES(29,0x8001AE7C);
ZZ_1AD30_14C:
	V1 = 0x3;
	ZZ_CLOCKCYCLES(2,0x8001AE98);
	goto ZZ_1AD30_168;
ZZ_1AD30_154:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 11636); //+ 0x2D74
	ZZ_CLOCKCYCLES(4,0x8001AE98);
	goto ZZ_1AD30_168;
ZZ_1AD30_164:
	V1 = V0;
	ZZ_CLOCKCYCLES(1,0x8001AE98);
ZZ_1AD30_168:
	V0 = EMU_ReadU32(S4 + 8); //+ 0x8
	EMU_Write32(A1 + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(S5);
	V1 <<= 2;
	EMU_Write32(A1 + 4,V0); //+ 0x4
	AT = 0x80060000;
	AT += V1;
	V0 = EMU_ReadU32(AT - 17932); //+ 0xFFFFB9F4
	EMU_Write32(A1 + 8,V0); //+ 0x8
	AT = 0x80060000;
	AT += V1;
	V1 = EMU_ReadU32(AT - 18016); //+ 0xFFFFB9A0
	V0 = S3 << 4;
	V0 += 8;
	V0 += S0;
	EMU_Write32(A1 + 16,S4); //+ 0x10
	EMU_Write32(A1 + 28,V0); //+ 0x1C
	EMU_Write32(A1 + 12,V1); //+ 0xC
	V0 = EMU_ReadS16(A2 + 6); //+ 0x6
	if (!V0)
	{
		ZZ_CLOCKCYCLES(24,0x8001AF28);
		goto ZZ_1AD30_1F8;
	}
	V0 = EMU_ReadS16(A2 + 26); //+ 0x1A
	V1 = EMU_ReadS16(A2 + 28); //+ 0x1C
	A0 = EMU_ReadS16(A2 + 30); //+ 0x1E
	V0 <<= 20;
	V1 <<= 12;
	V0 |= V1;
	A0 <<= 4;
	V0 |= A0;
	EMU_Write32(A1 + 40,V0); //+ 0x28
	V0 = EMU_ReadS16(A2 + 6); //+ 0x6
	EMU_Write32(A1 + 32,V0); //+ 0x20
	ZZ_CLOCKCYCLES(36,0x8001AF2C);
	goto ZZ_1AD30_1FC;
ZZ_1AD30_1F8:
	EMU_Write32(A1 + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(1,0x8001AF2C);
ZZ_1AD30_1FC:
	EMU_Write32(A1 + 36,S1); //+ 0x24
	ZZ_CLOCKCYCLES(2,0x8001B940);
	goto ZZ_1AD30_C10;
ZZ_1AD30_204:
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	EMU_SMultiply(S3,A0);
	S6 = EMU_ReadU32(S5 + 4); //+ 0x4
	S2 = A2;
	V1 = LO;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 3;
	V0 += 12;
	if ((int32_t)A0 <= 0)
	{
		S1 = A2 + V0;
		ZZ_CLOCKCYCLES(12,0x8001AF84);
		goto ZZ_1AD30_254;
	}
	S1 = A2 + V0;
	ZZ_CLOCKCYCLES(12,0x8001AF64);
ZZ_1AD30_234:
	A0 = S1 + 4;
	RA = 0x8001AF70; //ZZ_1AD30_240
	A1 = S2 + 4;
	ZZ_CLOCKCYCLES(3,0x80018598);
	goto ZZ_18598;
ZZ_1AD30_240:
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		S1 += 24;
		ZZ_CLOCKCYCLES(5,0x8001AF64);
		goto ZZ_1AD30_234;
	}
	S1 += 24;
	ZZ_CLOCKCYCLES(5,0x8001AF84);
ZZ_1AD30_254:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 14064); //+ 0x36F0
	V1 = EMU_ReadU32(A0 + 8336); //+ 0x2090
	V0 = V1 + 48;
	EMU_Write32(A0 + 8336,V0); //+ 0x2090
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14064); //+ 0x36F0
	V0 = EMU_ReadU32(V0 + 8328); //+ 0x2088
	EMU_Write32(V1,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14064); //+ 0x36F0
	EMU_Write32(V0 + 8328,V1); //+ 0x2088
	V0 = EMU_ReadU32(S4 + 8); //+ 0x8
	EMU_Write32(V1 + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(S5);
	EMU_Write32(V1 + 4,V0); //+ 0x4
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 17912); //+ 0xFFFFBA08
	EMU_Write32(V1 + 8,V0); //+ 0x8
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 17996); //+ 0xFFFFB9B4
	EMU_Write32(V1 + 16,S4); //+ 0x10
	EMU_Write32(V1 + 28,S2); //+ 0x1C
	EMU_Write32(V1 + 32,R0); //+ 0x20
	EMU_Write32(V1 + 36,S6); //+ 0x24
	EMU_Write32(V1 + 44,S3); //+ 0x2C
	EMU_Write32(V1 + 12,V0); //+ 0xC
	ZZ_CLOCKCYCLES(36,0x8001B940);
	goto ZZ_1AD30_C10;
ZZ_1AD30_2E4:
	A0 = EMU_ReadU32(S4 + 172); //+ 0xAC
	V0 = 0x200000;
	V0 &= A0;
	if (!V0)
	{
		V1 = 0x1;
		ZZ_CLOCKCYCLES(5,0x8001B02C);
		goto ZZ_1AD30_2FC;
	}
	V1 = 0x1;
	V1 = -1;
	ZZ_CLOCKCYCLES(6,0x8001B02C);
ZZ_1AD30_2FC:
	V0 = A0 & 0x400;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x8001B03C);
		goto ZZ_1AD30_30C;
	}
	V1 = R0;
	ZZ_CLOCKCYCLES(4,0x8001B03C);
ZZ_1AD30_30C:
	A3 = 0x80060000;
	A3 = EMU_ReadU32(A3 + 14064); //+ 0x36F0
	A0 = S4;
	A1 = A2;
	A2 = S3;
	EMU_Write32(SP + 16,V1); //+ 0x10
	RA = 0x8001B05C; //ZZ_1AD30_32C
	A3 += 24;
	ZZ_CLOCKCYCLES(8,0x8001BEBC);
	goto ZZ_1BEBC;
ZZ_1AD30_32C:
	ZZ_CLOCKCYCLES(2,0x8001B940);
	goto ZZ_1AD30_C10;
ZZ_1AD30_334:
	V0 = EMU_ReadU32(S4 + 8); //+ 0x8
	T4 = EMU_ReadU32(V0 + 32); //+ 0x20
	EMU_Write32(SP + 48,T4); //+ 0x30
	V0 = EMU_ReadU32(V0 + 36); //+ 0x24
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = A0 + 100;
	EMU_Write32(A1 + 8336,V0); //+ 0x2090
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14064); //+ 0x36F0
	V0 = EMU_ReadU32(V0 + 8328); //+ 0x2088
	EMU_Write32(A0,V0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14064); //+ 0x36F0
	EMU_Write32(V0 + 8328,A0); //+ 0x2088
	V0 = EMU_ReadU32(S4 + 8); //+ 0x8
	S6 = EMU_ReadU8(S4 + 289); //+ 0x121
	T5 = EMU_ReadU32(V0 + 40); //+ 0x28
	EMU_Write32(SP + 64,T5); //+ 0x40
	EMU_Write32(S3 + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(S5);
	EMU_Write32(S3 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(S4 + 160); //+ 0xA0
	EMU_Write32(S3 + 16,S4); //+ 0x10
	EMU_Write32(S3 + 80,V0); //+ 0x50
	V0 = EMU_ReadU32(S4 + 172); //+ 0xAC
	V1 = 0x100000;
	T4 = S4 + 32;
	V0 &= V1;
	if (!V0)
	{
		EMU_Write32(SP + 72,T4); //+ 0x48
		ZZ_CLOCKCYCLES(38,0x8001B108);
		goto ZZ_1AD30_3D8;
	}
	EMU_Write32(SP + 72,T4); //+ 0x48
	V0 = EMU_ReadU32(S4 + 228); //+ 0xE4
	EMU_Write32(S3 + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(41,0x8001B118);
	goto ZZ_1AD30_3E8;
ZZ_1AD30_3D8:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3036); //+ 0xBDC
	EMU_Write32(S3 + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(4,0x8001B118);
ZZ_1AD30_3E8:
	V0 = EMU_ReadU32(S4 + 172); //+ 0xAC
	V1 = 0x40000;
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001B13C);
		goto ZZ_1AD30_40C;
	}
	V0 = 0x80040000;
	V0 += 8424;
	ZZ_CLOCKCYCLES(9,0x8001B144);
	goto ZZ_1AD30_414;
ZZ_1AD30_40C:
	V0 = 0x80040000;
	V0 += 8108;
	ZZ_CLOCKCYCLES(2,0x8001B144);
ZZ_1AD30_414:
	if (S6)
	{
		EMU_Write32(S3 + 28,V0); //+ 0x1C
		ZZ_CLOCKCYCLES(2,0x8001B154);
		goto ZZ_1AD30_424;
	}
	EMU_Write32(S3 + 28,V0); //+ 0x1C
	S6 = 0x80060000;
	S6 = EMU_ReadU32(S6 + 11620); //+ 0x2D64
	ZZ_CLOCKCYCLES(4,0x8001B154);
ZZ_1AD30_424:
	A3 = EMU_ReadU8(S4 + 290); //+ 0x122
	V1 = A3 << 2;
	AT = 0x80060000;
	AT += V1;
	V0 = EMU_ReadU32(AT - 18072); //+ 0xFFFFB968
	EMU_Write32(S3 + 32,V0); //+ 0x20
	AT = 0x80060000;
	AT += V1;
	V0 = EMU_ReadU32(AT - 18044); //+ 0xFFFFB984
	EMU_Write32(S3 + 36,V0); //+ 0x24
	V0 = (int32_t)A3 < 6;
	if (!V0)
	{
		V0 = (int32_t)A3 < 4;
		ZZ_CLOCKCYCLES(16,0x8001B5C0);
		goto ZZ_1AD30_890;
	}
	V0 = (int32_t)A3 < 4;
	if (V0)
	{
		V0 = 0x5;
		ZZ_CLOCKCYCLES(18,0x8001B5C0);
		goto ZZ_1AD30_890;
	}
	V0 = 0x5;
	S7 = EMU_ReadS16(S4 + 46); //+ 0x2E
	FP = EMU_ReadS16(S4 + 48); //+ 0x30
	S5 = EMU_ReadS16(S4 + 50); //+ 0x32
	if (A3 != V0)
	{
		S6 = 0x1;
		ZZ_CLOCKCYCLES(23,0x8001B284);
		goto ZZ_1AD30_554;
	}
	S6 = 0x1;
	V0 = EMU_ReadU32(S4 + 144); //+ 0x90
	EMU_SMultiply(S7,V0);
	V0 = EMU_ReadU32(S4 + 148); //+ 0x94
	T3 = LO;
	EMU_SMultiply(FP,V0);
	V0 = EMU_ReadU32(S4 + 152); //+ 0x98
	T2 = LO;
	EMU_SMultiply(S5,V0);
	V0 = EMU_ReadU32(S4 + 156); //+ 0x9C
	T0 = LO;
	EMU_SMultiply(S7,V0);
	V0 = EMU_ReadU32(S4 + 160); //+ 0xA0
	T1 = LO;
	EMU_SMultiply(FP,V0);
	V0 = EMU_ReadU32(S4 + 164); //+ 0xA4
	A2 = LO;
	EMU_SMultiply(S5,V0);
	V0 = EMU_ReadU32(S4 + 132); //+ 0x84
	A0 = LO;
	EMU_SMultiply(S7,V0);
	V0 = EMU_ReadU32(S4 + 136); //+ 0x88
	A1 = LO;
	EMU_SMultiply(FP,V0);
	V0 = EMU_ReadU32(S4 + 140); //+ 0x8C
	V1 = LO;
	EMU_SMultiply(S5,V0);
	V0 = T3 + T2;
	V0 += T0;
	S7 = (int32_t)V0 >> 18;
	V0 = T1 + A2;
	V0 += A0;
	FP = (int32_t)V0 >> 18;
	V0 = A1 + V1;
	T6 = LO;
	V0 += T6;
	S5 = (int32_t)V0 >> 18;
	ZZ_CLOCKCYCLES(76,0x8001B284);
ZZ_1AD30_554:
	V0 = FP << 16;
	V1 = S7 & 0xFFFF;
	V0 |= V1;
	EMU_Write32(S3 + 80,V0); //+ 0x50
	EMU_Write32(S3 + 84,S5); //+ 0x54
	V1 = EMU_ReadU8(S4 + 288); //+ 0x120
	V0 = 0xA;
	if (V1 == V0)
	{
		V0 = 0xF;
		ZZ_CLOCKCYCLES(9,0x8001B2B0);
		goto ZZ_1AD30_580;
	}
	V0 = 0xF;
	if (V1 != V0)
	{
		S2 = -2896;
		ZZ_CLOCKCYCLES(11,0x8001B3D4);
		goto ZZ_1AD30_6A4;
	}
	S2 = -2896;
	ZZ_CLOCKCYCLES(11,0x8001B2B0);
ZZ_1AD30_580:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2700); //+ 0xA8C
	V1 = EMU_ReadU32(S4 + 96); //+ 0x60
	V0 = V0 - V1;
	S2 = (int32_t)V0 >> 8;
	EMU_SMultiply(S2,S2);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2704); //+ 0xA90
	V1 = EMU_ReadU32(S4 + 100); //+ 0x64
	A1 = LO;
	V0 = V0 - V1;
	S0 = (int32_t)V0 >> 8;
	EMU_SMultiply(S0,S0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2708); //+ 0xA94
	V1 = EMU_ReadU32(S4 + 104); //+ 0x68
	A0 = LO;
	V0 = V0 - V1;
	S1 = (int32_t)V0 >> 8;
	EMU_SMultiply(S1,S1);
	V0 = A1 + A0;
	V1 = LO;
	A0 = V0 + V1;
	if (A0)
	{
		ZZ_CLOCKCYCLES(26,0x8001B328);
		goto ZZ_1AD30_5F8;
	}
	S2 = R0;
	S0 = R0;
	S1 = R0;
	ZZ_CLOCKCYCLES(30,0x8001B3DC);
	goto ZZ_1AD30_6AC;
ZZ_1AD30_5F8:
	RA = 0x8001B330; //ZZ_1AD30_600
	EMU_Write32(SP + 88,A3); //+ 0x58
	ZZ_CLOCKCYCLES(2,0x80041D10);
	goto ZZ_41D10;
ZZ_1AD30_600:
	A0 = V0;
	V0 = S2 << 12;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(5,0x8001B348);
		goto ZZ_1AD30_618;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(6,0x8001B348);
ZZ_1AD30_618:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8001B360);
		goto ZZ_1AD30_630;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8001B360);
		goto ZZ_1AD30_630;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8001B360);
ZZ_1AD30_630:
	S2 = LO;
	V0 = S0 << 12;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(6,0x8001B37C);
		goto ZZ_1AD30_64C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(7,0x8001B37C);
ZZ_1AD30_64C:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8001B394);
		goto ZZ_1AD30_664;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8001B394);
		goto ZZ_1AD30_664;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8001B394);
ZZ_1AD30_664:
	S0 = LO;
	V0 = S1 << 12;
	A3 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(6,0x8001B3B0);
		goto ZZ_1AD30_680;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(7,0x8001B3B0);
ZZ_1AD30_680:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8001B3C8);
		goto ZZ_1AD30_698;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8001B3C8);
		goto ZZ_1AD30_698;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8001B3C8);
ZZ_1AD30_698:
	S1 = LO;
	V0 = 0x5;
	ZZ_CLOCKCYCLES(3,0x8001B3E0);
	goto ZZ_1AD30_6B0;
ZZ_1AD30_6A4:
	S0 = R0;
	S1 = 0xB50;
	ZZ_CLOCKCYCLES(2,0x8001B3DC);
ZZ_1AD30_6AC:
	V0 = 0x5;
	ZZ_CLOCKCYCLES(1,0x8001B3E0);
ZZ_1AD30_6B0:
	if (A3 != V0)
	{
		ZZ_CLOCKCYCLES(2,0x8001B4BC);
		goto ZZ_1AD30_78C;
	}
	V0 = EMU_ReadU32(S4 + 144); //+ 0x90
	EMU_SMultiply(S2,V0);
	V0 = EMU_ReadU32(S4 + 148); //+ 0x94
	T2 = LO;
	EMU_SMultiply(S0,V0);
	V0 = EMU_ReadU32(S4 + 152); //+ 0x98
	T1 = LO;
	EMU_SMultiply(S1,V0);
	V0 = EMU_ReadU32(S4 + 156); //+ 0x9C
	A3 = LO;
	EMU_SMultiply(S2,V0);
	V0 = EMU_ReadU32(S4 + 160); //+ 0xA0
	T0 = LO;
	EMU_SMultiply(S0,V0);
	V0 = EMU_ReadU32(S4 + 164); //+ 0xA4
	A2 = LO;
	EMU_SMultiply(S1,V0);
	V0 = EMU_ReadU32(S4 + 132); //+ 0x84
	A0 = LO;
	EMU_SMultiply(S2,V0);
	V0 = EMU_ReadU32(S4 + 136); //+ 0x88
	A1 = LO;
	EMU_SMultiply(S0,V0);
	V0 = EMU_ReadU32(S4 + 140); //+ 0x8C
	V1 = LO;
	EMU_SMultiply(S1,V0);
	V0 = T2 + T1;
	V0 += A3;
	S2 = (int32_t)V0 >> 18;
	V0 = T0 + A2;
	V0 += A0;
	S0 = (int32_t)V0 >> 18;
	V0 = A1 + V1;
	T3 = LO;
	V0 += T3;
	S1 = (int32_t)V0 >> 18;
	ZZ_CLOCKCYCLES(55,0x8001B4BC);
ZZ_1AD30_78C:
	S2 += S7;
	EMU_SMultiply(S2,S2);
	V0 = LO;
	S0 += FP;
	S0 += S5;
	EMU_SMultiply(S0,S0);
	T0 = LO;
	EMU_SMultiply(S1,S1);
	V0 += T0;
	V1 = LO;
	A0 = V0 + V1;
	if (A0)
	{
		ZZ_CLOCKCYCLES(15,0x8001B508);
		goto ZZ_1AD30_7D8;
	}
	S2 = R0;
	S0 = R0;
	S1 = R0;
	ZZ_CLOCKCYCLES(19,0x8001B5AC);
	goto ZZ_1AD30_87C;
ZZ_1AD30_7D8:
	RA = 0x8001B510; //ZZ_1AD30_7E0
	ZZ_CLOCKCYCLES(2,0x80041D10);
	goto ZZ_41D10;
ZZ_1AD30_7E0:
	A0 = V0;
	V0 = S2 << 12;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(5,0x8001B528);
		goto ZZ_1AD30_7F8;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(6,0x8001B528);
ZZ_1AD30_7F8:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8001B540);
		goto ZZ_1AD30_810;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8001B540);
		goto ZZ_1AD30_810;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8001B540);
ZZ_1AD30_810:
	S2 = LO;
	V0 = S0 << 12;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(6,0x8001B55C);
		goto ZZ_1AD30_82C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(7,0x8001B55C);
ZZ_1AD30_82C:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8001B574);
		goto ZZ_1AD30_844;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8001B574);
		goto ZZ_1AD30_844;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8001B574);
ZZ_1AD30_844:
	S0 = LO;
	V0 = S1 << 12;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(6,0x8001B590);
		goto ZZ_1AD30_860;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(7,0x8001B590);
ZZ_1AD30_860:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8001B5A8);
		goto ZZ_1AD30_878;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8001B5A8);
		goto ZZ_1AD30_878;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8001B5A8);
ZZ_1AD30_878:
	S1 = LO;
	ZZ_CLOCKCYCLES(1,0x8001B5AC);
ZZ_1AD30_87C:
	V0 = S0 << 16;
	V1 = S2 & 0xFFFF;
	V0 |= V1;
	EMU_Write32(S3 + 88,V0); //+ 0x58
	EMU_Write32(S3 + 92,S1); //+ 0x5C
	ZZ_CLOCKCYCLES(5,0x8001B5C0);
ZZ_1AD30_890:
	V0 = EMU_ReadU32(S4 + 280); //+ 0x118
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 11624); //+ 0x2D68
	V0 += V1;
	EMU_Write32(S3 + 72,V0); //+ 0x48
	V0 = EMU_ReadU32(S4 + 280); //+ 0x118
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 11628); //+ 0x2D6C
	V0 += V1;
	EMU_Write32(S3 + 76,V0); //+ 0x4C
	V0 = 0x8;
	if (S6 == V0)
	{
		V0 = (int32_t)S6 < 9;
		ZZ_CLOCKCYCLES(15,0x8001B798);
		goto ZZ_1AD30_A68;
	}
	V0 = (int32_t)S6 < 9;
	if (!V0)
	{
		V0 = 0x6;
		ZZ_CLOCKCYCLES(17,0x8001B614);
		goto ZZ_1AD30_8E4;
	}
	V0 = 0x6;
	if (S6 == V0)
	{
		ZZ_CLOCKCYCLES(19,0x8001B798);
		goto ZZ_1AD30_A68;
	}
	ZZ_CLOCKCYCLES(21,0x8001B800);
	goto ZZ_1AD30_AD0;
ZZ_1AD30_8E4:
	V0 = 0xC;
	if (S6 == V0)
	{
		V0 = 0x13;
		ZZ_CLOCKCYCLES(3,0x8001B630);
		goto ZZ_1AD30_900;
	}
	V0 = 0x13;
	if (S6 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001B798);
		goto ZZ_1AD30_A68;
	}
	ZZ_CLOCKCYCLES(7,0x8001B800);
	goto ZZ_1AD30_AD0;
ZZ_1AD30_900:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2524); //+ 0xFFFFF624
	if (S4 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001B718);
		goto ZZ_1AD30_9E8;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 11632); //+ 0x2D70
	V0 &= 0x1000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x8001B6B4);
		goto ZZ_1AD30_984;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 668); //+ 0x29C
	V0 &= 0x800;
	if (V0)
	{
		ZZ_CLOCKCYCLES(21,0x8001B6B4);
		goto ZZ_1AD30_984;
	}
	A1 = 0x80070000;
	A1 = EMU_ReadU32(A1 - 12420); //+ 0xFFFFCF7C
	A0 = EMU_ReadU32(S4 + 100); //+ 0x64
	V1 = A1 - 12800;
	V0 = (int32_t)A0 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(28,0x8001B6B4);
		goto ZZ_1AD30_984;
	}
	V0 = EMU_ReadU32(S4 + 316); //+ 0x13C
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		V0 = A1 - A0;
		ZZ_CLOCKCYCLES(33,0x8001B6BC);
		goto ZZ_1AD30_98C;
	}
	V0 = A1 - A0;
	ZZ_CLOCKCYCLES(33,0x8001B6B4);
ZZ_1AD30_984:
	S6 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8001B800);
	goto ZZ_1AD30_AD0;
ZZ_1AD30_98C:
	V0 <<= 5;
	EMU_Write32(S3 + 80,V0); //+ 0x50
	V1 = EMU_ReadU32(S4 + 8); //+ 0x8
	V1 = EMU_ReadU32(V1 + 40); //+ 0x28
	V1 = EMU_ReadU32(V1 + 16); //+ 0x10
	V1 = EMU_ReadU32(V1 + 4); //+ 0x4
	EMU_SDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(13,0x8001B6F4);
		goto ZZ_1AD30_9C4;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(14,0x8001B6F4);
ZZ_1AD30_9C4:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8001B70C);
		goto ZZ_1AD30_9DC;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8001B70C);
		goto ZZ_1AD30_9DC;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8001B70C);
ZZ_1AD30_9DC:
	V0 = LO;
	EMU_Write32(S3 + 80,V0); //+ 0x50
	ZZ_CLOCKCYCLES(3,0x8001B800);
	goto ZZ_1AD30_AD0;
ZZ_1AD30_9E8:
	V0 = EMU_ReadU32(S4 + 252); //+ 0xFC
	V1 = EMU_ReadU32(S4 + 100); //+ 0x64
	V0 = V0 - V1;
	V0 <<= 5;
	EMU_Write32(S3 + 80,V0); //+ 0x50
	V1 = EMU_ReadU32(S4 + 8); //+ 0x8
	V1 = EMU_ReadU32(V1 + 40); //+ 0x28
	V1 = EMU_ReadU32(V1 + 16); //+ 0x10
	V1 = EMU_ReadU32(V1 + 4); //+ 0x4
	EMU_SDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(17,0x8001B760);
		goto ZZ_1AD30_A30;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(18,0x8001B760);
ZZ_1AD30_A30:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8001B778);
		goto ZZ_1AD30_A48;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8001B778);
		goto ZZ_1AD30_A48;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8001B778);
ZZ_1AD30_A48:
	V0 = LO;
	EMU_Write32(S3 + 80,V0); //+ 0x50
	V0 = EMU_ReadU32(S4 + 280); //+ 0x118
	V0 -= 200;
	EMU_Write32(S3 + 76,V0); //+ 0x4C
	ZZ_CLOCKCYCLES(8,0x8001B800);
	goto ZZ_1AD30_AD0;
ZZ_1AD30_A68:
	V0 = EMU_ReadU32(S4 + 172); //+ 0xAC
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(4,0x8001B7D0);
		goto ZZ_1AD30_AA0;
	}
	V0 = EMU_ReadU32(S4 + 156); //+ 0x9C
	V0 <<= 4;
	EMU_Write32(S3 + 84,V0); //+ 0x54
	V0 = EMU_ReadU32(S4 + 160); //+ 0xA0
	EMU_Write32(S3 + 88,V0); //+ 0x58
	V0 = EMU_ReadU32(S4 + 164); //+ 0xA4
	EMU_Write32(S3 + 92,V0); //+ 0x5C
	ZZ_CLOCKCYCLES(14,0x8001B800);
	goto ZZ_1AD30_AD0;
ZZ_1AD30_AA0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 11476); //+ 0x2CD4
	EMU_Write32(S3 + 84,V0); //+ 0x54
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 11480); //+ 0x2CD8
	EMU_Write32(S3 + 88,V0); //+ 0x58
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 11484); //+ 0x2CDC
	EMU_Write32(S3 + 92,V0); //+ 0x5C
	ZZ_CLOCKCYCLES(12,0x8001B800);
ZZ_1AD30_AD0:
	T4 = EMU_ReadU32(SP + 48); //+ 0x30
	T5 = EMU_ReadU32(SP + 56); //+ 0x38
	if (T4 != T5)
	{
		V0 = S6 << 2;
		ZZ_CLOCKCYCLES(5,0x8001B83C);
		goto ZZ_1AD30_B0C;
	}
	V0 = S6 << 2;
	AT = 0x80060000;
	AT += V0;
	V1 = EMU_ReadU32(AT - 17932); //+ 0xFFFFB9F4
	EMU_Write32(S3 + 8,V1); //+ 0x8
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 18016); //+ 0xFFFFB9A0
	EMU_Write32(S3 + 40,T5); //+ 0x28
	ZZ_CLOCKCYCLES(15,0x8001B870);
	goto ZZ_1AD30_B40;
ZZ_1AD30_B0C:
	AT = 0x80060000;
	AT += V0;
	V1 = EMU_ReadU32(AT - 17928); //+ 0xFFFFB9F8
	EMU_Write32(S3 + 8,V1); //+ 0x8
	T4 = EMU_ReadU32(SP + 48); //+ 0x30
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 18012); //+ 0xFFFFB9A4
	EMU_Write32(S3 + 40,T4); //+ 0x28
	T5 = EMU_ReadU32(SP + 56); //+ 0x38
	EMU_Write32(S3 + 44,T5); //+ 0x2C
	ZZ_CLOCKCYCLES(13,0x8001B870);
ZZ_1AD30_B40:
	EMU_Write32(S3 + 12,V0); //+ 0xC
	T4 = EMU_ReadU32(SP + 64); //+ 0x40
	V0 = EMU_ReadU32(T4 + 20); //+ 0x14
	EMU_Write32(S3 + 48,V0); //+ 0x30
	V0 = EMU_ReadU32(T4 + 24); //+ 0x18
	EMU_Write32(S3 + 52,V0); //+ 0x34
	V0 = EMU_ReadU32(T4 + 28); //+ 0x1C
	EMU_Write32(S3 + 56,V0); //+ 0x38
	V0 = EMU_ReadU32(T4 + 32); //+ 0x20
	EMU_Write32(S3 + 60,V0); //+ 0x3C
	V0 = EMU_ReadU32(T4 + 12); //+ 0xC
	V0 = (int32_t)V0 < 6;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(20,0x8001B8C8);
		goto ZZ_1AD30_B98;
	}
	EMU_Write32(S3 + 96,R0); //+ 0x60
	ZZ_CLOCKCYCLES(22,0x8001B8DC);
	goto ZZ_1AD30_BAC;
ZZ_1AD30_B98:
	T5 = EMU_ReadU32(SP + 64); //+ 0x40
	V0 = EMU_ReadU32(T5 + 36); //+ 0x24
	EMU_Write32(S3 + 96,V0); //+ 0x60
	ZZ_CLOCKCYCLES(5,0x8001B8DC);
ZZ_1AD30_BAC:
	T4 = EMU_ReadU32(SP + 72); //+ 0x48
	V0 = EMU_ReadS16(T4 + 6); //+ 0x6
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001B924);
		goto ZZ_1AD30_BF4;
	}
	V0 = EMU_ReadS16(T4 + 26); //+ 0x1A
	V1 = EMU_ReadS16(T4 + 28); //+ 0x1C
	A0 = EMU_ReadS16(T4 + 30); //+ 0x1E
	V0 <<= 20;
	V1 <<= 12;
	V0 |= V1;
	A0 <<= 4;
	V0 |= A0;
	EMU_Write32(S3 + 68,V0); //+ 0x44
	V0 = EMU_ReadS16(T4 + 6); //+ 0x6
	EMU_Write32(S3 + 64,V0); //+ 0x40
	ZZ_CLOCKCYCLES(18,0x8001B928);
	goto ZZ_1AD30_BF8;
ZZ_1AD30_BF4:
	EMU_Write32(S3 + 64,R0); //+ 0x40
	ZZ_CLOCKCYCLES(1,0x8001B928);
ZZ_1AD30_BF8:
	V0 = EMU_ReadU32(S4 + 120); //+ 0x78
	V1 = EMU_ReadU32(S3 + 64); //+ 0x40
	if ((int32_t)V0 >= 0)
	{
		V0 = 0x80000000;
		ZZ_CLOCKCYCLES(4,0x8001B93C);
		goto ZZ_1AD30_C0C;
	}
	V0 = 0x80000000;
	V1 |= V0;
	ZZ_CLOCKCYCLES(5,0x8001B93C);
ZZ_1AD30_C0C:
	EMU_Write32(S3 + 64,V1); //+ 0x40
	ZZ_CLOCKCYCLES(1,0x8001B940);
ZZ_1AD30_C10:
	RA = EMU_ReadU32(SP + 132); //+ 0x84
	FP = EMU_ReadU32(SP + 128); //+ 0x80
	S7 = EMU_ReadU32(SP + 124); //+ 0x7C
	S6 = EMU_ReadU32(SP + 120); //+ 0x78
	S5 = EMU_ReadU32(SP + 116); //+ 0x74
	S4 = EMU_ReadU32(SP + 112); //+ 0x70
	S3 = EMU_ReadU32(SP + 108); //+ 0x6C
	S2 = EMU_ReadU32(SP + 104); //+ 0x68
	S1 = EMU_ReadU32(SP + 100); //+ 0x64
	S0 = EMU_ReadU32(SP + 96); //+ 0x60
	SP += 136;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x8001CD24,ZZ_1C850_4D4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001AD30,0x8001ADA4,ZZ_1AD30);
ZZ_MARK_TARGET(0x8001ADA4,0x8001ADCC,ZZ_1AD30_74);
ZZ_MARK_TARGET(0x8001ADCC,0x8001ADE8,ZZ_1AD30_9C);
ZZ_MARK_TARGET(0x8001ADE8,0x8001AE08,ZZ_1AD30_B8);
ZZ_MARK_TARGET(0x8001AE08,0x8001AE7C,ZZ_1AD30_D8);
ZZ_MARK_TARGET(0x8001AE7C,0x8001AE84,ZZ_1AD30_14C);
ZZ_MARK_TARGET(0x8001AE84,0x8001AE94,ZZ_1AD30_154);
ZZ_MARK_TARGET(0x8001AE94,0x8001AE98,ZZ_1AD30_164);
ZZ_MARK_TARGET(0x8001AE98,0x8001AF28,ZZ_1AD30_168);
ZZ_MARK_TARGET(0x8001AF28,0x8001AF2C,ZZ_1AD30_1F8);
ZZ_MARK_TARGET(0x8001AF2C,0x8001AF34,ZZ_1AD30_1FC);
ZZ_MARK_TARGET(0x8001AF34,0x8001AF64,ZZ_1AD30_204);
ZZ_MARK_TARGET(0x8001AF64,0x8001AF70,ZZ_1AD30_234);
ZZ_MARK_TARGET(0x8001AF70,0x8001AF84,ZZ_1AD30_240);
ZZ_MARK_TARGET(0x8001AF84,0x8001B014,ZZ_1AD30_254);
ZZ_MARK_TARGET(0x8001B014,0x8001B02C,ZZ_1AD30_2E4);
ZZ_MARK_TARGET(0x8001B02C,0x8001B03C,ZZ_1AD30_2FC);
ZZ_MARK_TARGET(0x8001B03C,0x8001B05C,ZZ_1AD30_30C);
ZZ_MARK_TARGET(0x8001B05C,0x8001B064,ZZ_1AD30_32C);
ZZ_MARK_TARGET(0x8001B064,0x8001B108,ZZ_1AD30_334);
ZZ_MARK_TARGET(0x8001B108,0x8001B118,ZZ_1AD30_3D8);
ZZ_MARK_TARGET(0x8001B118,0x8001B13C,ZZ_1AD30_3E8);
ZZ_MARK_TARGET(0x8001B13C,0x8001B144,ZZ_1AD30_40C);
ZZ_MARK_TARGET(0x8001B144,0x8001B154,ZZ_1AD30_414);
ZZ_MARK_TARGET(0x8001B154,0x8001B284,ZZ_1AD30_424);
ZZ_MARK_TARGET(0x8001B284,0x8001B2B0,ZZ_1AD30_554);
ZZ_MARK_TARGET(0x8001B2B0,0x8001B328,ZZ_1AD30_580);
ZZ_MARK_TARGET(0x8001B328,0x8001B330,ZZ_1AD30_5F8);
ZZ_MARK_TARGET(0x8001B330,0x8001B348,ZZ_1AD30_600);
ZZ_MARK_TARGET(0x8001B348,0x8001B360,ZZ_1AD30_618);
ZZ_MARK_TARGET(0x8001B360,0x8001B37C,ZZ_1AD30_630);
ZZ_MARK_TARGET(0x8001B37C,0x8001B394,ZZ_1AD30_64C);
ZZ_MARK_TARGET(0x8001B394,0x8001B3B0,ZZ_1AD30_664);
ZZ_MARK_TARGET(0x8001B3B0,0x8001B3C8,ZZ_1AD30_680);
ZZ_MARK_TARGET(0x8001B3C8,0x8001B3D4,ZZ_1AD30_698);
ZZ_MARK_TARGET(0x8001B3D4,0x8001B3DC,ZZ_1AD30_6A4);
ZZ_MARK_TARGET(0x8001B3DC,0x8001B3E0,ZZ_1AD30_6AC);
ZZ_MARK_TARGET(0x8001B3E0,0x8001B4BC,ZZ_1AD30_6B0);
ZZ_MARK_TARGET(0x8001B4BC,0x8001B508,ZZ_1AD30_78C);
ZZ_MARK_TARGET(0x8001B508,0x8001B510,ZZ_1AD30_7D8);
ZZ_MARK_TARGET(0x8001B510,0x8001B528,ZZ_1AD30_7E0);
ZZ_MARK_TARGET(0x8001B528,0x8001B540,ZZ_1AD30_7F8);
ZZ_MARK_TARGET(0x8001B540,0x8001B55C,ZZ_1AD30_810);
ZZ_MARK_TARGET(0x8001B55C,0x8001B574,ZZ_1AD30_82C);
ZZ_MARK_TARGET(0x8001B574,0x8001B590,ZZ_1AD30_844);
ZZ_MARK_TARGET(0x8001B590,0x8001B5A8,ZZ_1AD30_860);
ZZ_MARK_TARGET(0x8001B5A8,0x8001B5AC,ZZ_1AD30_878);
ZZ_MARK_TARGET(0x8001B5AC,0x8001B5C0,ZZ_1AD30_87C);
ZZ_MARK_TARGET(0x8001B5C0,0x8001B614,ZZ_1AD30_890);
ZZ_MARK_TARGET(0x8001B614,0x8001B630,ZZ_1AD30_8E4);
ZZ_MARK_TARGET(0x8001B630,0x8001B6B4,ZZ_1AD30_900);
ZZ_MARK_TARGET(0x8001B6B4,0x8001B6BC,ZZ_1AD30_984);
ZZ_MARK_TARGET(0x8001B6BC,0x8001B6F4,ZZ_1AD30_98C);
ZZ_MARK_TARGET(0x8001B6F4,0x8001B70C,ZZ_1AD30_9C4);
ZZ_MARK_TARGET(0x8001B70C,0x8001B718,ZZ_1AD30_9DC);
ZZ_MARK_TARGET(0x8001B718,0x8001B760,ZZ_1AD30_9E8);
ZZ_MARK_TARGET(0x8001B760,0x8001B778,ZZ_1AD30_A30);
ZZ_MARK_TARGET(0x8001B778,0x8001B798,ZZ_1AD30_A48);
ZZ_MARK_TARGET(0x8001B798,0x8001B7D0,ZZ_1AD30_A68);
ZZ_MARK_TARGET(0x8001B7D0,0x8001B800,ZZ_1AD30_AA0);
ZZ_MARK_TARGET(0x8001B800,0x8001B83C,ZZ_1AD30_AD0);
ZZ_MARK_TARGET(0x8001B83C,0x8001B870,ZZ_1AD30_B0C);
ZZ_MARK_TARGET(0x8001B870,0x8001B8C8,ZZ_1AD30_B40);
ZZ_MARK_TARGET(0x8001B8C8,0x8001B8DC,ZZ_1AD30_B98);
ZZ_MARK_TARGET(0x8001B8DC,0x8001B924,ZZ_1AD30_BAC);
ZZ_MARK_TARGET(0x8001B924,0x8001B928,ZZ_1AD30_BF4);
ZZ_MARK_TARGET(0x8001B928,0x8001B93C,ZZ_1AD30_BF8);
ZZ_MARK_TARGET(0x8001B93C,0x8001B940,ZZ_1AD30_C0C);
ZZ_MARK_TARGET(0x8001B940,0x8001B974,ZZ_1AD30_C10);
