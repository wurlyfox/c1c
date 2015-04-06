#ifdef ZZ_INCLUDE_CODE
ZZ_1D860:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2524); //+ 0xFFFFF624
	SP -= 136;
	EMU_Write32(SP + 100,S1); //+ 0x64
	S1 = A0;
	EMU_Write32(SP + 124,S7); //+ 0x7C
	S7 = A1;
	EMU_Write32(SP + 128,FP); //+ 0x80
	EMU_Write32(SP + 132,RA); //+ 0x84
	EMU_Write32(SP + 120,S6); //+ 0x78
	EMU_Write32(SP + 116,S5); //+ 0x74
	EMU_Write32(SP + 112,S4); //+ 0x70
	EMU_Write32(SP + 108,S3); //+ 0x6C
	EMU_Write32(SP + 104,S2); //+ 0x68
	EMU_Write32(SP + 96,S0); //+ 0x60
	S6 = EMU_ReadU32(S1 + 168); //+ 0xA8
	S5 = EMU_ReadU32(S1 + 88); //+ 0x58
	if (S1 != V0)
	{
		FP = A2;
		ZZ_CLOCKCYCLES(19,0x8001DA4C);
		goto ZZ_1D860_1EC;
	}
	FP = A2;
	V0 = 0x2000000;
	V0 &= S6;
	if (V0)
	{
		V0 = 0x4000000;
		ZZ_CLOCKCYCLES(23,0x8001D900);
		goto ZZ_1D860_A0;
	}
	V0 = 0x4000000;
	A0 = EMU_ReadU32(S1 + 256); //+ 0x100
	V0 &= A0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(28,0x8001D900);
		goto ZZ_1D860_A0;
	}
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12804); //+ 0xFFFFCDFC
	V1 = EMU_ReadU32(S1 + 364); //+ 0x16C
	V0 = V0 - V1;
	V0 = V0 < 9;
	if (!V0)
	{
		V0 = 0xA00000;
		ZZ_CLOCKCYCLES(36,0x8001DA4C);
		goto ZZ_1D860_1EC;
	}
	V0 = 0xA00000;
	V0 |= 0x8000;
	V0 &= A0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(40,0x8001DA4C);
		goto ZZ_1D860_1EC;
	}
	ZZ_CLOCKCYCLES(40,0x8001D900);
ZZ_1D860_A0:
	V1 = EMU_ReadU32(S1 + 256); //+ 0x100
	V0 = 0x4A00000;
	V0 |= 0x8000;
	V0 &= V1;
	if (V0)
	{
		V0 = 0x4000000;
		ZZ_CLOCKCYCLES(6,0x8001D93C);
		goto ZZ_1D860_DC;
	}
	V0 = 0x4000000;
	A1 = 0x80060000;
	A1 -= 17628;
	EMU_Write32(GP + 112,A1); //+ 0x70
	A2 = 0x80060000;
	A2 -= 2260;
	RA = 0x8001D934; //ZZ_1D860_D4
	A0 = S1;
	ZZ_CLOCKCYCLES(13,0x8001D4E0);
	goto ZZ_1D4E0;
ZZ_1D860_D4:
	ZZ_CLOCKCYCLES(2,0x8001DEE0);
	goto ZZ_1D860_680;
ZZ_1D860_DC:
	V0 &= V1;
	if (V0)
	{
		V1 = 0x2000000;
		ZZ_CLOCKCYCLES(3,0x8001DEE0);
		goto ZZ_1D860_680;
	}
	V1 = 0x2000000;
	V0 = EMU_ReadU32(S1 + 168); //+ 0xA8
	V0 &= V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001D9AC);
		goto ZZ_1D860_14C;
	}
	V1 = EMU_ReadU32(S1 + 132); //+ 0x84
	A0 = EMU_ReadU32(S1 + 140); //+ 0x8C
	V0 = V1 << 3;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 1;
	V0 = (int32_t)V0 >> 8;
	EMU_Write32(S1 + 132,V0); //+ 0x84
	V0 = A0 << 3;
	V0 = V0 - A0;
	V0 <<= 2;
	V0 += A0;
	V0 <<= 2;
	V0 = V0 - A0;
	V0 <<= 1;
	V0 = (int32_t)V0 >> 8;
	EMU_Write32(S1 + 140,V0); //+ 0x8C
	ZZ_CLOCKCYCLES(28,0x8001D9AC);
ZZ_1D860_14C:
	A0 = EMU_ReadU32(S1 + 132); //+ 0x84
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 17584); //+ 0xFFFFBB50
	V0 = (int32_t)A0 < (int32_t)V1;
	if (!V0)
	{
		V0 = -V1;
		ZZ_CLOCKCYCLES(7,0x8001D9DC);
		goto ZZ_1D860_17C;
	}
	V0 = -V1;
	V1 = V0;
	V0 = (int32_t)A0 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(11,0x8001D9DC);
		goto ZZ_1D860_17C;
	}
	V1 = A0;
	ZZ_CLOCKCYCLES(12,0x8001D9DC);
ZZ_1D860_17C:
	A0 = EMU_ReadU32(S1 + 136); //+ 0x88
	EMU_Write32(S1 + 132,V1); //+ 0x84
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 17584); //+ 0xFFFFBB50
	V0 = (int32_t)A0 < (int32_t)V1;
	if (!V0)
	{
		V0 = -V1;
		ZZ_CLOCKCYCLES(8,0x8001DA10);
		goto ZZ_1D860_1B0;
	}
	V0 = -V1;
	V1 = V0;
	V0 = (int32_t)A0 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(12,0x8001DA10);
		goto ZZ_1D860_1B0;
	}
	V1 = A0;
	ZZ_CLOCKCYCLES(13,0x8001DA10);
ZZ_1D860_1B0:
	A0 = EMU_ReadU32(S1 + 140); //+ 0x8C
	EMU_Write32(S1 + 136,V1); //+ 0x88
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 17584); //+ 0xFFFFBB50
	V0 = (int32_t)A0 < (int32_t)V1;
	if (!V0)
	{
		V0 = -V1;
		ZZ_CLOCKCYCLES(8,0x8001DA44);
		goto ZZ_1D860_1E4;
	}
	V0 = -V1;
	V1 = V0;
	V0 = (int32_t)A0 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(12,0x8001DA44);
		goto ZZ_1D860_1E4;
	}
	V1 = A0;
	ZZ_CLOCKCYCLES(13,0x8001DA44);
ZZ_1D860_1E4:
	EMU_Write32(S1 + 140,V1); //+ 0x8C
	ZZ_CLOCKCYCLES(2,0x8001DEE0);
	goto ZZ_1D860_680;
ZZ_1D860_1EC:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x80;
	if (!V0)
	{
		V0 = 0x100;
		ZZ_CLOCKCYCLES(5,0x8001DEE0);
		goto ZZ_1D860_680;
	}
	V0 = 0x100;
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 12724); //+ 0xFFFFCE4C
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(10,0x8001DEE0);
		goto ZZ_1D860_680;
	}
	V1 = EMU_ReadU32(S1 + 256); //+ 0x100
	S2 = 0x80060000;
	S2 -= 17848;
	V0 = V1 & 0x4;
	if (!V0)
	{
		V0 = V1 & 0x40;
		ZZ_CLOCKCYCLES(16,0x8001DAF8);
		goto ZZ_1D860_298;
	}
	V0 = V1 & 0x40;
	if (!V0)
	{
		V0 = 0x8000000;
		ZZ_CLOCKCYCLES(18,0x8001DA9C);
		goto ZZ_1D860_23C;
	}
	V0 = 0x8000000;
	S2 += 200;
	ZZ_CLOCKCYCLES(20,0x8001DAF8);
	goto ZZ_1D860_298;
ZZ_1D860_23C:
	V0 &= V1;
	if (!V0)
	{
		V0 = 0x800000;
		ZZ_CLOCKCYCLES(3,0x8001DAB0);
		goto ZZ_1D860_250;
	}
	V0 = 0x800000;
	S2 += 300;
	ZZ_CLOCKCYCLES(5,0x8001DAF8);
	goto ZZ_1D860_298;
ZZ_1D860_250:
	V0 &= V1;
	if (!V0)
	{
		V0 = 0x200000;
		ZZ_CLOCKCYCLES(3,0x8001DAC4);
		goto ZZ_1D860_264;
	}
	V0 = 0x200000;
	S2 += 180;
	ZZ_CLOCKCYCLES(5,0x8001DAF8);
	goto ZZ_1D860_298;
ZZ_1D860_264:
	V0 &= V1;
	if (!V0)
	{
		V0 = V1 & 0x100;
		ZZ_CLOCKCYCLES(3,0x8001DAE0);
		goto ZZ_1D860_280;
	}
	V0 = V1 & 0x100;
	if (!V0)
	{
		S2 += 140;
		ZZ_CLOCKCYCLES(5,0x8001DAF8);
		goto ZZ_1D860_298;
	}
	S2 += 140;
	S2 += 140;
	ZZ_CLOCKCYCLES(7,0x8001DAF8);
	goto ZZ_1D860_298;
ZZ_1D860_280:
	V0 = EMU_ReadU32(S1 + 168); //+ 0xA8
	V0 &= 0x2000;
	if (!V0)
	{
		S2 += 20;
		ZZ_CLOCKCYCLES(5,0x8001DAF8);
		goto ZZ_1D860_298;
	}
	S2 += 20;
	S2 += 80;
	ZZ_CLOCKCYCLES(6,0x8001DAF8);
ZZ_1D860_298:
	V1 = EMU_ReadU32(S1 + 264); //+ 0x108
	V0 = 0x5;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001DB10);
		goto ZZ_1D860_2B0;
	}
	S2 = 0x80060000;
	S2 -= 17768;
	ZZ_CLOCKCYCLES(6,0x8001DB10);
ZZ_1D860_2B0:
	V1 = EMU_ReadU32(S1 + 256); //+ 0x100
	V0 = V1 & 0x8;
	if (!V0)
	{
		V0 = 0x200000;
		ZZ_CLOCKCYCLES(5,0x8001DB64);
		goto ZZ_1D860_304;
	}
	V0 = 0x200000;
	V0 &= V1;
	if (!V0)
	{
		V0 = V1 & 0x100;
		ZZ_CLOCKCYCLES(8,0x8001DB48);
		goto ZZ_1D860_2E8;
	}
	V0 = V1 & 0x100;
	S2 = 0x80060000;
	S2 -= 17688;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(12,0x8001DB64);
		goto ZZ_1D860_304;
	}
	S2 += 120;
	ZZ_CLOCKCYCLES(14,0x8001DB64);
	goto ZZ_1D860_304;
ZZ_1D860_2E8:
	V0 = EMU_ReadU32(S1 + 168); //+ 0xA8
	S2 = 0x80060000;
	S2 -= 17808;
	V0 &= 0x2000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001DB64);
		goto ZZ_1D860_304;
	}
	S2 += 80;
	ZZ_CLOCKCYCLES(7,0x8001DB64);
ZZ_1D860_304:
	A0 = EMU_ReadU32(S1 + 256); //+ 0x100
	V0 = A0 & 0x10;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001DB80);
		goto ZZ_1D860_320;
	}
	S2 = 0x80060000;
	S2 -= 17788;
	ZZ_CLOCKCYCLES(7,0x8001DB80);
ZZ_1D860_320:
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 25612); //+ 0xFFFF9BF4
	V0 = V1 << 4;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 25608); //+ 0xFFFF9BF8
	if ((int32_t)V0 >= 0)
	{
		S4 = (int32_t)V0 >> 6;
		ZZ_CLOCKCYCLES(11,0x8001DBB4);
		goto ZZ_1D860_354;
	}
	S4 = (int32_t)V0 >> 6;
	V0 += 63;
	S4 = (int32_t)V0 >> 6;
	ZZ_CLOCKCYCLES(13,0x8001DBB4);
ZZ_1D860_354:
	V0 = 0x8;
	if (V1 == V0)
	{
		V1 = 0x2000000;
		ZZ_CLOCKCYCLES(3,0x8001DE0C);
		goto ZZ_1D860_5AC;
	}
	V1 = 0x2000000;
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 25616); //+ 0xFFFF9BF0
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2988); //+ 0xBAC
	A0 = EMU_ReadU32(S1 + 148); //+ 0x94
	V0 += V1;
	S3 = V0 & 0xFFF;
	S0 = S3 - A0;
	if ((int32_t)S0 >= 0)
	{
		EMU_Write32(S1 + 360,S3); //+ 0x168
		ZZ_CLOCKCYCLES(13,0x8001DBEC);
		goto ZZ_1D860_38C;
	}
	EMU_Write32(S1 + 360,S3); //+ 0x168
	S0 = A0 - S3;
	ZZ_CLOCKCYCLES(14,0x8001DBEC);
ZZ_1D860_38C:
	V0 = (int32_t)S0 < 2049;
	if (V0)
	{
		V0 = 0x1000;
		ZZ_CLOCKCYCLES(3,0x8001DBFC);
		goto ZZ_1D860_39C;
	}
	V0 = 0x1000;
	S0 = V0 - S0;
	ZZ_CLOCKCYCLES(4,0x8001DBFC);
ZZ_1D860_39C:
	V1 = EMU_ReadU32(S1 + 256); //+ 0x100
	V0 = V1 & 0x8;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001DCDC);
		goto ZZ_1D860_47C;
	}
	RA = 0x8001DC18; //ZZ_1D860_3B8
	A0 = S0;
	ZZ_CLOCKCYCLES(7,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_1D860_3B8:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 14056); //+ 0x36E8
	V1 = EMU_ReadU32(V1 + 20); //+ 0x14
	A0 = V0;
	V0 = V1 < 121;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001DC3C);
		goto ZZ_1D860_3DC;
	}
	V1 = 0x78;
	ZZ_CLOCKCYCLES(9,0x8001DC3C);
ZZ_1D860_3DC:
	V0 = EMU_ReadU32(S2);
	EMU_SMultiply(V0,V1);
	V0 = LO;
	if ((int32_t)V0 >= 0)
	{
		V1 = (int32_t)V0 >> 10;
		ZZ_CLOCKCYCLES(6,0x8001DC5C);
		goto ZZ_1D860_3FC;
	}
	V1 = (int32_t)V0 >> 10;
	V0 += 1023;
	V1 = (int32_t)V0 >> 10;
	ZZ_CLOCKCYCLES(8,0x8001DC5C);
ZZ_1D860_3FC:
	V0 = (int32_t)A0 >> 6;
	EMU_SMultiply(V1,V0);
	V0 = EMU_ReadU32(S1 + 260); //+ 0x104
	T0 = LO;
	V1 = (int32_t)T0 >> 6;
	V0 += V1;
	EMU_Write32(S1 + 260,V0); //+ 0x104
	V0 = (int32_t)V0 < 257;
	if (!V0)
	{
		V1 = 0x200000;
		ZZ_CLOCKCYCLES(10,0x8001DCA0);
		goto ZZ_1D860_440;
	}
	V1 = 0x200000;
	V0 = EMU_ReadU32(S1 + 256); //+ 0x100
	V0 &= V1;
	if (V0)
	{
		V0 = (int32_t)S0 < 1992;
		ZZ_CLOCKCYCLES(15,0x8001DCA4);
		goto ZZ_1D860_444;
	}
	V0 = (int32_t)S0 < 1992;
	EMU_Write32(S1 + 148,S3); //+ 0x94
	ZZ_CLOCKCYCLES(17,0x8001DDEC);
	goto ZZ_1D860_58C;
ZZ_1D860_440:
	V0 = (int32_t)S0 < 1992;
	ZZ_CLOCKCYCLES(1,0x8001DCA4);
ZZ_1D860_444:
	if (V0)
	{
		V1 = 0x200000;
		ZZ_CLOCKCYCLES(2,0x8001DCC0);
		goto ZZ_1D860_460;
	}
	V1 = 0x200000;
	V0 = EMU_ReadU32(S1 + 256); //+ 0x100
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x8001DD94);
		goto ZZ_1D860_534;
	}
	ZZ_CLOCKCYCLES(7,0x8001DCC0);
ZZ_1D860_460:
	A0 = EMU_ReadU32(S1 + 148); //+ 0x94
	A2 = EMU_ReadU32(S2 + 16); //+ 0x10
	A1 = S3;
	RA = 0x8001DCD4; //ZZ_1D860_474
	A3 = R0;
	ZZ_CLOCKCYCLES(5,0x8001E624);
	goto ZZ_1E624;
ZZ_1D860_474:
	EMU_Write32(S1 + 148,V0); //+ 0x94
	ZZ_CLOCKCYCLES(2,0x8001DDEC);
	goto ZZ_1D860_58C;
ZZ_1D860_47C:
	V0 = EMU_ReadU32(S1 + 260); //+ 0x104
	V0 = (int32_t)V0 < 257;
	if (V0)
	{
		V0 = 0x200000;
		ZZ_CLOCKCYCLES(5,0x8001DCFC);
		goto ZZ_1D860_49C;
	}
	V0 = 0x200000;
	V0 = (int32_t)S0 < 1025;
	if (!V0)
	{
		V0 = 0x200000;
		ZZ_CLOCKCYCLES(8,0x8001DD74);
		goto ZZ_1D860_514;
	}
	V0 = 0x200000;
	ZZ_CLOCKCYCLES(8,0x8001DCFC);
ZZ_1D860_49C:
	V0 &= V1;
	if (!V0)
	{
		A1 = S3;
		ZZ_CLOCKCYCLES(3,0x8001DD1C);
		goto ZZ_1D860_4BC;
	}
	A1 = S3;
	A2 = EMU_ReadU32(S2 + 16); //+ 0x10
	RA = 0x8001DD14; //ZZ_1D860_4B4
	A3 = R0;
	ZZ_CLOCKCYCLES(6,0x8001E624);
	goto ZZ_1E624;
ZZ_1D860_4B4:
	EMU_Write32(S1 + 148,V0); //+ 0x94
	ZZ_CLOCKCYCLES(2,0x8001DD20);
	goto ZZ_1D860_4C0;
ZZ_1D860_4BC:
	EMU_Write32(S1 + 148,S3); //+ 0x94
	ZZ_CLOCKCYCLES(1,0x8001DD20);
ZZ_1D860_4C0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14056); //+ 0x36E8
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = V1 < 121;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001DD44);
		goto ZZ_1D860_4E4;
	}
	V1 = 0x78;
	ZZ_CLOCKCYCLES(9,0x8001DD44);
ZZ_1D860_4E4:
	V0 = EMU_ReadU32(S2);
	EMU_SMultiply(V0,V1);
	V1 = LO;
	if ((int32_t)V1 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8001DD60);
		goto ZZ_1D860_500;
	}
	V1 += 1023;
	ZZ_CLOCKCYCLES(7,0x8001DD60);
ZZ_1D860_500:
	V0 = EMU_ReadU32(S1 + 260); //+ 0x104
	V1 = (int32_t)V1 >> 10;
	V0 += V1;
	EMU_Write32(S1 + 260,V0); //+ 0x104
	ZZ_CLOCKCYCLES(5,0x8001DDEC);
	goto ZZ_1D860_58C;
ZZ_1D860_514:
	V0 &= V1;
	if (V0)
	{
		V1 = 0x2000000;
		ZZ_CLOCKCYCLES(3,0x8001DD94);
		goto ZZ_1D860_534;
	}
	V1 = 0x2000000;
	V0 = EMU_ReadU32(S1 + 168); //+ 0xA8
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001DDE8);
		goto ZZ_1D860_588;
	}
	ZZ_CLOCKCYCLES(8,0x8001DD94);
ZZ_1D860_534:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14056); //+ 0x36E8
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = V1 < 121;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001DDB8);
		goto ZZ_1D860_558;
	}
	V1 = 0x78;
	ZZ_CLOCKCYCLES(9,0x8001DDB8);
ZZ_1D860_558:
	V0 = EMU_ReadU32(S2 + 12); //+ 0xC
	EMU_SMultiply(V0,V1);
	V1 = LO;
	if ((int32_t)V1 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8001DDD4);
		goto ZZ_1D860_574;
	}
	V1 += 1023;
	ZZ_CLOCKCYCLES(7,0x8001DDD4);
ZZ_1D860_574:
	V0 = EMU_ReadU32(S1 + 260); //+ 0x104
	V1 = (int32_t)V1 >> 10;
	V0 = V0 - V1;
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(S1 + 260,V0); //+ 0x104
		ZZ_CLOCKCYCLES(5,0x8001DDEC);
		goto ZZ_1D860_58C;
	}
	EMU_Write32(S1 + 260,V0); //+ 0x104
	ZZ_CLOCKCYCLES(5,0x8001DDE8);
ZZ_1D860_588:
	EMU_Write32(S1 + 260,R0); //+ 0x104
	ZZ_CLOCKCYCLES(1,0x8001DDEC);
ZZ_1D860_58C:
	V0 = EMU_ReadU32(S1 + 260); //+ 0x104
	V1 = EMU_ReadU32(S2 + 4); //+ 0x4
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001DE94);
		goto ZZ_1D860_634;
	}
	EMU_Write32(S1 + 260,V1); //+ 0x104
	ZZ_CLOCKCYCLES(8,0x8001DE94);
	goto ZZ_1D860_634;
ZZ_1D860_5AC:
	V0 = EMU_ReadU32(S1 + 168); //+ 0xA8
	V0 &= V1;
	if (V0)
	{
		V0 = 0xA00000;
		ZZ_CLOCKCYCLES(5,0x8001DE34);
		goto ZZ_1D860_5D4;
	}
	V0 = 0xA00000;
	V0 |= 0x8;
	V0 &= A0;
	V1 = 0x200000;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(10,0x8001DE3C);
		goto ZZ_1D860_5DC;
	}
	ZZ_CLOCKCYCLES(10,0x8001DE34);
ZZ_1D860_5D4:
	S4 = 0x100;
	ZZ_CLOCKCYCLES(2,0x8001DE94);
	goto ZZ_1D860_634;
ZZ_1D860_5DC:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14056); //+ 0x36E8
	V1 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = V1 < 121;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001DE60);
		goto ZZ_1D860_600;
	}
	V1 = 0x78;
	ZZ_CLOCKCYCLES(9,0x8001DE60);
ZZ_1D860_600:
	V0 = EMU_ReadU32(S2 + 12); //+ 0xC
	EMU_SMultiply(V0,V1);
	V1 = LO;
	if ((int32_t)V1 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8001DE7C);
		goto ZZ_1D860_61C;
	}
	V1 += 1023;
	ZZ_CLOCKCYCLES(7,0x8001DE7C);
ZZ_1D860_61C:
	V0 = EMU_ReadU32(S1 + 260); //+ 0x104
	V1 = (int32_t)V1 >> 10;
	V0 = V0 - V1;
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(S1 + 260,V0); //+ 0x104
		ZZ_CLOCKCYCLES(5,0x8001DE94);
		goto ZZ_1D860_634;
	}
	EMU_Write32(S1 + 260,V0); //+ 0x104
	EMU_Write32(S1 + 260,R0); //+ 0x104
	ZZ_CLOCKCYCLES(6,0x8001DE94);
ZZ_1D860_634:
	V0 = EMU_ReadU32(S1 + 260); //+ 0x104
	EMU_SMultiply(S4,V0);
	A0 = EMU_ReadU32(S1 + 148); //+ 0x94
	T0 = LO;
	RA = 0x8001DEB0; //ZZ_1D860_650
	S4 = (int32_t)T0 >> 8;
	ZZ_CLOCKCYCLES(7,0x8003D584);
	goto ZZ_3D584;
ZZ_1D860_650:
	V0 = (int32_t)V0 >> 4;
	EMU_SMultiply(V0,S4);
	A0 = EMU_ReadU32(S1 + 148); //+ 0x94
	T0 = LO;
	V0 = (int32_t)T0 >> 8;
	RA = 0x8001DECC; //ZZ_1D860_66C
	EMU_Write32(S1 + 132,V0); //+ 0x84
	ZZ_CLOCKCYCLES(7,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_1D860_66C:
	V0 = (int32_t)V0 >> 4;
	EMU_SMultiply(V0,S4);
	T0 = LO;
	V0 = (int32_t)T0 >> 8;
	EMU_Write32(S1 + 140,V0); //+ 0x8C
	ZZ_CLOCKCYCLES(5,0x8001DEE0);
ZZ_1D860_680:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 2524); //+ 0xFFFFF624
	if (S1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001DF40);
		goto ZZ_1D860_6E0;
	}
	A1 = 0x80060000;
	A1 -= 2260;
	V0 = EMU_ReadU32(S1 + 96); //+ 0x60
	V1 = EMU_ReadU32(S1 + 100); //+ 0x64
	A0 = EMU_ReadU32(S1 + 104); //+ 0x68
	EMU_Write32(A1,V0);
	EMU_Write32(A1 + 4,V1); //+ 0x4
	EMU_Write32(A1 + 8,A0); //+ 0x8
	A0 = 0x7;
	ZZ_CLOCKCYCLES(14,0x8001DF18);
ZZ_1D860_6B8:
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	V1 = A0 << 2;
	V1 += V0;
	V0 = EMU_ReadU32(V1 + 72); //+ 0x48
	A0 -= 1;
	if ((int32_t)A0 > 0)
	{
		EMU_Write32(V1 + 76,V0); //+ 0x4C
		ZZ_CLOCKCYCLES(7,0x8001DF18);
		goto ZZ_1D860_6B8;
	}
	EMU_Write32(V1 + 76,V0); //+ 0x4C
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	EMU_Write32(V0 + 76,S6); //+ 0x4C
	ZZ_CLOCKCYCLES(10,0x8001DF40);
ZZ_1D860_6E0:
	V1 = EMU_ReadU32(S1 + 168); //+ 0xA8
	V0 = V1 & 0x1;
	if (!V0)
	{
		V0 = 0xFACA0000;
		ZZ_CLOCKCYCLES(5,0x8001DF6C);
		goto ZZ_1D860_70C;
	}
	V0 = 0xFACA0000;
	V0 = EMU_ReadU32(S1 + 256); //+ 0x100
	V0 &= 0x8;
	if (V0)
	{
		V0 = 0xFACA0000;
		ZZ_CLOCKCYCLES(10,0x8001DF6C);
		goto ZZ_1D860_70C;
	}
	V0 = 0xFACA0000;
	V0 = 0xF8CA0000;
	ZZ_CLOCKCYCLES(11,0x8001DF6C);
ZZ_1D860_70C:
	V0 |= 0x207E;
	V0 &= V1;
	EMU_Write32(S1 + 168,V0); //+ 0xA8
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001DFA4);
		goto ZZ_1D860_744;
	}
	A0 = EMU_ReadU32(S1 + 112); //+ 0x70
	A1 = EMU_ReadU32(S1 + 148); //+ 0x94
	A2 = EMU_ReadU32(S1 + 144); //+ 0x90
	RA = 0x8001DFA0; //ZZ_1D860_740
	A3 = S1;
	ZZ_CLOCKCYCLES(13,0x8001E624);
	goto ZZ_1E624;
ZZ_1D860_740:
	EMU_Write32(S1 + 112,V0); //+ 0x70
	ZZ_CLOCKCYCLES(1,0x8001DFA4);
ZZ_1D860_744:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V1 = 0x80000;
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001DFD0);
		goto ZZ_1D860_770;
	}
	A0 = EMU_ReadU32(S1 + 112); //+ 0x70
	A1 = EMU_ReadU32(S1 + 148); //+ 0x94
	A2 = EMU_ReadU32(S1 + 144); //+ 0x90
	RA = 0x8001DFCC; //ZZ_1D860_76C
	A3 = S1;
	ZZ_CLOCKCYCLES(10,0x8001E78C);
	goto ZZ_1E78C;
ZZ_1D860_76C:
	EMU_Write32(S1 + 112,V0); //+ 0x70
	ZZ_CLOCKCYCLES(1,0x8001DFD0);
ZZ_1D860_770:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x2000;
	if (!V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(5,0x8001E000);
		goto ZZ_1D860_7A0;
	}
	A0 = S1;
	A0 = EMU_ReadU32(S1 + 108); //+ 0x6C
	A1 = EMU_ReadU32(S1 + 152); //+ 0x98
	A2 = EMU_ReadU32(S1 + 292); //+ 0x124
	RA = 0x8001DFF8; //ZZ_1D860_798
	A3 = R0;
	ZZ_CLOCKCYCLES(10,0x8001E624);
	goto ZZ_1E624;
ZZ_1D860_798:
	EMU_Write32(S1 + 108,V0); //+ 0x6C
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x8001E000);
ZZ_1D860_7A0:
	RA = 0x8001E008; //ZZ_1D860_7A8
	A1 = S1 + 120;
	ZZ_CLOCKCYCLES(2,0x8001A5DC);
	goto ZZ_1A5DC;
ZZ_1D860_7A8:
	A0 = S1;
	RA = 0x8001E014; //ZZ_1D860_7B4
	A1 = FP;
	ZZ_CLOCKCYCLES(3,0x8001ABB8);
	goto ZZ_1ABB8;
ZZ_1D860_7B4:
	V0 = EMU_ReadU32(S1 + 12); //+ 0xC
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 = EMU_ReadU32(V0);
	V0 = 0x5;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001E038);
		goto ZZ_1D860_7D8;
	}
	EMU_Write32(S1 + 88,R0); //+ 0x58
	ZZ_CLOCKCYCLES(9,0x8001E038);
ZZ_1D860_7D8:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x40;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001E36C);
		goto ZZ_1D860_B0C;
	}
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 14056); //+ 0x36E8
	V0 = EMU_ReadU32(S1 + 96); //+ 0x60
	V1 = EMU_ReadU32(S1 + 100); //+ 0x64
	A0 = EMU_ReadU32(S1 + 104); //+ 0x68
	EMU_Write32(SP + 40,V0); //+ 0x28
	EMU_Write32(SP + 44,V1); //+ 0x2C
	EMU_Write32(SP + 48,A0); //+ 0x30
	V1 = EMU_ReadU32(A2 + 20); //+ 0x14
	V0 = V1 < 121;
	if (V0)
	{
		ZZ_CLOCKCYCLES(18,0x8001E084);
		goto ZZ_1D860_824;
	}
	V1 = 0x78;
	ZZ_CLOCKCYCLES(19,0x8001E084);
ZZ_1D860_824:
	V0 = EMU_ReadU32(S1 + 132); //+ 0x84
	EMU_SMultiply(V0,V1);
	V0 = LO;
	if ((int32_t)V0 >= 0)
	{
		A0 = (int32_t)V0 >> 10;
		ZZ_CLOCKCYCLES(6,0x8001E0A4);
		goto ZZ_1D860_844;
	}
	A0 = (int32_t)V0 >> 10;
	V0 += 1023;
	A0 = (int32_t)V0 >> 10;
	ZZ_CLOCKCYCLES(8,0x8001E0A4);
ZZ_1D860_844:
	EMU_Write32(SP + 24,A0); //+ 0x18
	V1 = EMU_ReadU32(A2 + 20); //+ 0x14
	V0 = V1 < 121;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001E0C0);
		goto ZZ_1D860_860;
	}
	V1 = 0x78;
	ZZ_CLOCKCYCLES(7,0x8001E0C0);
ZZ_1D860_860:
	V0 = EMU_ReadU32(S1 + 136); //+ 0x88
	EMU_SMultiply(V0,V1);
	V0 = LO;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8001E0DC);
		goto ZZ_1D860_87C;
	}
	V0 += 1023;
	ZZ_CLOCKCYCLES(7,0x8001E0DC);
ZZ_1D860_87C:
	V0 = (int32_t)V0 >> 10;
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V1 = EMU_ReadU32(A2 + 20); //+ 0x14
	V0 = V1 < 121;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x8001E0FC);
		goto ZZ_1D860_89C;
	}
	V1 = 0x78;
	ZZ_CLOCKCYCLES(8,0x8001E0FC);
ZZ_1D860_89C:
	V0 = EMU_ReadU32(S1 + 140); //+ 0x8C
	EMU_SMultiply(V0,V1);
	V0 = LO;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8001E118);
		goto ZZ_1D860_8B8;
	}
	V0 += 1023;
	ZZ_CLOCKCYCLES(7,0x8001E118);
ZZ_1D860_8B8:
	V0 = (int32_t)V0 >> 10;
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x8;
	if (!V0)
	{
		V0 = 0xFF;
		ZZ_CLOCKCYCLES(7,0x8001E1DC);
		goto ZZ_1D860_97C;
	}
	V0 = 0xFF;
	EMU_Write32(S1 + 284,V0); //+ 0x11C
	V0 = 0x80060000;
	V0 -= 14420;
	AT = 0x1F800000;
	EMU_Write32(AT + 92,V0); //+ 0x5C
	RA = 0x8001E150; //ZZ_1D860_8F0
	ZZ_CLOCKCYCLES(14,0x8002CDCC);
	goto ZZ_2CDCC;
ZZ_1D860_8F0:
	A0 = S1;
	A2 = 0x80070000;
	A2 -= 32132;
	RA = 0x8001E164; //ZZ_1D860_904
	A1 = SP + 24;
	ZZ_CLOCKCYCLES(5,0x80029AF8);
	goto ZZ_29AF8;
ZZ_1D860_904:
	A0 = 0x2000000;
	V0 = S6 & A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001E194);
		goto ZZ_1D860_934;
	}
	V1 = EMU_ReadU32(S1 + 168); //+ 0xA8
	V0 = V1 & 0x1;
	if (V0)
	{
		V0 = S6 & 0x1;
		ZZ_CLOCKCYCLES(9,0x8001E194);
		goto ZZ_1D860_934;
	}
	V0 = S6 & 0x1;
	if (!V0)
	{
		V0 = V1 | A0;
		ZZ_CLOCKCYCLES(11,0x8001E194);
		goto ZZ_1D860_934;
	}
	V0 = V1 | A0;
	EMU_Write32(S1 + 168,V0); //+ 0xA8
	ZZ_CLOCKCYCLES(12,0x8001E194);
ZZ_1D860_934:
	V0 = EMU_ReadU32(S1 + 168); //+ 0xA8
	V1 = 0x40000;
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001E1CC);
		goto ZZ_1D860_96C;
	}
	V0 = EMU_ReadU32(S1 + 96); //+ 0x60
	AT = 0x80070000;
	EMU_Write32(AT - 12308,V0); //+ 0xFFFFCFEC
	V0 = EMU_ReadU32(S1 + 100); //+ 0x64
	AT = 0x80070000;
	EMU_Write32(AT - 12304,V0); //+ 0xFFFFCFF0
	V0 = EMU_ReadU32(S1 + 104); //+ 0x68
	AT = 0x80070000;
	EMU_Write32(AT - 12300,V0); //+ 0xFFFFCFF4
	ZZ_CLOCKCYCLES(14,0x8001E1CC);
ZZ_1D860_96C:
	RA = 0x8001E1D4; //ZZ_1D860_974
	ZZ_CLOCKCYCLES(2,0x8001A040);
	goto ZZ_1A040;
ZZ_1D860_974:
	ZZ_CLOCKCYCLES(2,0x8001E214);
	goto ZZ_1D860_9B4;
ZZ_1D860_97C:
	V0 = EMU_ReadU32(S1 + 96); //+ 0x60
	V0 += A0;
	EMU_Write32(S1 + 96,V0); //+ 0x60
	V0 = EMU_ReadU32(S1 + 100); //+ 0x64
	V1 = EMU_ReadU32(SP + 28); //+ 0x1C
	V0 += V1;
	EMU_Write32(S1 + 100,V0); //+ 0x64
	V0 = EMU_ReadU32(S1 + 104); //+ 0x68
	V1 = EMU_ReadU32(SP + 32); //+ 0x20
	V0 += V1;
	EMU_Write32(S1 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(14,0x8001E214);
ZZ_1D860_9B4:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x8000;
	if (!V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(5,0x8001E260);
		goto ZZ_1D860_A00;
	}
	A0 = S1;
	A1 = R0;
	RA = 0x8001E234; //ZZ_1D860_9D4
	A2 = SP + 56;
	ZZ_CLOCKCYCLES(8,0x8001F29C);
	goto ZZ_1F29C;
ZZ_1D860_9D4:
	V0 = EMU_ReadU32(S1 + 168); //+ 0xA8
	V1 = EMU_ReadU32(SP + 60); //+ 0x3C
	V0 &= 0x200;
	if (!V0)
	{
		EMU_Write32(S1 + 252,V1); //+ 0xFC
		ZZ_CLOCKCYCLES(5,0x8001E260);
		goto ZZ_1D860_A00;
	}
	EMU_Write32(S1 + 252,V1); //+ 0xFC
	V0 = EMU_ReadU32(SP + 40); //+ 0x28
	V1 = EMU_ReadU32(SP + 44); //+ 0x2C
	A0 = EMU_ReadU32(SP + 48); //+ 0x30
	EMU_Write32(S1 + 96,V0); //+ 0x60
	EMU_Write32(S1 + 100,V1); //+ 0x64
	EMU_Write32(S1 + 104,A0); //+ 0x68
	ZZ_CLOCKCYCLES(11,0x8001E260);
ZZ_1D860_A00:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x1000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001E314);
		goto ZZ_1D860_AB4;
	}
	A1 = EMU_ReadU32(S1 + 132); //+ 0x84
	V1 = EMU_ReadU32(S1 + 152); //+ 0x98
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = -V1;
		ZZ_CLOCKCYCLES(11,0x8001E294);
		goto ZZ_1D860_A34;
	}
	V0 = -V1;
	A0 = V1;
	ZZ_CLOCKCYCLES(13,0x8001E2A8);
	goto ZZ_1D860_A48;
ZZ_1D860_A34:
	A0 = V0;
	V0 = (int32_t)A1 < (int32_t)A0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001E2A8);
		goto ZZ_1D860_A48;
	}
	A0 = A1;
	ZZ_CLOCKCYCLES(5,0x8001E2A8);
ZZ_1D860_A48:
	A1 = EMU_ReadU32(S1 + 136); //+ 0x88
	V1 = EMU_ReadU32(S1 + 152); //+ 0x98
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		EMU_Write32(S1 + 132,A0); //+ 0x84
		ZZ_CLOCKCYCLES(6,0x8001E2C8);
		goto ZZ_1D860_A68;
	}
	EMU_Write32(S1 + 132,A0); //+ 0x84
	A0 = V1;
	ZZ_CLOCKCYCLES(8,0x8001E2E0);
	goto ZZ_1D860_A80;
ZZ_1D860_A68:
	V0 = -V1;
	A0 = V0;
	V0 = (int32_t)A1 < (int32_t)A0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001E2E0);
		goto ZZ_1D860_A80;
	}
	A0 = A1;
	ZZ_CLOCKCYCLES(6,0x8001E2E0);
ZZ_1D860_A80:
	A1 = EMU_ReadU32(S1 + 140); //+ 0x8C
	V1 = EMU_ReadU32(S1 + 152); //+ 0x98
	V0 = (int32_t)A1 < (int32_t)V1;
	if (!V0)
	{
		EMU_Write32(S1 + 136,A0); //+ 0x88
		ZZ_CLOCKCYCLES(6,0x8001E310);
		goto ZZ_1D860_AB0;
	}
	EMU_Write32(S1 + 136,A0); //+ 0x88
	V0 = -V1;
	V1 = V0;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(11,0x8001E310);
		goto ZZ_1D860_AB0;
	}
	V1 = A1;
	ZZ_CLOCKCYCLES(12,0x8001E310);
ZZ_1D860_AB0:
	EMU_Write32(S1 + 140,V1); //+ 0x8C
	ZZ_CLOCKCYCLES(1,0x8001E314);
ZZ_1D860_AB4:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x4000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001E36C);
		goto ZZ_1D860_B0C;
	}
	V0 = EMU_ReadU32(S1 + 100); //+ 0x64
	V1 = EMU_ReadU32(S1 + 252); //+ 0xFC
	V0 = (int32_t)V1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(11,0x8001E36C);
		goto ZZ_1D860_B0C;
	}
	V0 = EMU_ReadU32(S1 + 168); //+ 0xA8
	EMU_Write32(S1 + 100,V1); //+ 0x64
	V1 = EMU_ReadU32(S1 + 136); //+ 0x88
	V0 |= 0x1;
	EMU_Write32(S1 + 168,V0); //+ 0xA8
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12804); //+ 0xFFFFCDFC
	if ((int32_t)V1 >= 0)
	{
		EMU_Write32(S1 + 272,V0); //+ 0x110
		ZZ_CLOCKCYCLES(20,0x8001E36C);
		goto ZZ_1D860_B0C;
	}
	EMU_Write32(S1 + 272,V0); //+ 0x110
	EMU_Write32(S1 + 276,V1); //+ 0x114
	EMU_Write32(S1 + 136,R0); //+ 0x88
	ZZ_CLOCKCYCLES(22,0x8001E36C);
ZZ_1D860_B0C:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V1 = 0x200000;
	V0 &= V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001E4C0);
		goto ZZ_1D860_C60;
	}
	if (!S5)
	{
		V0 = S6 & 0x4000;
		ZZ_CLOCKCYCLES(7,0x8001E4C0);
		goto ZZ_1D860_C60;
	}
	V0 = S6 & 0x4000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x8001E4C0);
		goto ZZ_1D860_C60;
	}
	A0 = EMU_ReadU32(S1 + 96); //+ 0x60
	V0 = EMU_ReadU32(S7);
	A0 = A0 - V0;
	EMU_Write32(SP + 40,A0); //+ 0x28
	V0 = EMU_ReadU32(S1 + 100); //+ 0x64
	V1 = EMU_ReadU32(S7 + 4); //+ 0x4
	V0 = V0 - V1;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(S1 + 104); //+ 0x68
	V1 = EMU_ReadU32(S7 + 8); //+ 0x8
	V0 = V0 - V1;
	EMU_Write32(SP + 48,V0); //+ 0x30
	V0 = EMU_ReadU32(S5 + 96); //+ 0x60
	V0 += A0;
	EMU_Write32(S5 + 96,V0); //+ 0x60
	V0 = EMU_ReadU32(S5 + 100); //+ 0x64
	V1 = EMU_ReadU32(SP + 44); //+ 0x2C
	V0 += V1;
	EMU_Write32(S5 + 100,V0); //+ 0x64
	V0 = EMU_ReadU32(S5 + 104); //+ 0x68
	V1 = EMU_ReadU32(SP + 48); //+ 0x30
	V0 += V1;
	EMU_Write32(S5 + 104,V0); //+ 0x68
	V0 = EMU_ReadU32(S5 + 96); //+ 0x60
	V1 = EMU_ReadU32(S1 + 96); //+ 0x60
	V0 = V0 - V1;
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = EMU_ReadU32(S5 + 100); //+ 0x64
	V1 = EMU_ReadU32(S1 + 100); //+ 0x64
	V0 = V0 - V1;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(S5 + 104); //+ 0x68
	V1 = EMU_ReadU32(S1 + 104); //+ 0x68
	V0 = V0 - V1;
	EMU_Write32(SP + 48,V0); //+ 0x30
	A0 = EMU_ReadU32(S1 + 108); //+ 0x6C
	V0 = EMU_ReadU32(S7 + 12); //+ 0xC
	A0 = A0 - V0;
	A0 <<= 20;
	A0 = (int32_t)A0 >> 20;
	EMU_Write32(SP + 72,A0); //+ 0x48
	V0 = EMU_ReadU32(S1 + 112); //+ 0x70
	V1 = EMU_ReadU32(S7 + 16); //+ 0x10
	V0 = V0 - V1;
	V0 <<= 20;
	V1 = (int32_t)V0 >> 20;
	EMU_Write32(SP + 76,V1); //+ 0x4C
	V0 = EMU_ReadU32(S1 + 116); //+ 0x74
	EMU_Write32(SP + 80,V0); //+ 0x50
	if (A0)
	{
		V0 = S5 + 96;
		ZZ_CLOCKCYCLES(72,0x8001E494);
		goto ZZ_1D860_C34;
	}
	V0 = S5 + 96;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(74,0x8001E4C0);
		goto ZZ_1D860_C60;
	}
	ZZ_CLOCKCYCLES(74,0x8001E494);
ZZ_1D860_C34:
	A0 = SP + 40;
	A1 = S1 + 96;
	A2 = SP + 72;
	A3 = R0;
	RA = 0x8001E4AC; //ZZ_1D860_C4C
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(6,0x8001EB2C);
	goto ZZ_1EB2C;
ZZ_1D860_C4C:
	V0 = EMU_ReadU32(S5 + 148); //+ 0x94
	V1 = EMU_ReadU32(SP + 76); //+ 0x4C
	V0 += V1;
	EMU_Write32(S5 + 148,V0); //+ 0x94
	ZZ_CLOCKCYCLES(5,0x8001E4C0);
ZZ_1D860_C60:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x20;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001E52C);
		goto ZZ_1D860_CCC;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 14056); //+ 0x36E8
	A0 = EMU_ReadU32(V0 + 20); //+ 0x14
	V0 = A0 < 121;
	if (V0)
	{
		A1 = 0xFFD10000;
		ZZ_CLOCKCYCLES(13,0x8001E4F8);
		goto ZZ_1D860_C98;
	}
	A1 = 0xFFD10000;
	A0 = 0x78;
	ZZ_CLOCKCYCLES(14,0x8001E4F8);
ZZ_1D860_C98:
	A1 |= 0x2000;
	V0 = A0 << 5;
	V0 = V0 - A0;
	V1 = EMU_ReadU32(S1 + 136); //+ 0x88
	V0 <<= 2;
	V0 += A0;
	V0 <<= 5;
	V1 = V1 - V0;
	EMU_Write32(S1 + 136,V1); //+ 0x88
	V1 = (int32_t)V1 < (int32_t)A1;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(12,0x8001E52C);
		goto ZZ_1D860_CCC;
	}
	EMU_Write32(S1 + 136,A1); //+ 0x88
	ZZ_CLOCKCYCLES(13,0x8001E52C);
ZZ_1D860_CCC:
	V0 = EMU_ReadU32(S1 + 172); //+ 0xAC
	V0 &= 0x10;
	if (!V0)
	{
		V1 = 0xA0000;
		ZZ_CLOCKCYCLES(5,0x8001E5F0);
		goto ZZ_1D860_D90;
	}
	V1 = 0xA0000;
	V1 |= 0xF000;
	V0 = 0x70000;
	V0 |= 0xD000;
	A0 = S1;
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 - 2524); //+ 0xFFFFF624
	A1 = S1 + 96;
	A3 = 0x70000;
	A3 |= 0xD000;
	EMU_Write32(SP + 16,V1); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	RA = 0x8001E574; //ZZ_1D860_D14
	A2 += 96;
	ZZ_CLOCKCYCLES(18,0x800313F8);
	goto ZZ_313F8;
ZZ_1D860_D14:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8001E5F0);
		goto ZZ_1D860_D90;
	}
	V0 = EMU_ReadU32(S1 + 232); //+ 0xE8
	if (!V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(6,0x8001E5E4);
		goto ZZ_1D860_D84;
	}
	A0 = S1;
	V1 = EMU_ReadU8(V0);
	V0 = 0x1;
	if (V1 != V0)
	{
		A1 = 0x1;
		ZZ_CLOCKCYCLES(10,0x8001E5E8);
		goto ZZ_1D860_D88;
	}
	A1 = 0x1;
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = EMU_ReadU32(V0 + 32); //+ 0x20
	S2 = EMU_ReadU32(V0 + 12); //+ 0xC
	if ((int32_t)S2 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(18,0x8001E5F0);
		goto ZZ_1D860_D90;
	}
	S0 = R0;
	A0 = S1;
	ZZ_CLOCKCYCLES(19,0x8001E5C0);
ZZ_1D860_D60:
	A1 = 0x1;
	RA = 0x8001E5CC; //ZZ_1D860_D6C
	A2 = S0;
	ZZ_CLOCKCYCLES(3,0x8002C638);
	goto ZZ_2C638;
ZZ_1D860_D6C:
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)S2;
	if (V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(4,0x8001E5C0);
		goto ZZ_1D860_D60;
	}
	A0 = S1;
	ZZ_CLOCKCYCLES(6,0x8001E5F0);
	goto ZZ_1D860_D90;
ZZ_1D860_D84:
	A1 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8001E5E8);
ZZ_1D860_D88:
	RA = 0x8001E5F0; //ZZ_1D860_D90
	A2 = -1;
	ZZ_CLOCKCYCLES(2,0x8002C638);
	goto ZZ_2C638;
ZZ_1D860_D90:
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
	ZZ_JUMPREGISTER(0x8001CB24,ZZ_1C850_2D4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001D860,0x8001D900,ZZ_1D860);
ZZ_MARK_TARGET(0x8001D900,0x8001D934,ZZ_1D860_A0);
ZZ_MARK_TARGET(0x8001D934,0x8001D93C,ZZ_1D860_D4);
ZZ_MARK_TARGET(0x8001D93C,0x8001D9AC,ZZ_1D860_DC);
ZZ_MARK_TARGET(0x8001D9AC,0x8001D9DC,ZZ_1D860_14C);
ZZ_MARK_TARGET(0x8001D9DC,0x8001DA10,ZZ_1D860_17C);
ZZ_MARK_TARGET(0x8001DA10,0x8001DA44,ZZ_1D860_1B0);
ZZ_MARK_TARGET(0x8001DA44,0x8001DA4C,ZZ_1D860_1E4);
ZZ_MARK_TARGET(0x8001DA4C,0x8001DA9C,ZZ_1D860_1EC);
ZZ_MARK_TARGET(0x8001DA9C,0x8001DAB0,ZZ_1D860_23C);
ZZ_MARK_TARGET(0x8001DAB0,0x8001DAC4,ZZ_1D860_250);
ZZ_MARK_TARGET(0x8001DAC4,0x8001DAE0,ZZ_1D860_264);
ZZ_MARK_TARGET(0x8001DAE0,0x8001DAF8,ZZ_1D860_280);
ZZ_MARK_TARGET(0x8001DAF8,0x8001DB10,ZZ_1D860_298);
ZZ_MARK_TARGET(0x8001DB10,0x8001DB48,ZZ_1D860_2B0);
ZZ_MARK_TARGET(0x8001DB48,0x8001DB64,ZZ_1D860_2E8);
ZZ_MARK_TARGET(0x8001DB64,0x8001DB80,ZZ_1D860_304);
ZZ_MARK_TARGET(0x8001DB80,0x8001DBB4,ZZ_1D860_320);
ZZ_MARK_TARGET(0x8001DBB4,0x8001DBEC,ZZ_1D860_354);
ZZ_MARK_TARGET(0x8001DBEC,0x8001DBFC,ZZ_1D860_38C);
ZZ_MARK_TARGET(0x8001DBFC,0x8001DC18,ZZ_1D860_39C);
ZZ_MARK_TARGET(0x8001DC18,0x8001DC3C,ZZ_1D860_3B8);
ZZ_MARK_TARGET(0x8001DC3C,0x8001DC5C,ZZ_1D860_3DC);
ZZ_MARK_TARGET(0x8001DC5C,0x8001DCA0,ZZ_1D860_3FC);
ZZ_MARK_TARGET(0x8001DCA0,0x8001DCA4,ZZ_1D860_440);
ZZ_MARK_TARGET(0x8001DCA4,0x8001DCC0,ZZ_1D860_444);
ZZ_MARK_TARGET(0x8001DCC0,0x8001DCD4,ZZ_1D860_460);
ZZ_MARK_TARGET(0x8001DCD4,0x8001DCDC,ZZ_1D860_474);
ZZ_MARK_TARGET(0x8001DCDC,0x8001DCFC,ZZ_1D860_47C);
ZZ_MARK_TARGET(0x8001DCFC,0x8001DD14,ZZ_1D860_49C);
ZZ_MARK_TARGET(0x8001DD14,0x8001DD1C,ZZ_1D860_4B4);
ZZ_MARK_TARGET(0x8001DD1C,0x8001DD20,ZZ_1D860_4BC);
ZZ_MARK_TARGET(0x8001DD20,0x8001DD44,ZZ_1D860_4C0);
ZZ_MARK_TARGET(0x8001DD44,0x8001DD60,ZZ_1D860_4E4);
ZZ_MARK_TARGET(0x8001DD60,0x8001DD74,ZZ_1D860_500);
ZZ_MARK_TARGET(0x8001DD74,0x8001DD94,ZZ_1D860_514);
ZZ_MARK_TARGET(0x8001DD94,0x8001DDB8,ZZ_1D860_534);
ZZ_MARK_TARGET(0x8001DDB8,0x8001DDD4,ZZ_1D860_558);
ZZ_MARK_TARGET(0x8001DDD4,0x8001DDE8,ZZ_1D860_574);
ZZ_MARK_TARGET(0x8001DDE8,0x8001DDEC,ZZ_1D860_588);
ZZ_MARK_TARGET(0x8001DDEC,0x8001DE0C,ZZ_1D860_58C);
ZZ_MARK_TARGET(0x8001DE0C,0x8001DE34,ZZ_1D860_5AC);
ZZ_MARK_TARGET(0x8001DE34,0x8001DE3C,ZZ_1D860_5D4);
ZZ_MARK_TARGET(0x8001DE3C,0x8001DE60,ZZ_1D860_5DC);
ZZ_MARK_TARGET(0x8001DE60,0x8001DE7C,ZZ_1D860_600);
ZZ_MARK_TARGET(0x8001DE7C,0x8001DE94,ZZ_1D860_61C);
ZZ_MARK_TARGET(0x8001DE94,0x8001DEB0,ZZ_1D860_634);
ZZ_MARK_TARGET(0x8001DEB0,0x8001DECC,ZZ_1D860_650);
ZZ_MARK_TARGET(0x8001DECC,0x8001DEE0,ZZ_1D860_66C);
ZZ_MARK_TARGET(0x8001DEE0,0x8001DF18,ZZ_1D860_680);
ZZ_MARK_TARGET(0x8001DF18,0x8001DF40,ZZ_1D860_6B8);
ZZ_MARK_TARGET(0x8001DF40,0x8001DF6C,ZZ_1D860_6E0);
ZZ_MARK_TARGET(0x8001DF6C,0x8001DFA0,ZZ_1D860_70C);
ZZ_MARK_TARGET(0x8001DFA0,0x8001DFA4,ZZ_1D860_740);
ZZ_MARK_TARGET(0x8001DFA4,0x8001DFCC,ZZ_1D860_744);
ZZ_MARK_TARGET(0x8001DFCC,0x8001DFD0,ZZ_1D860_76C);
ZZ_MARK_TARGET(0x8001DFD0,0x8001DFF8,ZZ_1D860_770);
ZZ_MARK_TARGET(0x8001DFF8,0x8001E000,ZZ_1D860_798);
ZZ_MARK_TARGET(0x8001E000,0x8001E008,ZZ_1D860_7A0);
ZZ_MARK_TARGET(0x8001E008,0x8001E014,ZZ_1D860_7A8);
ZZ_MARK_TARGET(0x8001E014,0x8001E038,ZZ_1D860_7B4);
ZZ_MARK_TARGET(0x8001E038,0x8001E084,ZZ_1D860_7D8);
ZZ_MARK_TARGET(0x8001E084,0x8001E0A4,ZZ_1D860_824);
ZZ_MARK_TARGET(0x8001E0A4,0x8001E0C0,ZZ_1D860_844);
ZZ_MARK_TARGET(0x8001E0C0,0x8001E0DC,ZZ_1D860_860);
ZZ_MARK_TARGET(0x8001E0DC,0x8001E0FC,ZZ_1D860_87C);
ZZ_MARK_TARGET(0x8001E0FC,0x8001E118,ZZ_1D860_89C);
ZZ_MARK_TARGET(0x8001E118,0x8001E150,ZZ_1D860_8B8);
ZZ_MARK_TARGET(0x8001E150,0x8001E164,ZZ_1D860_8F0);
ZZ_MARK_TARGET(0x8001E164,0x8001E194,ZZ_1D860_904);
ZZ_MARK_TARGET(0x8001E194,0x8001E1CC,ZZ_1D860_934);
ZZ_MARK_TARGET(0x8001E1CC,0x8001E1D4,ZZ_1D860_96C);
ZZ_MARK_TARGET(0x8001E1D4,0x8001E1DC,ZZ_1D860_974);
ZZ_MARK_TARGET(0x8001E1DC,0x8001E214,ZZ_1D860_97C);
ZZ_MARK_TARGET(0x8001E214,0x8001E234,ZZ_1D860_9B4);
ZZ_MARK_TARGET(0x8001E234,0x8001E260,ZZ_1D860_9D4);
ZZ_MARK_TARGET(0x8001E260,0x8001E294,ZZ_1D860_A00);
ZZ_MARK_TARGET(0x8001E294,0x8001E2A8,ZZ_1D860_A34);
ZZ_MARK_TARGET(0x8001E2A8,0x8001E2C8,ZZ_1D860_A48);
ZZ_MARK_TARGET(0x8001E2C8,0x8001E2E0,ZZ_1D860_A68);
ZZ_MARK_TARGET(0x8001E2E0,0x8001E310,ZZ_1D860_A80);
ZZ_MARK_TARGET(0x8001E310,0x8001E314,ZZ_1D860_AB0);
ZZ_MARK_TARGET(0x8001E314,0x8001E36C,ZZ_1D860_AB4);
ZZ_MARK_TARGET(0x8001E36C,0x8001E494,ZZ_1D860_B0C);
ZZ_MARK_TARGET(0x8001E494,0x8001E4AC,ZZ_1D860_C34);
ZZ_MARK_TARGET(0x8001E4AC,0x8001E4C0,ZZ_1D860_C4C);
ZZ_MARK_TARGET(0x8001E4C0,0x8001E4F8,ZZ_1D860_C60);
ZZ_MARK_TARGET(0x8001E4F8,0x8001E52C,ZZ_1D860_C98);
ZZ_MARK_TARGET(0x8001E52C,0x8001E574,ZZ_1D860_CCC);
ZZ_MARK_TARGET(0x8001E574,0x8001E5C0,ZZ_1D860_D14);
ZZ_MARK_TARGET(0x8001E5C0,0x8001E5CC,ZZ_1D860_D60);
ZZ_MARK_TARGET(0x8001E5CC,0x8001E5E4,ZZ_1D860_D6C);
ZZ_MARK_TARGET(0x8001E5E4,0x8001E5E8,ZZ_1D860_D84);
ZZ_MARK_TARGET(0x8001E5E8,0x8001E5F0,ZZ_1D860_D88);
ZZ_MARK_TARGET(0x8001E5F0,0x8001E624,ZZ_1D860_D90);
