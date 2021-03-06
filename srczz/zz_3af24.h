#ifdef ZZ_INCLUDE_CODE
ZZ_3AF24:
	T0 = EMU_ReadU32(GP + 360); //+ 0x168
	SP -= 752;
	EMU_Write32(SP + 740,S7); //+ 0x2E4
	S7 = R0;
	EMU_Write32(SP + 748,RA); //+ 0x2EC
	EMU_Write32(SP + 744,FP); //+ 0x2E8
	EMU_Write32(SP + 736,S6); //+ 0x2E0
	EMU_Write32(SP + 732,S5); //+ 0x2DC
	EMU_Write32(SP + 728,S4); //+ 0x2D8
	EMU_Write32(SP + 724,S3); //+ 0x2D4
	EMU_Write32(SP + 720,S2); //+ 0x2D0
	EMU_Write32(SP + 716,S1); //+ 0x2CC
	EMU_Write32(SP + 712,S0); //+ 0x2C8
	S3 = EMU_ReadU32(T0 + 8); //+ 0x8
	V0 = SP + 616;
	EMU_Write32(SP + 600,V0); //+ 0x258
	A3 = EMU_ReadU32(T0 + 36); //+ 0x24
	V0 = EMU_ReadU32(T0 + 32); //+ 0x20
	V1 = -1;
	V0 = (int32_t)A3 < (int32_t)V0;
	if (V0)
	{
		EMU_Write32(SP + 616,V1); //+ 0x268
		ZZ_CLOCKCYCLES(22,0x8003AF94);
		goto ZZ_3AF24_70;
	}
	EMU_Write32(SP + 616,V1); //+ 0x268
	RA = 0x8003AF84; //ZZ_3AF24_60
	A0 = 0x2;
	ZZ_CLOCKCYCLES(24,0x8003CAD8);
	goto ZZ_3CAD8;
ZZ_3AF24_60:
	RA = 0x8003AF8C; //ZZ_3AF24_68
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3AF24_68:
	ZZ_CLOCKCYCLES(2,0x8003B5AC);
	goto ZZ_3AF24_688;
ZZ_3AF24_70:
	A0 = SP + 24;
	A1 = 0x80050000;
	A1 += 25980;
	A2 = 0x80050000;
	A2 += 25972;
	S2 = A3;
	A3 = S2 << 2;
	A3 += S2;
	A3 <<= 3;
	A3 += 1180;
	RA = 0x8003AFC4; //ZZ_3AF24_A0
	A3 += T0;
	ZZ_CLOCKCYCLES(12,0x8003D740);
	goto ZZ_3D740;
ZZ_3AF24_A0:
	S0 = R0;
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(2,0x8003AFCC);
ZZ_3AF24_A8:
	RA = 0x8003AFD4; //ZZ_3AF24_B0
	A1 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8003E218);
	goto ZZ_3E218;
ZZ_3AF24_B0:
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(SP + 616,V0); //+ 0x268
		ZZ_CLOCKCYCLES(2,0x8003AFEC);
		goto ZZ_3AF24_C8;
	}
	EMU_Write32(SP + 616,V0); //+ 0x268
	S0 += 1;
	V0 = (int32_t)S0 < 3;
	if (V0)
	{
		A0 = SP + 24;
		ZZ_CLOCKCYCLES(6,0x8003AFCC);
		goto ZZ_3AF24_A8;
	}
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(6,0x8003AFEC);
ZZ_3AF24_C8:
	V0 = (int32_t)S0 < 3;
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(3,0x8003B004);
		goto ZZ_3AF24_E0;
	}
	V0 = R0;
	RA = 0x8003B000; //ZZ_3AF24_DC
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(5,0x8003ADB8);
	goto ZZ_3ADB8;
ZZ_3AF24_DC:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003B004);
ZZ_3AF24_E0:
	if (V0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003B5AC);
		goto ZZ_3AF24_688;
	}
	S0 = R0;
	S1 = 0x80;
	ZZ_CLOCKCYCLES(3,0x8003B010);
ZZ_3AF24_EC:
	A0 = EMU_ReadU32(SP + 616); //+ 0x268
	A1 = SP + 472;
	RA = 0x8003B020; //ZZ_3AF24_FC
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x8003E228);
	goto ZZ_3E228;
ZZ_3AF24_FC:
	if (V0 == S1)
	{
		V0 = (int32_t)S0 < 3;
		ZZ_CLOCKCYCLES(2,0x8003B038);
		goto ZZ_3AF24_114;
	}
	V0 = (int32_t)S0 < 3;
	S0 += 1;
	V0 = (int32_t)S0 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8003B010);
		goto ZZ_3AF24_EC;
	}
	ZZ_CLOCKCYCLES(6,0x8003B038);
ZZ_3AF24_114:
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003B04C);
		goto ZZ_3AF24_128;
	}
	V0 = R0;
	RA = 0x8003B048; //ZZ_3AF24_124
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(4,0x8003ADB8);
	goto ZZ_3ADB8;
ZZ_3AF24_124:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003B04C);
ZZ_3AF24_128:
	if (V0)
	{
		A0 = S2 << 2;
		ZZ_CLOCKCYCLES(2,0x8003B5AC);
		goto ZZ_3AF24_688;
	}
	A0 = S2 << 2;
	A0 += S2;
	A0 <<= 3;
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	A0 += 1180;
	RA = 0x8003B06C; //ZZ_3AF24_148
	A0 += V0;
	ZZ_CLOCKCYCLES(8,0x8003C6E4);
	goto ZZ_3C6E4;
ZZ_3AF24_148:
	if (!V0)
	{
		V0 = S3 << 2;
		ZZ_CLOCKCYCLES(2,0x8003B098);
		goto ZZ_3AF24_174;
	}
	V0 = S3 << 2;
	V0 += S3;
	V0 <<= 2;
	V0 = V0 - S3;
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 <<= 2;
	V1 += V0;
	V0 = 0x1;
	EMU_Write32(V1 + 40,V0); //+ 0x28
	ZZ_CLOCKCYCLES(11,0x8003B0B4);
	goto ZZ_3AF24_190;
ZZ_3AF24_174:
	V0 += S3;
	V0 <<= 2;
	V0 = V0 - S3;
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 <<= 2;
	V1 += V0;
	EMU_Write32(V1 + 40,R0); //+ 0x28
	ZZ_CLOCKCYCLES(7,0x8003B0B4);
ZZ_3AF24_190:
	V0 = S3 << 2;
	V0 += S3;
	V0 <<= 2;
	V0 = V0 - S3;
	S0 = V0 << 2;
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 = EMU_ReadU8(SP + 474); //+ 0x1DA
	A0 = V1 + S0;
	V1 = V0 - 16;
	V0 -= 17;
	V0 = V0 < 3;
	if (V0)
	{
		EMU_Write32(A0 + 44,V1); //+ 0x2C
		ZZ_CLOCKCYCLES(13,0x8003B0F4);
		goto ZZ_3AF24_1D0;
	}
	EMU_Write32(A0 + 44,V1); //+ 0x2C
	V0 = 0x1;
	EMU_Write32(A0 + 44,V0); //+ 0x2C
	S7 = 0x1;
	ZZ_CLOCKCYCLES(16,0x8003B0F4);
ZZ_3AF24_1D0:
	if (S7)
	{
		V0 = S0 + 40;
		ZZ_CLOCKCYCLES(2,0x8003B148);
		goto ZZ_3AF24_224;
	}
	V0 = S0 + 40;
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 += S0;
	EMU_Write8(V0 + 52,R0); //+ 0x34
	V0 = EMU_ReadU8(SP + 476); //+ 0x1DC
	V0 = V0 < 128;
	if (V0)
	{
		ZZ_CLOCKCYCLES(11,0x8003B128);
		goto ZZ_3AF24_204;
	}
	RA = 0x8003B128; //ZZ_3AF24_204
	A0 = SP + 472;
	ZZ_CLOCKCYCLES(13,0x8003B5E0);
	goto ZZ_3B5E0;
ZZ_3AF24_204:
	A0 = EMU_ReadU32(GP + 360); //+ 0x168
	A1 = SP + 476;
	EMU_Write8(SP + 507,R0); //+ 0x1FB
	A0 += S0;
	RA = 0x8003B140; //ZZ_3AF24_21C
	A0 += 52;
	ZZ_CLOCKCYCLES(6,0x8003D6D0);
	goto ZZ_3D6D0;
ZZ_3AF24_21C:
	A0 = S3 << 2;
	ZZ_CLOCKCYCLES(2,0x8003B184);
	goto ZZ_3AF24_260;
ZZ_3AF24_224:
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 += V1;
	A2 = 0x80010000;
	A2 += 3672;
	V1 = EMU_ReadU32(A2);
	A0 = EMU_ReadU32(A2 + 4); //+ 0x4
	A1 = EMU_ReadU32(A2 + 8); //+ 0x8
	EMU_Write32(V0 + 12,V1); //+ 0xC
	EMU_Write32(V0 + 16,A0); //+ 0x10
	EMU_Write32(V0 + 20,A1); //+ 0x14
	V1 = EMU_ReadS8(A2 + 12); //+ 0xC
	EMU_Write8(V0 + 24,V1); //+ 0x18
	A0 = S3 << 2;
	ZZ_CLOCKCYCLES(15,0x8003B184);
ZZ_3AF24_260:
	A0 += S3;
	A0 <<= 2;
	A0 = A0 - S3;
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	A0 <<= 2;
	A0 += V0;
	RA = 0x8003B1A4; //ZZ_3AF24_280
	A0 += 52;
	ZZ_CLOCKCYCLES(8,0x8003C970);
	goto ZZ_3C970;
ZZ_3AF24_280:
	if (S7)
	{
		S6 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8003B1B0);
		goto ZZ_3AF24_28C;
	}
	S6 = 0x1;
	S6 = EMU_ReadU8(SP + 475); //+ 0x1DB
	ZZ_CLOCKCYCLES(3,0x8003B1B0);
ZZ_3AF24_28C:
	V0 = S3 << 2;
	V0 += S3;
	V0 <<= 2;
	V0 = V0 - S3;
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 <<= 2;
	V1 += V0;
	if (S7)
	{
		EMU_Write32(V1 + 48,S2); //+ 0x30
		ZZ_CLOCKCYCLES(9,0x8003B268);
		goto ZZ_3AF24_344;
	}
	EMU_Write32(V1 + 48,S2); //+ 0x30
	V0 = EMU_ReadU32(V1 + 44); //+ 0x2C
	V0 = (int32_t)S7 < (int32_t)V0;
	if (!V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(14,0x8003B268);
		goto ZZ_3AF24_344;
	}
	S1 = R0;
	S4 = SP + 88;
	S5 = 0x80;
	S0 = R0;
	ZZ_CLOCKCYCLES(17,0x8003B1F4);
ZZ_3AF24_2D0:
	S2 = S1 << 7;
	ZZ_CLOCKCYCLES(1,0x8003B1F8);
ZZ_3AF24_2D4:
	A0 = EMU_ReadU32(SP + 616); //+ 0x268
	A1 = S4 + S2;
	RA = 0x8003B208; //ZZ_3AF24_2E4
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x8003E228);
	goto ZZ_3E228;
ZZ_3AF24_2E4:
	if (V0 == S5)
	{
		V0 = (int32_t)S0 < 3;
		ZZ_CLOCKCYCLES(2,0x8003B220);
		goto ZZ_3AF24_2FC;
	}
	V0 = (int32_t)S0 < 3;
	S0 += 1;
	V0 = (int32_t)S0 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8003B1F8);
		goto ZZ_3AF24_2D4;
	}
	ZZ_CLOCKCYCLES(6,0x8003B220);
ZZ_3AF24_2FC:
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003B234);
		goto ZZ_3AF24_310;
	}
	V0 = R0;
	RA = 0x8003B230; //ZZ_3AF24_30C
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(4,0x8003ADB8);
	goto ZZ_3ADB8;
ZZ_3AF24_30C:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003B234);
ZZ_3AF24_310:
	if (V0)
	{
		V0 = S3 << 2;
		ZZ_CLOCKCYCLES(2,0x8003B5AC);
		goto ZZ_3AF24_688;
	}
	V0 = S3 << 2;
	V0 += S3;
	V0 <<= 2;
	V0 = V0 - S3;
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 <<= 2;
	V1 += V0;
	V0 = EMU_ReadU32(V1 + 44); //+ 0x2C
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(13,0x8003B1F4);
		goto ZZ_3AF24_2D0;
	}
	S0 = R0;
	ZZ_CLOCKCYCLES(13,0x8003B268);
ZZ_3AF24_344:
	if (!S6)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(2,0x8003B2F4);
		goto ZZ_3AF24_3D0;
	}
	S1 = R0;
	S0 = SP + 624;
	S4 = 0x80060000;
	S4 += 6604;
	V0 = S3 << 2;
	V0 += S3;
	V0 <<= 2;
	V0 = V0 - S3;
	V0 <<= 2;
	S2 = V0 + 40;
	A0 = S0;
	ZZ_CLOCKCYCLES(12,0x8003B298);
ZZ_3AF24_374:
	A1 = 0x80010000;
	A1 += 3688;
	A2 = S1 + 1;
	RA = 0x8003B2AC; //ZZ_3AF24_388
	A3 = S6;
	ZZ_CLOCKCYCLES(5,0x8003D740);
	goto ZZ_3D740;
ZZ_3AF24_388:
	V0 = S3 + S1;
	if (S1)
	{
		A1 = V0 << 8;
		ZZ_CLOCKCYCLES(3,0x8003B2CC);
		goto ZZ_3AF24_3A8;
	}
	A1 = V0 << 8;
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 += S2;
	A2 = V0 + 12;
	ZZ_CLOCKCYCLES(8,0x8003B2D0);
	goto ZZ_3AF24_3AC;
ZZ_3AF24_3A8:
	A2 = S0;
	ZZ_CLOCKCYCLES(1,0x8003B2D0);
ZZ_3AF24_3AC:
	A3 = 0x28;
	S1 += 1;
	A0 = EMU_ReadU32(S4);
	V0 = 0x1;
	RA = 0x8003B2E8; //ZZ_3AF24_3C4
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(6,0x8001A754);
	goto ZZ_1A754;
ZZ_3AF24_3C4:
	V0 = (int32_t)S1 < (int32_t)S6;
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(3,0x8003B298);
		goto ZZ_3AF24_374;
	}
	A0 = S0;
	ZZ_CLOCKCYCLES(3,0x8003B2F4);
ZZ_3AF24_3D0:
	if (S7)
	{
		V0 = (int32_t)S7 < (int32_t)S6;
		ZZ_CLOCKCYCLES(2,0x8003B39C);
		goto ZZ_3AF24_478;
	}
	V0 = (int32_t)S7 < (int32_t)S6;
	if (!V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(4,0x8003B39C);
		goto ZZ_3AF24_478;
	}
	S1 = R0;
	V0 = S3 << 2;
	V0 += S3;
	V0 <<= 2;
	FP = V0 - S3;
	ZZ_CLOCKCYCLES(8,0x8003B314);
ZZ_3AF24_3F0:
	S0 = R0;
	S4 = FP << 2;
	S5 = 0x80060000;
	S5 += 6608;
	S2 = S3 + S1;
	ZZ_CLOCKCYCLES(5,0x8003B328);
ZZ_3AF24_404:
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 += S4;
	V0 = EMU_ReadU32(V0 + 44); //+ 0x2C
	A3 = R0;
	V0 = (int32_t)S0 < (int32_t)V0;
	V0 = -V0;
	V1 = S0 & V0;
	V0 = S2 << 1;
	V0 += S2;
	V0 += S0;
	if (S0)
	{
		A2 = V0 << 8;
		ZZ_CLOCKCYCLES(13,0x8003B360);
		goto ZZ_3AF24_43C;
	}
	A2 = V0 << 8;
	A3 = SP + 568;
	ZZ_CLOCKCYCLES(14,0x8003B360);
ZZ_3AF24_43C:
	A0 = 0x1;
	S0 += 1;
	V0 = SP + 88;
	V1 <<= 7;
	A1 = EMU_ReadU32(S5);
	V0 += V1;
	RA = 0x8003B380; //ZZ_3AF24_45C
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x8001A850);
	goto ZZ_1A850;
ZZ_3AF24_45C:
	V0 = (int32_t)S0 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8003B328);
		goto ZZ_3AF24_404;
	}
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)S6;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x8003B314);
		goto ZZ_3AF24_3F0;
	}
	ZZ_CLOCKCYCLES(7,0x8003B39C);
ZZ_3AF24_478:
	A0 = 0x80060000;
	A0 += 6612;
	V0 = S3 << 2;
	A0 += V0;
	V0 += S3;
	V0 <<= 2;
	V0 = V0 - S3;
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 <<= 2;
	EMU_Write32(A0,R0);
	V1 += V0;
	V0 = EMU_ReadU32(V1 + 44); //+ 0x2C
	V0 <<= 1;
	EMU_Write32(A0,V0);
	V0 = EMU_ReadU32(V1 + 40); //+ 0x28
	if (!V0)
	{
		ZZ_CLOCKCYCLES(19,0x8003B480);
		goto ZZ_3AF24_55C;
	}
	if (S7)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(21,0x8003B488);
		goto ZZ_3AF24_564;
	}
	S0 = R0;
	S1 = 0x80;
	ZZ_CLOCKCYCLES(22,0x8003B3F4);
ZZ_3AF24_4D0:
	A0 = EMU_ReadU32(SP + 616); //+ 0x268
	A1 = SP + 472;
	RA = 0x8003B404; //ZZ_3AF24_4E0
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x8003E228);
	goto ZZ_3E228;
ZZ_3AF24_4E0:
	if (V0 == S1)
	{
		V0 = 0x1E;
		ZZ_CLOCKCYCLES(2,0x8003B41C);
		goto ZZ_3AF24_4F8;
	}
	V0 = 0x1E;
	S0 += 1;
	V0 = (int32_t)S0 < 30;
	if (V0)
	{
		V0 = 0x1E;
		ZZ_CLOCKCYCLES(6,0x8003B3F4);
		goto ZZ_3AF24_4D0;
	}
	V0 = 0x1E;
	ZZ_CLOCKCYCLES(6,0x8003B41C);
ZZ_3AF24_4F8:
	if (S0 != V0)
	{
		A0 = S3 << 2;
		ZZ_CLOCKCYCLES(2,0x8003B458);
		goto ZZ_3AF24_534;
	}
	A0 = S3 << 2;
	V0 = A0 + S3;
	V0 <<= 2;
	V0 = V0 - S3;
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 <<= 2;
	V1 += V0;
	V0 = 0x80060000;
	V0 += 6612;
	A0 += V0;
	EMU_Write32(V1 + 40,R0); //+ 0x28
	V0 = EMU_ReadU32(A0);
	V0 |= 0x10;
	ZZ_CLOCKCYCLES(15,0x8003B47C);
	goto ZZ_3AF24_558;
ZZ_3AF24_534:
	V0 = 0x80060000;
	V0 += 6612;
	A0 += V0;
	V1 = EMU_ReadU32(A0);
	V0 = EMU_ReadU32(SP + 472); //+ 0x1D8
	V1 |= 0x8;
	V0 <<= 5;
	V0 |= V1;
	EMU_Write32(A0,V1);
	ZZ_CLOCKCYCLES(9,0x8003B47C);
ZZ_3AF24_558:
	EMU_Write32(A0,V0);
	ZZ_CLOCKCYCLES(1,0x8003B480);
ZZ_3AF24_55C:
	if (!S7)
	{
		ZZ_CLOCKCYCLES(2,0x8003B4A8);
		goto ZZ_3AF24_584;
	}
	ZZ_CLOCKCYCLES(2,0x8003B488);
ZZ_3AF24_564:
	V0 = 0x80060000;
	V0 += 6612;
	V1 = S3 << 2;
	V1 += V0;
	V0 = EMU_ReadU32(V1);
	A0 = 0x20000;
	V0 |= A0;
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(8,0x8003B4A8);
ZZ_3AF24_584:
	S4 = 0x80060000;
	S4 += 6612;
	S2 = S3 << 2;
	S1 = S2 + S4;
	V0 = EMU_ReadU32(S1);
	A0 = SP + 616;
	V0 |= 0x1;
	RA = 0x8003B4CC; //ZZ_3AF24_5A8
	EMU_Write32(S1,V0);
	ZZ_CLOCKCYCLES(9,0x8003C900);
	goto ZZ_3C900;
ZZ_3AF24_5A8:
	if (S7)
	{
		S0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8003B58C);
		goto ZZ_3AF24_668;
	}
	S0 = 0x1;
	V0 = (int32_t)S0 < (int32_t)S6;
	if (!V0)
	{
		V0 = S2 + S3;
		ZZ_CLOCKCYCLES(5,0x8003B58C);
		goto ZZ_3AF24_668;
	}
	V0 = S2 + S3;
	V0 <<= 2;
	V0 = V0 - S3;
	T4 = V0 << 2;
	T5 = S4;
	T3 = S1;
	T0 = S3 + 1;
	T2 = S6 + S3;
	ZZ_CLOCKCYCLES(12,0x8003B4FC);
ZZ_3AF24_5D8:
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 = T0 << 2;
	V0 += T0;
	V0 <<= 2;
	V0 = V0 - T0;
	V0 <<= 2;
	V0 += V1;
	A3 = V0 + 40;
	V1 += T4;
	A2 = V1 + 40;
	T1 = V1 + 104;
	ZZ_CLOCKCYCLES(11,0x8003B528);
ZZ_3AF24_604:
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	A1 = EMU_ReadU32(A2 + 12); //+ 0xC
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	EMU_Write32(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T1)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(11,0x8003B528);
		goto ZZ_3AF24_604;
	}
	A3 += 16;
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	V0 = T0 << 2;
	T0 += 1;
	V1 = EMU_ReadU32(T3);
	V0 += T5;
	EMU_Write32(V0,V1);
	V0 = (int32_t)T0 < (int32_t)T2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(25,0x8003B4FC);
		goto ZZ_3AF24_5D8;
	}
	ZZ_CLOCKCYCLES(25,0x8003B58C);
ZZ_3AF24_668:
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	V1 = EMU_ReadU32(V0 + 36); //+ 0x24
	A0 = EMU_ReadU32(V0 + 8); //+ 0x8
	V1 += 1;
	A0 += S6;
	EMU_Write32(V0 + 36,V1); //+ 0x24
	EMU_Write32(V0 + 8,A0); //+ 0x8
	ZZ_CLOCKCYCLES(8,0x8003B5AC);
ZZ_3AF24_688:
	RA = EMU_ReadU32(SP + 748); //+ 0x2EC
	FP = EMU_ReadU32(SP + 744); //+ 0x2E8
	S7 = EMU_ReadU32(SP + 740); //+ 0x2E4
	S6 = EMU_ReadU32(SP + 736); //+ 0x2E0
	S5 = EMU_ReadU32(SP + 732); //+ 0x2DC
	S4 = EMU_ReadU32(SP + 728); //+ 0x2D8
	S3 = EMU_ReadU32(SP + 724); //+ 0x2D4
	S2 = EMU_ReadU32(SP + 720); //+ 0x2D0
	S1 = EMU_ReadU32(SP + 716); //+ 0x2CC
	S0 = EMU_ReadU32(SP + 712); //+ 0x2C8
	SP += 752;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x8003AA04,ZZ_3A94C_B8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003AF24,0x8003AF84,ZZ_3AF24);
ZZ_MARK_TARGET(0x8003AF84,0x8003AF8C,ZZ_3AF24_60);
ZZ_MARK_TARGET(0x8003AF8C,0x8003AF94,ZZ_3AF24_68);
ZZ_MARK_TARGET(0x8003AF94,0x8003AFC4,ZZ_3AF24_70);
ZZ_MARK_TARGET(0x8003AFC4,0x8003AFCC,ZZ_3AF24_A0);
ZZ_MARK_TARGET(0x8003AFCC,0x8003AFD4,ZZ_3AF24_A8);
ZZ_MARK_TARGET(0x8003AFD4,0x8003AFEC,ZZ_3AF24_B0);
ZZ_MARK_TARGET(0x8003AFEC,0x8003B000,ZZ_3AF24_C8);
ZZ_MARK_TARGET(0x8003B000,0x8003B004,ZZ_3AF24_DC);
ZZ_MARK_TARGET(0x8003B004,0x8003B010,ZZ_3AF24_E0);
ZZ_MARK_TARGET(0x8003B010,0x8003B020,ZZ_3AF24_EC);
ZZ_MARK_TARGET(0x8003B020,0x8003B038,ZZ_3AF24_FC);
ZZ_MARK_TARGET(0x8003B038,0x8003B048,ZZ_3AF24_114);
ZZ_MARK_TARGET(0x8003B048,0x8003B04C,ZZ_3AF24_124);
ZZ_MARK_TARGET(0x8003B04C,0x8003B06C,ZZ_3AF24_128);
ZZ_MARK_TARGET(0x8003B06C,0x8003B098,ZZ_3AF24_148);
ZZ_MARK_TARGET(0x8003B098,0x8003B0B4,ZZ_3AF24_174);
ZZ_MARK_TARGET(0x8003B0B4,0x8003B0F4,ZZ_3AF24_190);
ZZ_MARK_TARGET(0x8003B0F4,0x8003B128,ZZ_3AF24_1D0);
ZZ_MARK_TARGET(0x8003B128,0x8003B140,ZZ_3AF24_204);
ZZ_MARK_TARGET(0x8003B140,0x8003B148,ZZ_3AF24_21C);
ZZ_MARK_TARGET(0x8003B148,0x8003B184,ZZ_3AF24_224);
ZZ_MARK_TARGET(0x8003B184,0x8003B1A4,ZZ_3AF24_260);
ZZ_MARK_TARGET(0x8003B1A4,0x8003B1B0,ZZ_3AF24_280);
ZZ_MARK_TARGET(0x8003B1B0,0x8003B1F4,ZZ_3AF24_28C);
ZZ_MARK_TARGET(0x8003B1F4,0x8003B1F8,ZZ_3AF24_2D0);
ZZ_MARK_TARGET(0x8003B1F8,0x8003B208,ZZ_3AF24_2D4);
ZZ_MARK_TARGET(0x8003B208,0x8003B220,ZZ_3AF24_2E4);
ZZ_MARK_TARGET(0x8003B220,0x8003B230,ZZ_3AF24_2FC);
ZZ_MARK_TARGET(0x8003B230,0x8003B234,ZZ_3AF24_30C);
ZZ_MARK_TARGET(0x8003B234,0x8003B268,ZZ_3AF24_310);
ZZ_MARK_TARGET(0x8003B268,0x8003B298,ZZ_3AF24_344);
ZZ_MARK_TARGET(0x8003B298,0x8003B2AC,ZZ_3AF24_374);
ZZ_MARK_TARGET(0x8003B2AC,0x8003B2CC,ZZ_3AF24_388);
ZZ_MARK_TARGET(0x8003B2CC,0x8003B2D0,ZZ_3AF24_3A8);
ZZ_MARK_TARGET(0x8003B2D0,0x8003B2E8,ZZ_3AF24_3AC);
ZZ_MARK_TARGET(0x8003B2E8,0x8003B2F4,ZZ_3AF24_3C4);
ZZ_MARK_TARGET(0x8003B2F4,0x8003B314,ZZ_3AF24_3D0);
ZZ_MARK_TARGET(0x8003B314,0x8003B328,ZZ_3AF24_3F0);
ZZ_MARK_TARGET(0x8003B328,0x8003B360,ZZ_3AF24_404);
ZZ_MARK_TARGET(0x8003B360,0x8003B380,ZZ_3AF24_43C);
ZZ_MARK_TARGET(0x8003B380,0x8003B39C,ZZ_3AF24_45C);
ZZ_MARK_TARGET(0x8003B39C,0x8003B3F4,ZZ_3AF24_478);
ZZ_MARK_TARGET(0x8003B3F4,0x8003B404,ZZ_3AF24_4D0);
ZZ_MARK_TARGET(0x8003B404,0x8003B41C,ZZ_3AF24_4E0);
ZZ_MARK_TARGET(0x8003B41C,0x8003B458,ZZ_3AF24_4F8);
ZZ_MARK_TARGET(0x8003B458,0x8003B47C,ZZ_3AF24_534);
ZZ_MARK_TARGET(0x8003B47C,0x8003B480,ZZ_3AF24_558);
ZZ_MARK_TARGET(0x8003B480,0x8003B488,ZZ_3AF24_55C);
ZZ_MARK_TARGET(0x8003B488,0x8003B4A8,ZZ_3AF24_564);
ZZ_MARK_TARGET(0x8003B4A8,0x8003B4CC,ZZ_3AF24_584);
ZZ_MARK_TARGET(0x8003B4CC,0x8003B4FC,ZZ_3AF24_5A8);
ZZ_MARK_TARGET(0x8003B4FC,0x8003B528,ZZ_3AF24_5D8);
ZZ_MARK_TARGET(0x8003B528,0x8003B58C,ZZ_3AF24_604);
ZZ_MARK_TARGET(0x8003B58C,0x8003B5AC,ZZ_3AF24_668);
ZZ_MARK_TARGET(0x8003B5AC,0x8003B5E0,ZZ_3AF24_688);
