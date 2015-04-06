#ifdef ZZ_INCLUDE_CODE
ZZ_14D6C:
	SP -= 328;
	EMU_Write32(SP + 304,S2); //+ 0x130
	S2 = A0;
	EMU_Write32(SP + 320,RA); //+ 0x140
	EMU_Write32(SP + 316,S5); //+ 0x13C
	EMU_Write32(SP + 312,S4); //+ 0x138
	EMU_Write32(SP + 308,S3); //+ 0x134
	EMU_Write32(SP + 300,S1); //+ 0x12C
	EMU_Write32(SP + 296,S0); //+ 0x128
	V0 = EMU_ReadU32(S2);
	S5 = A1;
	if (V0)
	{
		S3 = S5;
		ZZ_CLOCKCYCLES(13,0x80015314);
		goto ZZ_14D6C_5A8;
	}
	S3 = S5;
	V0 = -1;
	AT = 0x80060000;
	EMU_Write32(AT - 2424,V0); //+ 0xFFFFF688
	V0 = 0x1;
	EMU_Write32(S2,V0);
	EMU_Write32(S2 + 2624,V0); //+ 0xA40
	V0 = 0x2;
	AT = 0x80060000;
	EMU_Write32(AT - 2524,R0); //+ 0xFFFFF624
	AT = 0x80060000;
	EMU_Write32(AT - 2428,S5); //+ 0xFFFFF684
	EMU_Write32(S2 + 2604,R0); //+ 0xA2C
	EMU_Write32(S2 + 2600,R0); //+ 0xA28
	EMU_Write32(S2 + 2612,R0); //+ 0xA34
	EMU_Write32(S2 + 4,S5); //+ 0x4
	if (S5 != V0)
	{
		EMU_Write32(S2 + 2616,R0); //+ 0xA38
		ZZ_CLOCKCYCLES(30,0x80014DFC);
		goto ZZ_14D6C_90;
	}
	EMU_Write32(S2 + 2616,R0); //+ 0xA38
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12188); //+ 0xFFFFD064
	if (!V0)
	{
		V0 >>= 8;
		ZZ_CLOCKCYCLES(35,0x80014DFC);
		goto ZZ_14D6C_90;
	}
	V0 >>= 8;
	S3 = V0 + 44;
	ZZ_CLOCKCYCLES(36,0x80014DFC);
ZZ_14D6C_90:
	A0 = R0;
	RA = 0x80014E08; //ZZ_14D6C_9C
	A1 = S3;
	ZZ_CLOCKCYCLES(3,0x8001214C);
	goto ZZ_1214C;
ZZ_14D6C_9C:
	A0 = SP + 24;
	RA = 0x80014E14; //ZZ_14D6C_A8
	A1 = V0;
	ZZ_CLOCKCYCLES(3,0x8004947C);
	goto ZZ_4947C;
ZZ_14D6C_A8:
	V0 = EMU_ReadU32(GP + 40); //+ 0x28
	if (!V0)
	{
		A0 = S3 << 1;
		ZZ_CLOCKCYCLES(4,0x80014E44);
		goto ZZ_14D6C_D8;
	}
	A0 = S3 << 1;
	A0 += S3;
	A0 <<= 2;
	V0 = 0x80070000;
	V0 -= 27956;
	A0 += V0;
	A1 = R0;
	A2 = 0x1;
	ZZ_CLOCKCYCLES(12,0x80014E50);
	goto ZZ_14D6C_E4;
ZZ_14D6C_D8:
	A0 = SP + 24;
	A1 = R0;
	A2 = R0;
	ZZ_CLOCKCYCLES(3,0x80014E50);
ZZ_14D6C_E4:
	RA = 0x80014E58; //ZZ_14D6C_EC
	A3 = R0;
	ZZ_CLOCKCYCLES(2,0x800123F0);
	goto ZZ_123F0;
ZZ_14D6C_EC:
	EMU_Write32(S2 + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S2 + 24); //+ 0x18
	A0 = EMU_ReadU32(S2 + 24); //+ 0x18
	V1 = EMU_ReadU32(S2 + 24); //+ 0x18
	A1 = EMU_ReadU32(S2 + 24); //+ 0x18
	V0 += 1032;
	V1 += 1312;
	EMU_Write32(S2 + 16,V0); //+ 0x10
	EMU_Write32(S2 + 8,A0); //+ 0x8
	EMU_Write32(S2 + 12,V1); //+ 0xC
	V0 = EMU_ReadU32(A1 + 1028); //+ 0x404
	A0 = EMU_ReadU32(S2 + 24); //+ 0x18
	V0 <<= 3;
	V0 += 1312;
	A1 += V0;
	EMU_Write32(S2 + 20,A1); //+ 0x14
	V1 = EMU_ReadU32(A0 + 1028); //+ 0x404
	V0 = EMU_ReadU32(A1);
	S0 = R0;
	V1 <<= 3;
	V0 -= 1;
	A1 = V0 << 1;
	A1 += V0;
	A1 <<= 3;
	A1 += 1812;
	RA = 0x80014EC4; //ZZ_14D6C_158
	A1 += V1;
	ZZ_CLOCKCYCLES(27,0x800116D4);
	goto ZZ_116D4;
ZZ_14D6C_158:
	EMU_Write32(S2 + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(1,0x80014EC8);
ZZ_14D6C_15C:
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	A0 = S0 << 2;
	A0 += V0;
	V0 = EMU_ReadU32(A0);
	V1 = EMU_ReadU32(S2 + 12); //+ 0xC
	S0 += 1;
	V0 <<= 3;
	V1 += V0;
	V0 = (int32_t)S0 < 256;
	if (V0)
	{
		EMU_Write32(A0,V1);
		ZZ_CLOCKCYCLES(11,0x80014EC8);
		goto ZZ_14D6C_15C;
	}
	EMU_Write32(A0,V1);
	A0 = 0x1;
	RA = 0x80014F00; //ZZ_14D6C_194
	A1 = S3;
	ZZ_CLOCKCYCLES(14,0x8001214C);
	goto ZZ_1214C;
ZZ_14D6C_194:
	A0 = SP + 24;
	RA = 0x80014F0C; //ZZ_14D6C_1A0
	A1 = V0;
	ZZ_CLOCKCYCLES(3,0x8004947C);
	goto ZZ_4947C;
ZZ_14D6C_1A0:
	V0 = EMU_ReadU32(GP + 40); //+ 0x28
	if (!V0)
	{
		V0 = S3 << 1;
		ZZ_CLOCKCYCLES(4,0x80014F44);
		goto ZZ_14D6C_1D8;
	}
	V0 = S3 << 1;
	V0 += S3;
	V0 <<= 2;
	AT = 0x80070000;
	AT += V0;
	V0 = EMU_ReadU32(AT - 27948); //+ 0xFFFF92D4
	V1 = 0xFF0000;
	V1 |= 0xFFFF;
	V0 &= V1;
	AT = 0x80060000;
	EMU_Write32(AT + 30784,V0); //+ 0x7840
	ZZ_CLOCKCYCLES(14,0x80014F44);
ZZ_14D6C_1D8:
	V0 = EMU_ReadU32(S2 + 24); //+ 0x18
	A0 = EMU_ReadU32(V0 + 1024); //+ 0x400
	RA = 0x80014F58; //ZZ_14D6C_1EC
	A0 <<= 2;
	ZZ_CLOCKCYCLES(5,0x8001148C);
	goto ZZ_1148C;
ZZ_14D6C_1EC:
	V1 = EMU_ReadU32(S2 + 24); //+ 0x18
	EMU_Write32(S2 + 2620,V0); //+ 0xA3C
	V0 = EMU_ReadU32(V1 + 1024); //+ 0x400
	if ((int32_t)V0 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(6,0x80014FA0);
		goto ZZ_14D6C_234;
	}
	S0 = R0;
	A0 = -18;
	ZZ_CLOCKCYCLES(7,0x80014F74);
ZZ_14D6C_208:
	V1 = EMU_ReadU32(S2 + 2620); //+ 0xA3C
	V0 = S0 << 2;
	V0 += V1;
	EMU_Write32(V0,A0);
	V0 = EMU_ReadU32(S2 + 24); //+ 0x18
	V0 = EMU_ReadU32(V0 + 1024); //+ 0x400
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(11,0x80014F74);
		goto ZZ_14D6C_208;
	}
	ZZ_CLOCKCYCLES(11,0x80014FA0);
ZZ_14D6C_234:
	S0 = R0;
	S1 = R0;
	ZZ_CLOCKCYCLES(2,0x80014FA8);
ZZ_14D6C_23C:
	AT = 0x80060000;
	AT += S1;
	V0 = EMU_ReadU32(AT - 19336); //+ 0xFFFFB478
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80014FC8);
		goto ZZ_14D6C_25C;
	}
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80014FC8; //ZZ_14D6C_25C
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x80016328,ZZ_16328);
	ZZ_JUMPREGISTER(0x800299DC,ZZ_299DC);
	ZZ_JUMPREGISTER(0x800243FC,ZZ_243FC);
	ZZ_JUMPREGISTER(0x8002CDCC,ZZ_2CDCC);
	ZZ_JUMPREGISTER(0x8001F0AC,ZZ_1F0AC);
	ZZ_JUMPREGISTER(0x800327B4,ZZ_327B4);
	ZZ_JUMPREGISTER(0x80034034,ZZ_34034);
	ZZ_JUMPREGISTER(0x8002FFDC,ZZ_2FFDC);
	ZZ_JUMPREGISTER(0x80027CAC,ZZ_27CAC);
	ZZ_JUMPREGISTER_END();
ZZ_14D6C_25C:
	S0 += 1;
	V0 = (int32_t)S0 < 22;
	if (V0)
	{
		S1 += 28;
		ZZ_CLOCKCYCLES(4,0x80014FA8);
		goto ZZ_14D6C_23C;
	}
	S1 += 28;
	V0 = 0x15;
	EMU_Write32(S2 + 40,V0); //+ 0x28
	S0 = 0x15;
	ZZ_CLOCKCYCLES(7,0x80014FE4);
ZZ_14D6C_278:
	RA = 0x80014FEC; //ZZ_14D6C_280
	A0 = S0 << 16;
	ZZ_CLOCKCYCLES(2,0x8001148C);
	goto ZZ_1148C;
ZZ_14D6C_280:
	if (V0)
	{
		EMU_Write32(S2 + 44,V0); //+ 0x2C
		ZZ_CLOCKCYCLES(2,0x80015000);
		goto ZZ_14D6C_294;
	}
	EMU_Write32(S2 + 44,V0); //+ 0x2C
	S0 -= 1;
	if ((int32_t)S0 >= 0)
	{
		ZZ_CLOCKCYCLES(5,0x80014FE4);
		goto ZZ_14D6C_278;
	}
	ZZ_CLOCKCYCLES(5,0x80015000);
ZZ_14D6C_294:
	EMU_Write32(S2 + 40,S0); //+ 0x28
	V0 = EMU_ReadU32(S2 + 40); //+ 0x28
	S1 = R0;
	if ((int32_t)V0 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(5,0x80015054);
		goto ZZ_14D6C_2E8;
	}
	S0 = R0;
	A1 = 0x1;
	A0 = S2;
	ZZ_CLOCKCYCLES(7,0x8001501C);
ZZ_14D6C_2B0:
	EMU_Write16(A0 + 50,A1); //+ 0x32
	V0 = EMU_ReadU32(S2 + 44); //+ 0x2C
	V1 = S0 << 16;
	EMU_Write16(A0 + 56,S0); //+ 0x38
	EMU_Write8(A0 + 59,R0); //+ 0x3B
	EMU_Write16(A0 + 48,A1); //+ 0x30
	V0 += V1;
	EMU_Write32(A0 + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(S2 + 40); //+ 0x28
	S1 += 1;
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		A0 += 44;
		ZZ_CLOCKCYCLES(14,0x8001501C);
		goto ZZ_14D6C_2B0;
	}
	A0 += 44;
	ZZ_CLOCKCYCLES(14,0x80015054);
ZZ_14D6C_2E8:
	V0 = 0x25;
	EMU_Write32(S2 + 968,V0); //+ 0x3C8
	S0 = R0;
	A0 = 0x1;
	V1 = S2;
	ZZ_CLOCKCYCLES(5,0x80015068);
ZZ_14D6C_2FC:
	EMU_Write16(V1 + 976,A0); //+ 0x3D0
	EMU_Write16(V1 + 978,R0); //+ 0x3D2
	EMU_Write32(V1 + 972,R0); //+ 0x3CC
	EMU_Write8(V1 + 987,R0); //+ 0x3DB
	V0 = EMU_ReadU32(S2 + 968); //+ 0x3C8
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		V1 += 44;
		ZZ_CLOCKCYCLES(9,0x80015068);
		goto ZZ_14D6C_2FC;
	}
	V1 += 44;
	RA = 0x80015094; //ZZ_14D6C_328
	A0 = S3;
	ZZ_CLOCKCYCLES(11,0x800120EC);
	goto ZZ_120EC;
ZZ_14D6C_328:
	A0 = 0x80010000;
	A0 += 272;
	A1 = S1;
	RA = 0x800150A8; //ZZ_14D6C_33C
	A2 = V0 & 0xFF;
	ZZ_CLOCKCYCLES(5,0x800494DC);
	goto ZZ_494DC;
ZZ_14D6C_33C:
	S0 = R0;
	S4 = 0x80000000;
	S4 |= 0x2;
	S3 = 0x80060000;
	S3 += 12292;
	S1 = R0;
	ZZ_CLOCKCYCLES(6,0x800150C0);
ZZ_14D6C_354:
	V0 = 0x2;
	AT = 0x80060000;
	AT += S1;
	EMU_Write16(AT + 12298,V0); //+ 0x300A
	if ((int32_t)S0 >= 0)
	{
		V0 = S0;
		ZZ_CLOCKCYCLES(6,0x800150DC);
		goto ZZ_14D6C_370;
	}
	V0 = S0;
	V0 = S0 + 3;
	ZZ_CLOCKCYCLES(7,0x800150DC);
ZZ_14D6C_370:
	A1 = (int32_t)V0 >> 2;
	V0 = A1 << 2;
	V1 = S0 - V0;
	V0 = (int32_t)S0 < 8;
	if (V0)
	{
		A0 = V1 << 2;
		ZZ_CLOCKCYCLES(6,0x800150F8);
		goto ZZ_14D6C_38C;
	}
	A0 = V1 << 2;
	A0 |= 0x10;
	ZZ_CLOCKCYCLES(7,0x800150F8);
ZZ_14D6C_38C:
	V0 = V1 << 8;
	V1 = A1 << 17;
	V1 |= V0;
	V0 = A1 & 0x1;
	if (!V0)
	{
		V0 = V1 | 0x80;
		ZZ_CLOCKCYCLES(6,0x80015118);
		goto ZZ_14D6C_3AC;
	}
	V0 = V1 | 0x80;
	V0 |= A0;
	ZZ_CLOCKCYCLES(8,0x8001511C);
	goto ZZ_14D6C_3B0;
ZZ_14D6C_3AC:
	V0 = A0 | V1;
	ZZ_CLOCKCYCLES(1,0x8001511C);
ZZ_14D6C_3B0:
	V0 |= S4;
	AT = 0x80060000;
	AT += S1;
	EMU_Write32(AT + 12320,V0); //+ 0x3020
	V0 = S0 < 4;
	if (V0)
	{
		V0 = 0x1E;
		ZZ_CLOCKCYCLES(7,0x8001522C);
		goto ZZ_14D6C_4C0;
	}
	V0 = 0x1E;
	V0 = S0 - 4;
	V0 = V0 < 4;
	if (V0)
	{
		V0 = 0x1E;
		ZZ_CLOCKCYCLES(11,0x8001522C);
		goto ZZ_14D6C_4C0;
	}
	V0 = 0x1E;
	V0 = EMU_ReadU16(S3 + 4); //+ 0x4
	V0 -= 20;
	V0 = V0 < 2;
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(17,0x8001522C);
		goto ZZ_14D6C_4C0;
	}
	V0 = 0x1;
	AT = 0x80060000;
	AT += S1;
	A0 = EMU_ReadU32(AT + 12316); //+ 0x301C
	RA = 0x80015174; //ZZ_14D6C_408
	ZZ_CLOCKCYCLES(22,0x80014C94);
	goto ZZ_14C94;
ZZ_14D6C_408:
	A0 = V0;
	V0 = (int32_t)A0 < -254;
	if (!V0)
	{
		V0 = 0x14;
		ZZ_CLOCKCYCLES(4,0x800151FC);
		goto ZZ_14D6C_490;
	}
	V0 = 0x14;
	AT = 0x80060000;
	AT += S1;
	EMU_Write16(AT + 12296,V0); //+ 0x3008
	V0 = EMU_ReadU32(A0);
	AT = 0x80060000;
	AT += S1;
	EMU_Write32(AT + 12312,V0); //+ 0x3018
	AT = 0x80060000;
	AT += S1;
	V0 = EMU_ReadU32(AT + 12312); //+ 0x3018
	AT = 0x80060000;
	AT += S1;
	EMU_Write32(AT + 12324,A0); //+ 0x3024
	AT = 0x80060000;
	AT += S1;
	EMU_Write8(AT + 12307,R0); //+ 0x3013
	AT = 0x80060000;
	AT += S1;
	EMU_Write8(AT + 12306,R0); //+ 0x3012
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 32164); //+ 0xFFFF825C
	V0 = (int32_t)V0 >> 1;
	V0 <<= 2;
	V0 += V1;
	EMU_Write32(V0,S3);
	AT = 0x80060000;
	AT += S1;
	V0 = EMU_ReadU32(AT + 12320); //+ 0x3020
	EMU_Write32(A0,V0);
	ZZ_CLOCKCYCLES(34,0x80015238);
	goto ZZ_14D6C_4CC;
ZZ_14D6C_490:
	V0 = 0x15;
	AT = 0x80060000;
	AT += S1;
	EMU_Write16(AT + 12296,V0); //+ 0x3008
	AT = 0x80060000;
	AT += S1;
	EMU_Write8(AT + 12307,R0); //+ 0x3013
	AT = 0x80060000;
	AT += S1;
	EMU_Write8(AT + 12306,R0); //+ 0x3012
	S3 += 44;
	ZZ_CLOCKCYCLES(12,0x8001523C);
	goto ZZ_14D6C_4D0;
ZZ_14D6C_4C0:
	AT = 0x80060000;
	AT += S1;
	EMU_Write16(AT + 12296,V0); //+ 0x3008
	ZZ_CLOCKCYCLES(3,0x80015238);
ZZ_14D6C_4CC:
	S3 += 44;
	ZZ_CLOCKCYCLES(1,0x8001523C);
ZZ_14D6C_4D0:
	S0 += 1;
	V0 = (int32_t)S0 < 16;
	if (V0)
	{
		S1 += 44;
		ZZ_CLOCKCYCLES(4,0x800150C0);
		goto ZZ_14D6C_354;
	}
	S1 += 44;
	S1 = 0x10000;
	S0 = -1;
	A0 = S2;
	RA = 0x80015260; //ZZ_14D6C_4F4
	A1 = 0xE;
	ZZ_CLOCKCYCLES(9,0x80012294);
	goto ZZ_12294;
ZZ_14D6C_4F4:
	V1 = V0 << 9;
	V1 = V1 - V0;
	V1 <<= 3;
	V1 += V0;
	V1 <<= 4;
	A1 = S5 - 2;
	V0 = A1 < 59;
	if (!V0)
	{
		A2 = V1 - 4368;
		ZZ_CLOCKCYCLES(9,0x800152C8);
		goto ZZ_14D6C_55C;
	}
	A2 = V1 - 4368;
	V0 = A1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 432); //+ 0x1B0
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER(0x800152AC,ZZ_14D6C_540);
	ZZ_JUMPREGISTER(0x800152C8,ZZ_14D6C_55C);
	ZZ_JUMPREGISTER(0x800152A0,ZZ_14D6C_534);
	ZZ_JUMPREGISTER(0x800152B8,ZZ_14D6C_54C);
	ZZ_JUMPREGISTER_END();
ZZ_14D6C_534:
	S1 = 0x8000;
	S0 = 0x2;
	ZZ_CLOCKCYCLES(3,0x800152C8);
	goto ZZ_14D6C_55C;
ZZ_14D6C_540:
	S1 = 0x10000;
	S0 = 0x2;
	ZZ_CLOCKCYCLES(3,0x800152C8);
	goto ZZ_14D6C_55C;
ZZ_14D6C_54C:
	S1 = 0xEA60;
	S0 = 0x1;
	A2 = 0x30000;
	A2 |= 0xEE40;
	ZZ_CLOCKCYCLES(4,0x800152C8);
ZZ_14D6C_55C:
	EMU_Write32(SP + 16,S0); //+ 0x10
	A0 = S2;
	A1 = R0;
	RA = 0x800152DC; //ZZ_14D6C_570
	A3 = S1;
	ZZ_CLOCKCYCLES(5,0x80015468);
	goto ZZ_15468;
ZZ_14D6C_570:
	S0 = R0;
	S1 = R0;
	ZZ_CLOCKCYCLES(2,0x800152E4);
ZZ_14D6C_578:
	AT = 0x80060000;
	AT += S1;
	V0 = EMU_ReadU32(AT - 19332); //+ 0xFFFFB47C
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80015304);
		goto ZZ_14D6C_598;
	}
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80015304; //ZZ_14D6C_598
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8001FC0C,ZZ_1FC0C);
	ZZ_JUMPREGISTER(0x8001F260,ZZ_1F260);
	ZZ_JUMPREGISTER_END();
ZZ_14D6C_598:
	S0 += 1;
	V0 = (int32_t)S0 < 22;
	if (V0)
	{
		S1 += 28;
		ZZ_CLOCKCYCLES(4,0x800152E4);
		goto ZZ_14D6C_578;
	}
	S1 += 28;
	ZZ_CLOCKCYCLES(4,0x80015314);
ZZ_14D6C_5A8:
	V0 = -255;
	RA = EMU_ReadU32(SP + 320); //+ 0x140
	S5 = EMU_ReadU32(SP + 316); //+ 0x13C
	S4 = EMU_ReadU32(SP + 312); //+ 0x138
	S3 = EMU_ReadU32(SP + 308); //+ 0x134
	S2 = EMU_ReadU32(SP + 304); //+ 0x130
	S1 = EMU_ReadU32(SP + 300); //+ 0x12C
	S0 = EMU_ReadU32(SP + 296); //+ 0x128
	SP += 328;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80011834,ZZ_11800_34);
	ZZ_JUMPREGISTER(0x80011B18,ZZ_11800_318);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80014D6C,0x80014DFC,ZZ_14D6C);
ZZ_MARK_TARGET(0x80014DFC,0x80014E08,ZZ_14D6C_90);
ZZ_MARK_TARGET(0x80014E08,0x80014E14,ZZ_14D6C_9C);
ZZ_MARK_TARGET(0x80014E14,0x80014E44,ZZ_14D6C_A8);
ZZ_MARK_TARGET(0x80014E44,0x80014E50,ZZ_14D6C_D8);
ZZ_MARK_TARGET(0x80014E50,0x80014E58,ZZ_14D6C_E4);
ZZ_MARK_TARGET(0x80014E58,0x80014EC4,ZZ_14D6C_EC);
ZZ_MARK_TARGET(0x80014EC4,0x80014EC8,ZZ_14D6C_158);
ZZ_MARK_TARGET(0x80014EC8,0x80014F00,ZZ_14D6C_15C);
ZZ_MARK_TARGET(0x80014F00,0x80014F0C,ZZ_14D6C_194);
ZZ_MARK_TARGET(0x80014F0C,0x80014F44,ZZ_14D6C_1A0);
ZZ_MARK_TARGET(0x80014F44,0x80014F58,ZZ_14D6C_1D8);
ZZ_MARK_TARGET(0x80014F58,0x80014F74,ZZ_14D6C_1EC);
ZZ_MARK_TARGET(0x80014F74,0x80014FA0,ZZ_14D6C_208);
ZZ_MARK_TARGET(0x80014FA0,0x80014FA8,ZZ_14D6C_234);
ZZ_MARK_TARGET(0x80014FA8,0x80014FC8,ZZ_14D6C_23C);
ZZ_MARK_TARGET(0x80014FC8,0x80014FE4,ZZ_14D6C_25C);
ZZ_MARK_TARGET(0x80014FE4,0x80014FEC,ZZ_14D6C_278);
ZZ_MARK_TARGET(0x80014FEC,0x80015000,ZZ_14D6C_280);
ZZ_MARK_TARGET(0x80015000,0x8001501C,ZZ_14D6C_294);
ZZ_MARK_TARGET(0x8001501C,0x80015054,ZZ_14D6C_2B0);
ZZ_MARK_TARGET(0x80015054,0x80015068,ZZ_14D6C_2E8);
ZZ_MARK_TARGET(0x80015068,0x80015094,ZZ_14D6C_2FC);
ZZ_MARK_TARGET(0x80015094,0x800150A8,ZZ_14D6C_328);
ZZ_MARK_TARGET(0x800150A8,0x800150C0,ZZ_14D6C_33C);
ZZ_MARK_TARGET(0x800150C0,0x800150DC,ZZ_14D6C_354);
ZZ_MARK_TARGET(0x800150DC,0x800150F8,ZZ_14D6C_370);
ZZ_MARK_TARGET(0x800150F8,0x80015118,ZZ_14D6C_38C);
ZZ_MARK_TARGET(0x80015118,0x8001511C,ZZ_14D6C_3AC);
ZZ_MARK_TARGET(0x8001511C,0x80015174,ZZ_14D6C_3B0);
ZZ_MARK_TARGET(0x80015174,0x800151FC,ZZ_14D6C_408);
ZZ_MARK_TARGET(0x800151FC,0x8001522C,ZZ_14D6C_490);
ZZ_MARK_TARGET(0x8001522C,0x80015238,ZZ_14D6C_4C0);
ZZ_MARK_TARGET(0x80015238,0x8001523C,ZZ_14D6C_4CC);
ZZ_MARK_TARGET(0x8001523C,0x80015260,ZZ_14D6C_4D0);
ZZ_MARK_TARGET(0x80015260,0x800152A0,ZZ_14D6C_4F4);
ZZ_MARK_TARGET(0x800152A0,0x800152AC,ZZ_14D6C_534);
ZZ_MARK_TARGET(0x800152AC,0x800152B8,ZZ_14D6C_540);
ZZ_MARK_TARGET(0x800152B8,0x800152C8,ZZ_14D6C_54C);
ZZ_MARK_TARGET(0x800152C8,0x800152DC,ZZ_14D6C_55C);
ZZ_MARK_TARGET(0x800152DC,0x800152E4,ZZ_14D6C_570);
ZZ_MARK_TARGET(0x800152E4,0x80015304,ZZ_14D6C_578);
ZZ_MARK_TARGET(0x80015304,0x80015314,ZZ_14D6C_598);
ZZ_MARK_TARGET(0x80015314,0x80015340,ZZ_14D6C_5A8);
