#ifdef ZZ_INCLUDE_CODE
ZZ_2B2BC:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26292); //+ 0x66B4
	SP -= 152;
	EMU_Write32(SP + 148,RA); //+ 0x94
	EMU_Write32(SP + 144,FP); //+ 0x90
	EMU_Write32(SP + 140,S7); //+ 0x8C
	EMU_Write32(SP + 136,S6); //+ 0x88
	EMU_Write32(SP + 132,S5); //+ 0x84
	EMU_Write32(SP + 128,S4); //+ 0x80
	EMU_Write32(SP + 124,S3); //+ 0x7C
	EMU_Write32(SP + 120,S2); //+ 0x78
	EMU_Write32(SP + 116,S1); //+ 0x74
	if (!V0)
	{
		EMU_Write32(SP + 112,S0); //+ 0x70
		ZZ_CLOCKCYCLES(14,0x8002B318);
		goto ZZ_2B2BC_5C;
	}
	EMU_Write32(SP + 112,S0); //+ 0x70
	A0 = 0x80060000;
	A0 += 6320;
	V1 = EMU_ReadU32(A0);
	V0 = 0x10000;
	V0 &= V1;
	if (!V0)
	{
		V0 = V1 & 0x2;
		ZZ_CLOCKCYCLES(21,0x8002B320);
		goto ZZ_2B2BC_64;
	}
	V0 = V1 & 0x2;
	RA = 0x8002B318; //ZZ_2B2BC_5C
	A0 += 4;
	ZZ_CLOCKCYCLES(23,0x8002BAB4);
	goto ZZ_2BAB4;
ZZ_2B2BC_5C:
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x8002BA80);
	goto ZZ_2B2BC_7C4;
ZZ_2B2BC_64:
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8002BA80);
		goto ZZ_2B2BC_7C4;
	}
	V0 = R0;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	V1 = EMU_ReadS16(V0 + 32); //+ 0x20
	V0 = V1 < 9;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(10,0x8002BA7C);
		goto ZZ_2B2BC_7C0;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 2340); //+ 0x924
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER(0x8002B384,ZZ_2B2BC_C8);
	ZZ_JUMPREGISTER(0x8002B398,ZZ_2B2BC_DC);
	ZZ_JUMPREGISTER(0x8002BA7C,ZZ_2B2BC_7C0);
	ZZ_JUMPREGISTER(0x8002B360,ZZ_2B2BC_A4);
	ZZ_JUMPREGISTER(0x8002B75C,ZZ_2B2BC_4A0);
	ZZ_JUMPREGISTER(0x8002B548,ZZ_2B2BC_28C);
	ZZ_JUMPREGISTER_END();
ZZ_2B2BC_A4:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 26292); //+ 0x66B4
	V0 = 0x100;
	AT = 0x80060000;
	EMU_Write32(AT + 6352,V0); //+ 0x18D0
	RA = 0x8002B37C; //ZZ_2B2BC_C0
	A1 = R0;
	ZZ_CLOCKCYCLES(7,0x8002A82C);
	goto ZZ_2A82C;
ZZ_2B2BC_C0:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8002BA80);
	goto ZZ_2B2BC_7C4;
ZZ_2B2BC_C8:
	V0 = 0x100;
	AT = 0x80060000;
	EMU_Write32(AT + 6352,V0); //+ 0x18D0
	V0 = 0x1;
	ZZ_CLOCKCYCLES(5,0x8002BA80);
	goto ZZ_2B2BC_7C4;
ZZ_2B2BC_DC:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 6372); //+ 0xFFFFE71C
	V0 &= 0xF0;
	if (!V0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(6,0x8002B3D4);
		goto ZZ_2B2BC_118;
	}
	S0 = R0;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 = 0x80000;
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V1 |= 0x1000;
	V0 &= V1;
	S0 = V0 < 1;
	ZZ_CLOCKCYCLES(15,0x8002B3D4);
ZZ_2B2BC_118:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= 0x1000;
	if (V0)
	{
		ZZ_CLOCKCYCLES(10,0x8002B404);
		goto ZZ_2B2BC_148;
	}
	AT = 0x80060000;
	EMU_Write32(AT + 6352,R0); //+ 0x18D0
	ZZ_CLOCKCYCLES(12,0x8002B404);
ZZ_2B2BC_148:
	A2 = 0x80050000;
	A2 = EMU_ReadU32(A2 + 31008); //+ 0x7920
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 31004); //+ 0x791C
	V0 = (int32_t)A2 >> 8;
	V1 = EMU_ReadU16(A1 + 30); //+ 0x1E
	V0 += 1;
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(10,0x8002B434);
		goto ZZ_2B2BC_178;
	}
	if (!S0)
	{
		ZZ_CLOCKCYCLES(12,0x8002B530);
		goto ZZ_2B2BC_274;
	}
	ZZ_CLOCKCYCLES(12,0x8002B434);
ZZ_2B2BC_178:
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(4,0x8002BA80);
		goto ZZ_2B2BC_7C4;
	}
	V0 = 0x1;
	A0 = EMU_ReadU8(A1 + 13); //+ 0xD
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	A0 <<= 2;
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 += 532;
	RA = 0x8002B464; //ZZ_2B2BC_1A8
	A0 += V0;
	ZZ_CLOCKCYCLES(12,0x80015A98);
	goto ZZ_15A98;
ZZ_2B2BC_1A8:
	A3 = V0;
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 31004); //+ 0x791C
	V1 = EMU_ReadU32(A3 + 16); //+ 0x10
	V0 = EMU_ReadU8(A0 + 14); //+ 0xE
	V1 = EMU_ReadU32(V1 + 516); //+ 0x204
	V0 += V1;
	V0 <<= 2;
	V0 += A3;
	V1 = EMU_ReadU8(A0 + 15); //+ 0xF
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 &= 0x1;
	if (V1)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(15,0x8002B4B0);
		goto ZZ_2B2BC_1F4;
	}
	A2 = R0;
	V0 = EMU_ReadU16(A1 + 30); //+ 0x1E
	V0 -= 1;
	A2 = V0 << 8;
	ZZ_CLOCKCYCLES(19,0x8002B4B0);
ZZ_2B2BC_1F4:
	A0 = A3;
	RA = 0x8002B4BC; //ZZ_2B2BC_200
	A3 = R0;
	ZZ_CLOCKCYCLES(3,0x80025A60);
	goto ZZ_25A60;
ZZ_2B2BC_200:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 764); //+ 0x2FC
	V0 &= 0x1000;
	if (V0)
	{
		ZZ_CLOCKCYCLES(10,0x8002B4FC);
		goto ZZ_2B2BC_240;
	}
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 26292); //+ 0x66B4
	A1 = 0x80050000;
	A1 += 31092;
	RA = 0x8002B4FC; //ZZ_2B2BC_240
	A2 = 0x1;
	ZZ_CLOCKCYCLES(16,0x80026460);
	goto ZZ_26460;
ZZ_2B2BC_240:
	if (!S0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8002BA80);
		goto ZZ_2B2BC_7C4;
	}
	V0 = 0x1;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	V1 = EMU_ReadS16(V0 + 32); //+ 0x20
	V0 = 0x1;
	if (V1 == V0)
	{
		V0 = 0x3;
		ZZ_CLOCKCYCLES(9,0x8002B3D4);
		goto ZZ_2B2BC_118;
	}
	V0 = 0x3;
	if (V1 == V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(11,0x8002B3D4);
		goto ZZ_2B2BC_118;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(13,0x8002BA80);
	goto ZZ_2B2BC_7C4;
ZZ_2B2BC_274:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	A2 += 256;
	ZZ_CLOCKCYCLES(4,0x8002BA74);
	goto ZZ_2B2BC_7B8;
ZZ_2B2BC_284:
	S0 = A0;
	ZZ_CLOCKCYCLES(2,0x8002B5A0);
	goto ZZ_2B2BC_2E4;
ZZ_2B2BC_28C:
	S0 = -1;
	A0 = R0;
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 31004); //+ 0x791C
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6548); //+ 0x1994
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	if (!V1)
	{
		T0 = V0 & 0x3;
		ZZ_CLOCKCYCLES(10,0x8002B5A0);
		goto ZZ_2B2BC_2E4;
	}
	T0 = V0 & 0x3;
	A3 = T0 ^ 0x3;
	A2 = V1;
	V1 = A1;
	ZZ_CLOCKCYCLES(13,0x8002B57C);
ZZ_2B2BC_2C0:
	V0 = EMU_ReadU8(V1 + 12); //+ 0xC
	V0 &= 0x3;
	if (V0 == A3)
	{
		ZZ_CLOCKCYCLES(5,0x8002B540);
		goto ZZ_2B2BC_284;
	}
	A0 += 1;
	V0 = A0 < A2;
	if (V0)
	{
		V1 += 4;
		ZZ_CLOCKCYCLES(9,0x8002B57C);
		goto ZZ_2B2BC_2C0;
	}
	V1 += 4;
	ZZ_CLOCKCYCLES(9,0x8002B5A0);
ZZ_2B2BC_2E4:
	V0 = T0 & 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x8002B668);
		goto ZZ_2B2BC_3AC;
	}
	A2 = 0x80050000;
	A2 = EMU_ReadU32(A2 + 31008); //+ 0x7920
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 31004); //+ 0x791C
	V0 = (int32_t)A2 >> 8;
	V1 = EMU_ReadU16(A1 + 30); //+ 0x1E
	V0 += 1;
	V0 = (int32_t)V0 < (int32_t)V1;
	if (V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(13,0x8002B658);
		goto ZZ_2B2BC_39C;
	}
	V0 = -1;
	if (S0 == V0)
	{
		S0 <<= 2;
		ZZ_CLOCKCYCLES(15,0x8002B730);
		goto ZZ_2B2BC_474;
	}
	S0 <<= 2;
	V0 = A1 + S0;
	A0 = EMU_ReadU8(V0 + 13); //+ 0xD
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	A0 <<= 2;
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 += 532;
	RA = 0x8002B600; //ZZ_2B2BC_344
	A0 += V0;
	ZZ_CLOCKCYCLES(24,0x80015A98);
	goto ZZ_15A98;
ZZ_2B2BC_344:
	A3 = V0;
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 31004); //+ 0x791C
	V1 = EMU_ReadU32(A3 + 16); //+ 0x10
	A0 += S0;
	V0 = EMU_ReadU8(A0 + 14); //+ 0xE
	V1 = EMU_ReadU32(V1 + 516); //+ 0x204
	V0 += V1;
	V0 <<= 2;
	V0 += A3;
	V1 = EMU_ReadU8(A0 + 15); //+ 0xF
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 &= 0x1;
	if (V1)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(16,0x8002B650);
		goto ZZ_2B2BC_394;
	}
	A2 = R0;
	V0 = EMU_ReadU16(A1 + 30); //+ 0x1E
	V0 -= 1;
	A2 = V0 << 8;
	ZZ_CLOCKCYCLES(20,0x8002B650);
ZZ_2B2BC_394:
	A0 = A3;
	ZZ_CLOCKCYCLES(2,0x8002B728);
	goto ZZ_2B2BC_46C;
ZZ_2B2BC_39C:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	A2 += 256;
	ZZ_CLOCKCYCLES(4,0x8002B728);
	goto ZZ_2B2BC_46C;
ZZ_2B2BC_3AC:
	A2 = 0x80050000;
	A2 = EMU_ReadU32(A2 + 31008); //+ 0x7920
	V0 = (int32_t)A2 >> 8;
	V0 -= 1;
	if ((int32_t)V0 >= 0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(7,0x8002B714);
		goto ZZ_2B2BC_458;
	}
	V0 = -1;
	if (S0 == V0)
	{
		S0 <<= 2;
		ZZ_CLOCKCYCLES(9,0x8002B730);
		goto ZZ_2B2BC_474;
	}
	S0 <<= 2;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	V0 += S0;
	A0 = EMU_ReadU8(V0 + 13); //+ 0xD
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 30996); //+ 0x7914
	A0 <<= 2;
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 += 532;
	RA = 0x8002B6BC; //ZZ_2B2BC_400
	A0 += V0;
	ZZ_CLOCKCYCLES(21,0x80015A98);
	goto ZZ_15A98;
ZZ_2B2BC_400:
	A3 = V0;
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 31004); //+ 0x791C
	V1 = EMU_ReadU32(A3 + 16); //+ 0x10
	A0 += S0;
	V0 = EMU_ReadU8(A0 + 14); //+ 0xE
	V1 = EMU_ReadU32(V1 + 516); //+ 0x204
	V0 += V1;
	V0 <<= 2;
	V0 += A3;
	V1 = EMU_ReadU8(A0 + 15); //+ 0xF
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 &= 0x1;
	if (V1)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(16,0x8002B70C);
		goto ZZ_2B2BC_450;
	}
	A2 = R0;
	V0 = EMU_ReadU16(A1 + 30); //+ 0x1E
	V0 -= 1;
	A2 = V0 << 8;
	ZZ_CLOCKCYCLES(20,0x8002B70C);
ZZ_2B2BC_450:
	A0 = A3;
	ZZ_CLOCKCYCLES(2,0x8002B728);
	goto ZZ_2B2BC_46C;
ZZ_2B2BC_458:
	A2 -= 256;
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30996); //+ 0x7914
	A1 = 0x80050000;
	A1 = EMU_ReadU32(A1 + 31004); //+ 0x791C
	ZZ_CLOCKCYCLES(5,0x8002B728);
ZZ_2B2BC_46C:
	RA = 0x8002B730; //ZZ_2B2BC_474
	A3 = R0;
	ZZ_CLOCKCYCLES(2,0x80025A60);
	goto ZZ_25A60;
ZZ_2B2BC_474:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	V1 = EMU_ReadS16(V0 + 32); //+ 0x20
	V0 = 0x8;
	if (V1 == V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(7,0x8002BA7C);
		goto ZZ_2B2BC_7C0;
	}
	V0 = 0x1;
	AT = 0x80060000;
	EMU_Write32(AT + 6548,V0); //+ 0x1994
	ZZ_CLOCKCYCLES(11,0x8002BA80);
	goto ZZ_2B2BC_7C4;
ZZ_2B2BC_4A0:
	S4 = 0x80060000;
	S4 = EMU_ReadU32(S4 + 6548); //+ 0x1994
	if (!S4)
	{
		S2 = R0;
		ZZ_CLOCKCYCLES(5,0x8002B318);
		goto ZZ_2B2BC_5C;
	}
	S2 = R0;
	if ((int32_t)S4 > 0)
	{
		V0 = (int32_t)S4 < 7;
		ZZ_CLOCKCYCLES(7,0x8002B78C);
		goto ZZ_2B2BC_4D0;
	}
	V0 = (int32_t)S4 < 7;
	V0 = -1;
	if (S4 == V0)
	{
		ZZ_CLOCKCYCLES(10,0x8002B7A4);
		goto ZZ_2B2BC_4E8;
	}
	ZZ_CLOCKCYCLES(12,0x8002B7BC);
	goto ZZ_2B2BC_500;
ZZ_2B2BC_4D0:
	if (!V0)
	{
		V0 = (int32_t)S4 < 5;
		ZZ_CLOCKCYCLES(2,0x8002B7BC);
		goto ZZ_2B2BC_500;
	}
	V0 = (int32_t)S4 < 5;
	if (V0)
	{
		S3 = 0x22;
		ZZ_CLOCKCYCLES(4,0x8002B7BC);
		goto ZZ_2B2BC_500;
	}
	S3 = 0x22;
	S7 = -1;
	ZZ_CLOCKCYCLES(6,0x8002B814);
	goto ZZ_2B2BC_558;
ZZ_2B2BC_4E8:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6540); //+ 0x198C
	S4 = 0x1;
	V0 &= 0xFFF;
	S3 = -V0;
	ZZ_CLOCKCYCLES(6,0x8002B810);
	goto ZZ_2B2BC_554;
ZZ_2B2BC_500:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 30836); //+ 0x7874
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 6540); //+ 0x198C
	RA = 0x8002B7D4; //ZZ_2B2BC_518
	ZZ_CLOCKCYCLES(6,0x800245F0);
	goto ZZ_245F0;
ZZ_2B2BC_518:
	S3 = V0;
	if ((int32_t)S3 >= 0)
	{
		V0 = S3;
		ZZ_CLOCKCYCLES(3,0x8002B7E4);
		goto ZZ_2B2BC_528;
	}
	V0 = S3;
	V0 = -V0;
	ZZ_CLOCKCYCLES(4,0x8002B7E4);
ZZ_2B2BC_528:
	V0 = (int32_t)V0 < 23;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8002B80C);
		goto ZZ_2B2BC_550;
	}
	if ((int32_t)S3 > 0)
	{
		V0 = R0 < S3;
		ZZ_CLOCKCYCLES(5,0x8002B800);
		goto ZZ_2B2BC_544;
	}
	V0 = R0 < S3;
	V0 = -V0;
	ZZ_CLOCKCYCLES(7,0x8002B804);
	goto ZZ_2B2BC_548;
ZZ_2B2BC_544:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8002B804);
ZZ_2B2BC_548:
	S3 = V0;
	ZZ_CLOCKCYCLES(2,0x8002B810);
	goto ZZ_2B2BC_554;
ZZ_2B2BC_550:
	S3 = R0;
	ZZ_CLOCKCYCLES(1,0x8002B810);
ZZ_2B2BC_554:
	S7 = -1;
	ZZ_CLOCKCYCLES(1,0x8002B814);
ZZ_2B2BC_558:
	S6 = S4 & 0x4;
	FP = S4 & 0x3;
	S1 = 0x80050000;
	S1 = EMU_ReadU32(S1 + 31004); //+ 0x791C
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 31008); //+ 0x7920
	ZZ_CLOCKCYCLES(6,0x8002B82C);
ZZ_2B2BC_570:
	if (!S3)
	{
		ZZ_CLOCKCYCLES(2,0x8002BA20);
		goto ZZ_2B2BC_764;
	}
	S2 = S1;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6548); //+ 0x1994
	if (V0 != S7)
	{
		S5 = A0;
		ZZ_CLOCKCYCLES(8,0x8002B890);
		goto ZZ_2B2BC_5D4;
	}
	S5 = A0;
	V1 = (int32_t)S5 >> 8;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += S2;
	A0 = EMU_ReadS16(V0 + 58); //+ 0x3A
	if ((int32_t)S3 >= 0)
	{
		A1 = S3;
		ZZ_CLOCKCYCLES(16,0x8002B870);
		goto ZZ_2B2BC_5B4;
	}
	A1 = S3;
	A1 = -A1;
	ZZ_CLOCKCYCLES(17,0x8002B870);
ZZ_2B2BC_5B4:
	RA = 0x8002B878; //ZZ_2B2BC_5BC
	ZZ_CLOCKCYCLES(2,0x800245F0);
	goto ZZ_245F0;
ZZ_2B2BC_5BC:
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8002B884);
		goto ZZ_2B2BC_5C8;
	}
	V0 = -V0;
	ZZ_CLOCKCYCLES(3,0x8002B884);
ZZ_2B2BC_5C8:
	V0 = (int32_t)V0 < 23;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8002BA20);
		goto ZZ_2B2BC_764;
	}
	ZZ_CLOCKCYCLES(3,0x8002B890);
ZZ_2B2BC_5D4:
	if (!S6)
	{
		A0 = S5 + 256;
		ZZ_CLOCKCYCLES(2,0x8002B89C);
		goto ZZ_2B2BC_5E0;
	}
	A0 = S5 + 256;
	A0 = S5 + 1024;
	ZZ_CLOCKCYCLES(3,0x8002B89C);
ZZ_2B2BC_5E0:
	V0 = EMU_ReadU16(S2 + 30); //+ 0x1E
	V0 <<= 8;
	V0 = (int32_t)A0 < (int32_t)V0;
	if (V0)
	{
		S0 = -1;
		ZZ_CLOCKCYCLES(6,0x8002B9E4);
		goto ZZ_2B2BC_728;
	}
	S0 = -1;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	if (!V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(10,0x8002B91C);
		goto ZZ_2B2BC_660;
	}
	V1 = R0;
	A1 = V0;
	A0 = S2;
	ZZ_CLOCKCYCLES(12,0x8002B8CC);
ZZ_2B2BC_610:
	V0 = EMU_ReadU8(A0 + 15); //+ 0xF
	if (V0 == S4)
	{
		ZZ_CLOCKCYCLES(4,0x8002B908);
		goto ZZ_2B2BC_64C;
	}
	if (S0 != S7)
	{
		ZZ_CLOCKCYCLES(6,0x8002B90C);
		goto ZZ_2B2BC_650;
	}
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	T1 = 0x1;
	if (V0 == T1)
	{
		ZZ_CLOCKCYCLES(10,0x8002B908);
		goto ZZ_2B2BC_64C;
	}
	V0 = EMU_ReadU8(A0 + 15); //+ 0xF
	V0 &= 0x3;
	if (FP != V0)
	{
		ZZ_CLOCKCYCLES(15,0x8002B90C);
		goto ZZ_2B2BC_650;
	}
	ZZ_CLOCKCYCLES(15,0x8002B908);
ZZ_2B2BC_64C:
	S0 = V1;
	ZZ_CLOCKCYCLES(1,0x8002B90C);
ZZ_2B2BC_650:
	V1 += 1;
	V0 = V1 < A1;
	if (V0)
	{
		A0 += 4;
		ZZ_CLOCKCYCLES(4,0x8002B8CC);
		goto ZZ_2B2BC_610;
	}
	A0 += 4;
	ZZ_CLOCKCYCLES(4,0x8002B91C);
ZZ_2B2BC_660:
	if (S0 != S7)
	{
		ZZ_CLOCKCYCLES(2,0x8002B960);
		goto ZZ_2B2BC_6A4;
	}
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	if (!V0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(6,0x8002B960);
		goto ZZ_2B2BC_6A4;
	}
	V1 = R0;
	A1 = V0;
	A0 = S1;
	ZZ_CLOCKCYCLES(8,0x8002B93C);
ZZ_2B2BC_680:
	V0 = EMU_ReadU8(A0 + 15); //+ 0xF
	V0 &= 0x4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8002B9C8);
		goto ZZ_2B2BC_70C;
	}
	V1 += 1;
	V0 = V1 < A1;
	if (V0)
	{
		A0 += 4;
		ZZ_CLOCKCYCLES(9,0x8002B93C);
		goto ZZ_2B2BC_680;
	}
	A0 += 4;
	ZZ_CLOCKCYCLES(9,0x8002B960);
ZZ_2B2BC_6A4:
	S0 <<= 2;
	S0 += S1;
	A0 = EMU_ReadU8(S0 + 13); //+ 0xD
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	A0 <<= 2;
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 += 532;
	RA = 0x8002B984; //ZZ_2B2BC_6C8
	A0 += V0;
	ZZ_CLOCKCYCLES(9,0x80015A98);
	goto ZZ_15A98;
ZZ_2B2BC_6C8:
	A0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 = EMU_ReadU8(S0 + 14); //+ 0xE
	A0 = EMU_ReadU32(A0 + 516); //+ 0x204
	V1 += A0;
	V1 <<= 2;
	V1 += V0;
	V0 = EMU_ReadU8(S0 + 15); //+ 0xF
	S1 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 &= 0x1;
	if (V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(12,0x8002B9D0);
		goto ZZ_2B2BC_714;
	}
	A0 = R0;
	V0 = EMU_ReadU16(S1 + 30); //+ 0x1E
	V0 -= 1;
	A0 = V0 << 8;
	ZZ_CLOCKCYCLES(17,0x8002B9D0);
	goto ZZ_2B2BC_714;
ZZ_2B2BC_70C:
	S0 = V1;
	ZZ_CLOCKCYCLES(2,0x8002B960);
	goto ZZ_2B2BC_6A4;
ZZ_2B2BC_714:
	if (!S6)
	{
		ZZ_CLOCKCYCLES(2,0x8002B9EC);
		goto ZZ_2B2BC_730;
	}
	ZZ_CLOCKCYCLES(2,0x8002B9D8);
ZZ_2B2BC_71C:
	S2 = S1;
	ZZ_CLOCKCYCLES(1,0x8002B9DC);
ZZ_2B2BC_720:
	S5 = A0;
	ZZ_CLOCKCYCLES(2,0x8002BA20);
	goto ZZ_2B2BC_764;
ZZ_2B2BC_728:
	if (S6)
	{
		ZZ_CLOCKCYCLES(2,0x8002B9DC);
		goto ZZ_2B2BC_720;
	}
	ZZ_CLOCKCYCLES(2,0x8002B9EC);
ZZ_2B2BC_730:
	if ((int32_t)S3 > 0)
	{
		ZZ_CLOCKCYCLES(2,0x8002B9D8);
		goto ZZ_2B2BC_71C;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	if (S1 != V0)
	{
		V1 = (int32_t)A0 >> 8;
		ZZ_CLOCKCYCLES(7,0x8002B82C);
		goto ZZ_2B2BC_570;
	}
	V1 = (int32_t)A0 >> 8;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31008); //+ 0x7920
	V0 = (int32_t)V0 >> 8;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(13,0x8002B82C);
		goto ZZ_2B2BC_570;
	}
	ZZ_CLOCKCYCLES(13,0x8002BA20);
ZZ_2B2BC_764:
	A0 = 0x80060000;
	A0 += 6548;
	V1 = EMU_ReadU32(A0);
	V0 = -1;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8002BA3C);
		goto ZZ_2B2BC_780;
	}
	EMU_Write32(A0,S4);
	ZZ_CLOCKCYCLES(7,0x8002BA3C);
ZZ_2B2BC_780:
	if (!S2)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8002BA80);
		goto ZZ_2B2BC_7C4;
	}
	V0 = 0x1;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31004); //+ 0x791C
	if (S2 != V0)
	{
		A1 = S2;
		ZZ_CLOCKCYCLES(7,0x8002BA6C);
		goto ZZ_2B2BC_7B0;
	}
	A1 = S2;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 31008); //+ 0x7920
	if (S5 == V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(12,0x8002BA80);
		goto ZZ_2B2BC_7C4;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(12,0x8002BA6C);
ZZ_2B2BC_7B0:
	A0 = EMU_ReadU32(S2 + 4); //+ 0x4
	A2 = S5;
	ZZ_CLOCKCYCLES(2,0x8002BA74);
ZZ_2B2BC_7B8:
	RA = 0x8002BA7C; //ZZ_2B2BC_7C0
	A3 = R0;
	ZZ_CLOCKCYCLES(2,0x80025A60);
	goto ZZ_25A60;
ZZ_2B2BC_7C0:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8002BA80);
ZZ_2B2BC_7C4:
	RA = EMU_ReadU32(SP + 148); //+ 0x94
	FP = EMU_ReadU32(SP + 144); //+ 0x90
	S7 = EMU_ReadU32(SP + 140); //+ 0x8C
	S6 = EMU_ReadU32(SP + 136); //+ 0x88
	S5 = EMU_ReadU32(SP + 132); //+ 0x84
	S4 = EMU_ReadU32(SP + 128); //+ 0x80
	S3 = EMU_ReadU32(SP + 124); //+ 0x7C
	S2 = EMU_ReadU32(SP + 120); //+ 0x78
	S1 = EMU_ReadU32(SP + 116); //+ 0x74
	S0 = EMU_ReadU32(SP + 112); //+ 0x70
	SP += 152;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002B2BC,0x8002B318,ZZ_2B2BC);
ZZ_MARK_TARGET(0x8002B318,0x8002B320,ZZ_2B2BC_5C);
ZZ_MARK_TARGET(0x8002B320,0x8002B360,ZZ_2B2BC_64);
ZZ_MARK_TARGET(0x8002B360,0x8002B37C,ZZ_2B2BC_A4);
ZZ_MARK_TARGET(0x8002B37C,0x8002B384,ZZ_2B2BC_C0);
ZZ_MARK_TARGET(0x8002B384,0x8002B398,ZZ_2B2BC_C8);
ZZ_MARK_TARGET(0x8002B398,0x8002B3D4,ZZ_2B2BC_DC);
ZZ_MARK_TARGET(0x8002B3D4,0x8002B404,ZZ_2B2BC_118);
ZZ_MARK_TARGET(0x8002B404,0x8002B434,ZZ_2B2BC_148);
ZZ_MARK_TARGET(0x8002B434,0x8002B464,ZZ_2B2BC_178);
ZZ_MARK_TARGET(0x8002B464,0x8002B4B0,ZZ_2B2BC_1A8);
ZZ_MARK_TARGET(0x8002B4B0,0x8002B4BC,ZZ_2B2BC_1F4);
ZZ_MARK_TARGET(0x8002B4BC,0x8002B4FC,ZZ_2B2BC_200);
ZZ_MARK_TARGET(0x8002B4FC,0x8002B530,ZZ_2B2BC_240);
ZZ_MARK_TARGET(0x8002B530,0x8002B540,ZZ_2B2BC_274);
ZZ_MARK_TARGET(0x8002B540,0x8002B548,ZZ_2B2BC_284);
ZZ_MARK_TARGET(0x8002B548,0x8002B57C,ZZ_2B2BC_28C);
ZZ_MARK_TARGET(0x8002B57C,0x8002B5A0,ZZ_2B2BC_2C0);
ZZ_MARK_TARGET(0x8002B5A0,0x8002B600,ZZ_2B2BC_2E4);
ZZ_MARK_TARGET(0x8002B600,0x8002B650,ZZ_2B2BC_344);
ZZ_MARK_TARGET(0x8002B650,0x8002B658,ZZ_2B2BC_394);
ZZ_MARK_TARGET(0x8002B658,0x8002B668,ZZ_2B2BC_39C);
ZZ_MARK_TARGET(0x8002B668,0x8002B6BC,ZZ_2B2BC_3AC);
ZZ_MARK_TARGET(0x8002B6BC,0x8002B70C,ZZ_2B2BC_400);
ZZ_MARK_TARGET(0x8002B70C,0x8002B714,ZZ_2B2BC_450);
ZZ_MARK_TARGET(0x8002B714,0x8002B728,ZZ_2B2BC_458);
ZZ_MARK_TARGET(0x8002B728,0x8002B730,ZZ_2B2BC_46C);
ZZ_MARK_TARGET(0x8002B730,0x8002B75C,ZZ_2B2BC_474);
ZZ_MARK_TARGET(0x8002B75C,0x8002B78C,ZZ_2B2BC_4A0);
ZZ_MARK_TARGET(0x8002B78C,0x8002B7A4,ZZ_2B2BC_4D0);
ZZ_MARK_TARGET(0x8002B7A4,0x8002B7BC,ZZ_2B2BC_4E8);
ZZ_MARK_TARGET(0x8002B7BC,0x8002B7D4,ZZ_2B2BC_500);
ZZ_MARK_TARGET(0x8002B7D4,0x8002B7E4,ZZ_2B2BC_518);
ZZ_MARK_TARGET(0x8002B7E4,0x8002B800,ZZ_2B2BC_528);
ZZ_MARK_TARGET(0x8002B800,0x8002B804,ZZ_2B2BC_544);
ZZ_MARK_TARGET(0x8002B804,0x8002B80C,ZZ_2B2BC_548);
ZZ_MARK_TARGET(0x8002B80C,0x8002B810,ZZ_2B2BC_550);
ZZ_MARK_TARGET(0x8002B810,0x8002B814,ZZ_2B2BC_554);
ZZ_MARK_TARGET(0x8002B814,0x8002B82C,ZZ_2B2BC_558);
ZZ_MARK_TARGET(0x8002B82C,0x8002B870,ZZ_2B2BC_570);
ZZ_MARK_TARGET(0x8002B870,0x8002B878,ZZ_2B2BC_5B4);
ZZ_MARK_TARGET(0x8002B878,0x8002B884,ZZ_2B2BC_5BC);
ZZ_MARK_TARGET(0x8002B884,0x8002B890,ZZ_2B2BC_5C8);
ZZ_MARK_TARGET(0x8002B890,0x8002B89C,ZZ_2B2BC_5D4);
ZZ_MARK_TARGET(0x8002B89C,0x8002B8CC,ZZ_2B2BC_5E0);
ZZ_MARK_TARGET(0x8002B8CC,0x8002B908,ZZ_2B2BC_610);
ZZ_MARK_TARGET(0x8002B908,0x8002B90C,ZZ_2B2BC_64C);
ZZ_MARK_TARGET(0x8002B90C,0x8002B91C,ZZ_2B2BC_650);
ZZ_MARK_TARGET(0x8002B91C,0x8002B93C,ZZ_2B2BC_660);
ZZ_MARK_TARGET(0x8002B93C,0x8002B960,ZZ_2B2BC_680);
ZZ_MARK_TARGET(0x8002B960,0x8002B984,ZZ_2B2BC_6A4);
ZZ_MARK_TARGET(0x8002B984,0x8002B9C8,ZZ_2B2BC_6C8);
ZZ_MARK_TARGET(0x8002B9C8,0x8002B9D0,ZZ_2B2BC_70C);
ZZ_MARK_TARGET(0x8002B9D0,0x8002B9D8,ZZ_2B2BC_714);
ZZ_MARK_TARGET(0x8002B9D8,0x8002B9DC,ZZ_2B2BC_71C);
ZZ_MARK_TARGET(0x8002B9DC,0x8002B9E4,ZZ_2B2BC_720);
ZZ_MARK_TARGET(0x8002B9E4,0x8002B9EC,ZZ_2B2BC_728);
ZZ_MARK_TARGET(0x8002B9EC,0x8002BA20,ZZ_2B2BC_730);
ZZ_MARK_TARGET(0x8002BA20,0x8002BA3C,ZZ_2B2BC_764);
ZZ_MARK_TARGET(0x8002BA3C,0x8002BA6C,ZZ_2B2BC_780);
ZZ_MARK_TARGET(0x8002BA6C,0x8002BA74,ZZ_2B2BC_7B0);
ZZ_MARK_TARGET(0x8002BA74,0x8002BA7C,ZZ_2B2BC_7B8);
ZZ_MARK_TARGET(0x8002BA7C,0x8002BA80,ZZ_2B2BC_7C0);
ZZ_MARK_TARGET(0x8002BA80,0x8002BAB4,ZZ_2B2BC_7C4);
