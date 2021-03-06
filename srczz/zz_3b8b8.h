#ifdef ZZ_INCLUDE_CODE
ZZ_3B8B8:
	SP -= 648;
	EMU_Write32(SP + 636,S3); //+ 0x27C
	S3 = A0;
	A0 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 = -1;
	EMU_Write32(SP + 644,RA); //+ 0x284
	EMU_Write32(SP + 640,S4); //+ 0x280
	EMU_Write32(SP + 632,S2); //+ 0x278
	EMU_Write32(SP + 628,S1); //+ 0x274
	EMU_Write32(SP + 624,S0); //+ 0x270
	EMU_Write32(SP + 616,V0); //+ 0x268
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V1 = EMU_ReadU32(A0 + 12); //+ 0xC
	if ((int32_t)V0 <= 0)
	{
		V0 = (int32_t)V1 < (int32_t)V0;
		ZZ_CLOCKCYCLES(15,0x8003B918);
		goto ZZ_3B8B8_60;
	}
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(17,0x8003B918);
		goto ZZ_3B8B8_60;
	}
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 += 40;
	S2 = V0 + A0;
	ZZ_CLOCKCYCLES(24,0x8003B91C);
	goto ZZ_3B8B8_64;
ZZ_3B8B8_60:
	S2 = R0;
	ZZ_CLOCKCYCLES(1,0x8003B91C);
ZZ_3B8B8_64:
	S0 = 0x6;
	if (S3 != S0)
	{
		V0 = SP + 616;
		ZZ_CLOCKCYCLES(3,0x8003B940);
		goto ZZ_3B8B8_88;
	}
	V0 = SP + 616;
	A0 = 0xF0000;
	RA = 0x8003B934; //ZZ_3B8B8_7C
	A0 |= 0x423F;
	ZZ_CLOCKCYCLES(6,0x8002F778);
	goto ZZ_2F778;
ZZ_3B8B8_7C:
	EMU_Write32(GP + 656,V0); //+ 0x290
	EMU_Write32(GP + 660,R0); //+ 0x294
	V0 = SP + 616;
	ZZ_CLOCKCYCLES(3,0x8003B940);
ZZ_3B8B8_88:
	EMU_Write32(SP + 600,V0); //+ 0x258
	V0 = 0x80050000;
	V0 += 26256;
	A0 = SP + 24;
	EMU_Write32(SP + 604,V0); //+ 0x25C
	if (!S2)
	{
		EMU_Write32(SP + 608,A0); //+ 0x260
		ZZ_CLOCKCYCLES(7,0x8003BA0C);
		goto ZZ_3B8B8_154;
	}
	EMU_Write32(SP + 608,A0); //+ 0x260
	V0 = EMU_ReadU32(S2);
	if (V0)
	{
		V0 = 0x6;
		ZZ_CLOCKCYCLES(11,0x8003BA10);
		goto ZZ_3B8B8_158;
	}
	V0 = 0x6;
	A1 = 0x80050000;
	A1 += 25980;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	A2 = 0x80050000;
	A2 += 25972;
	A3 = V0 << 2;
	A3 += V0;
	A3 <<= 3;
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	A3 += 1180;
	RA = 0x8003B99C; //ZZ_3B8B8_E4
	A3 += V0;
	ZZ_CLOCKCYCLES(23,0x8003D740);
	goto ZZ_3D740;
ZZ_3B8B8_E4:
	if (S3 != S0)
	{
		ZZ_CLOCKCYCLES(2,0x8003BA24);
		goto ZZ_3B8B8_16C;
	}
	RA = 0x8003B9AC; //ZZ_3B8B8_F4
	A0 = 0x14;
	ZZ_CLOCKCYCLES(4,0x8003E4F0);
	goto ZZ_3E4F0;
ZZ_3B8B8_F4:
	S1 = R0;
	S2 = 0x1;
	ZZ_CLOCKCYCLES(2,0x8003B9B4);
ZZ_3B8B8_FC:
	RA = 0x8003B9BC; //ZZ_3B8B8_104
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(2,0x8003E288);
	goto ZZ_3E288;
ZZ_3B8B8_104:
	A0 = 0x14;
	RA = 0x8003B9C8; //ZZ_3B8B8_110
	S0 = V0;
	ZZ_CLOCKCYCLES(3,0x8003E4F0);
	goto ZZ_3E4F0;
ZZ_3B8B8_110:
	if (S0 == S2)
	{
		V0 = (int32_t)S1 < 3;
		ZZ_CLOCKCYCLES(2,0x8003B9E0);
		goto ZZ_3B8B8_128;
	}
	V0 = (int32_t)S1 < 3;
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8003B9B4);
		goto ZZ_3B8B8_FC;
	}
	ZZ_CLOCKCYCLES(6,0x8003B9E0);
ZZ_3B8B8_128:
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003B9F4);
		goto ZZ_3B8B8_13C;
	}
	V0 = R0;
	RA = 0x8003B9F0; //ZZ_3B8B8_138
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(4,0x8003AE08);
	goto ZZ_3AE08;
ZZ_3B8B8_138:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003B9F4);
ZZ_3B8B8_13C:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8003BE1C);
		goto ZZ_3B8B8_564;
	}
	RA = 0x8003BA04; //ZZ_3B8B8_14C
	A0 = 0x7;
	ZZ_CLOCKCYCLES(4,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3B8B8_14C:
	ZZ_CLOCKCYCLES(2,0x8003BE1C);
	goto ZZ_3B8B8_564;
ZZ_3B8B8_154:
	V0 = 0x6;
	ZZ_CLOCKCYCLES(1,0x8003BA10);
ZZ_3B8B8_158:
	if (S3 != V0)
	{
		ZZ_CLOCKCYCLES(2,0x8003BA24);
		goto ZZ_3B8B8_16C;
	}
	RA = 0x8003BA20; //ZZ_3B8B8_168
	A0 = 0x7;
	ZZ_CLOCKCYCLES(4,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3B8B8_168:
	S3 = 0x7;
	ZZ_CLOCKCYCLES(1,0x8003BA24);
ZZ_3B8B8_16C:
	if (!S2)
	{
		ZZ_CLOCKCYCLES(2,0x8003BA74);
		goto ZZ_3B8B8_1BC;
	}
	V0 = EMU_ReadU32(S2);
	if (!V0)
	{
		A0 = SP + 24;
		ZZ_CLOCKCYCLES(6,0x8003BA74);
		goto ZZ_3B8B8_1BC;
	}
	A0 = SP + 24;
	A1 = 0x80050000;
	A1 += 25980;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	A2 = 0x80050000;
	A2 += 25972;
	A3 = V0 << 2;
	A3 += V0;
	A3 <<= 3;
	V0 = EMU_ReadU32(GP + 360); //+ 0x168
	A3 += 1180;
	RA = 0x8003BA6C; //ZZ_3B8B8_1B4
	A3 += V0;
	ZZ_CLOCKCYCLES(18,0x8003D740);
	goto ZZ_3D740;
ZZ_3B8B8_1B4:
	ZZ_CLOCKCYCLES(2,0x8003BB18);
	goto ZZ_3B8B8_260;
ZZ_3B8B8_1BC:
	V1 = EMU_ReadU32(GP + 360); //+ 0x168
	V0 = EMU_ReadU32(V1 + 32); //+ 0x20
	S1 = V0 - 1;
	if ((int32_t)S1 < 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(7,0x8003BAE0);
		goto ZZ_3B8B8_228;
	}
	S0 = R0;
	V0 = S1 << 2;
	V0 += S1;
	V0 <<= 3;
	S1 = V0 + 1180;
	RA = 0x8003BAA8; //ZZ_3B8B8_1F0
	A0 = S1 + V1;
	ZZ_CLOCKCYCLES(13,0x8003C6E4);
	goto ZZ_3C6E4;
ZZ_3B8B8_1F0:
	if (!V0)
	{
		V0 = (int32_t)S0 < 100;
		ZZ_CLOCKCYCLES(2,0x8003BAE4);
		goto ZZ_3B8B8_22C;
	}
	V0 = (int32_t)S0 < 100;
	A0 = EMU_ReadU32(GP + 360); //+ 0x168
	A0 += S1;
	V1 = EMU_ReadU8(A0 + 12); //+ 0xC
	V1 -= 48;
	V0 = V1 << 2;
	V0 += V1;
	V1 = EMU_ReadU8(A0 + 13); //+ 0xD
	V0 <<= 1;
	V0 += V1;
	S0 = V0 - 47;
	ZZ_CLOCKCYCLES(14,0x8003BAE0);
ZZ_3B8B8_228:
	V0 = (int32_t)S0 < 100;
	ZZ_CLOCKCYCLES(1,0x8003BAE4);
ZZ_3B8B8_22C:
	if (V0)
	{
		A0 = SP + 24;
		ZZ_CLOCKCYCLES(2,0x8003BAF0);
		goto ZZ_3B8B8_238;
	}
	A0 = SP + 24;
	S0 = 0x63;
	ZZ_CLOCKCYCLES(3,0x8003BAF0);
ZZ_3B8B8_238:
	A1 = 0x80010000;
	A1 += 3704;
	A2 = 0x80050000;
	A2 += 25972;
	V0 = EMU_ReadU32(GP + 656); //+ 0x290
	A3 = 0x80010000;
	A3 += 3720;
	EMU_Write32(SP + 16,S0); //+ 0x10
	RA = 0x8003BB18; //ZZ_3B8B8_260
	EMU_Write32(SP + 20,V0); //+ 0x14
	ZZ_CLOCKCYCLES(10,0x8003D740);
	goto ZZ_3D740;
ZZ_3B8B8_260:
	if (!S2)
	{
		V0 = 0x7;
		ZZ_CLOCKCYCLES(2,0x8003BB30);
		goto ZZ_3B8B8_278;
	}
	V0 = 0x7;
	V0 = EMU_ReadU32(S2);
	if (V0)
	{
		V0 = 0x7;
		ZZ_CLOCKCYCLES(6,0x8003BBC0);
		goto ZZ_3B8B8_308;
	}
	V0 = 0x7;
	ZZ_CLOCKCYCLES(6,0x8003BB30);
ZZ_3B8B8_278:
	if (S3 != V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(2,0x8003BBD4);
		goto ZZ_3B8B8_31C;
	}
	S1 = R0;
	RA = 0x8003BB40; //ZZ_3B8B8_288
	A0 = 0x14;
	ZZ_CLOCKCYCLES(4,0x8003E4F0);
	goto ZZ_3E4F0;
ZZ_3B8B8_288:
	S1 = R0;
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(2,0x8003BB48);
ZZ_3B8B8_290:
	A1 = 0x10000;
	RA = 0x8003BB54; //ZZ_3B8B8_29C
	A1 |= 0x200;
	ZZ_CLOCKCYCLES(3,0x8003E218);
	goto ZZ_3E218;
ZZ_3B8B8_29C:
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(SP + 616,V0); //+ 0x268
		ZZ_CLOCKCYCLES(2,0x8003BB6C);
		goto ZZ_3B8B8_2B4;
	}
	EMU_Write32(SP + 616,V0); //+ 0x268
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		A0 = SP + 24;
		ZZ_CLOCKCYCLES(6,0x8003BB48);
		goto ZZ_3B8B8_290;
	}
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(6,0x8003BB6C);
ZZ_3B8B8_2B4:
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(3,0x8003BB84);
		goto ZZ_3B8B8_2CC;
	}
	V0 = R0;
	RA = 0x8003BB80; //ZZ_3B8B8_2C8
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(5,0x8003AE08);
	goto ZZ_3AE08;
ZZ_3B8B8_2C8:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003BB84);
ZZ_3B8B8_2CC:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8003BE1C);
		goto ZZ_3B8B8_564;
	}
	A1 = EMU_ReadU32(SP + 616); //+ 0x268
	A0 = 0x80010000;
	A0 += 3736;
	RA = 0x8003BBA0; //ZZ_3B8B8_2E8
	ZZ_CLOCKCYCLES(7,0x8003D730);
	goto ZZ_3D730;
ZZ_3B8B8_2E8:
	RA = 0x8003BBA8; //ZZ_3B8B8_2F0
	A0 = SP + 616;
	ZZ_CLOCKCYCLES(2,0x8003C900);
	goto ZZ_3C900;
ZZ_3B8B8_2F0:
	V0 = 0x1;
	EMU_Write32(GP + 660,V0); //+ 0x294
	RA = 0x8003BBB8; //ZZ_3B8B8_300
	A0 = 0x8;
	ZZ_CLOCKCYCLES(4,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3B8B8_300:
	ZZ_CLOCKCYCLES(2,0x8003BE1C);
	goto ZZ_3B8B8_564;
ZZ_3B8B8_308:
	if (S3 != V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(2,0x8003BBD4);
		goto ZZ_3B8B8_31C;
	}
	S1 = R0;
	RA = 0x8003BBD0; //ZZ_3B8B8_318
	A0 = 0x8;
	ZZ_CLOCKCYCLES(4,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3B8B8_318:
	S1 = R0;
	ZZ_CLOCKCYCLES(1,0x8003BBD4);
ZZ_3B8B8_31C:
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(1,0x8003BBD8);
ZZ_3B8B8_320:
	RA = 0x8003BBE0; //ZZ_3B8B8_328
	A1 = 0x2;
	ZZ_CLOCKCYCLES(2,0x8003E218);
	goto ZZ_3E218;
ZZ_3B8B8_328:
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(SP + 616,V0); //+ 0x268
		ZZ_CLOCKCYCLES(2,0x8003BBF8);
		goto ZZ_3B8B8_340;
	}
	EMU_Write32(SP + 616,V0); //+ 0x268
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		A0 = SP + 24;
		ZZ_CLOCKCYCLES(6,0x8003BBD8);
		goto ZZ_3B8B8_320;
	}
	A0 = SP + 24;
	ZZ_CLOCKCYCLES(6,0x8003BBF8);
ZZ_3B8B8_340:
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(3,0x8003BC10);
		goto ZZ_3B8B8_358;
	}
	V0 = R0;
	RA = 0x8003BC0C; //ZZ_3B8B8_354
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(5,0x8003AE08);
	goto ZZ_3AE08;
ZZ_3B8B8_354:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003BC10);
ZZ_3B8B8_358:
	if (V0)
	{
		S1 = 0x7F;
		ZZ_CLOCKCYCLES(2,0x8003BE1C);
		goto ZZ_3B8B8_564;
	}
	S1 = 0x7F;
	V0 = SP + 599;
	ZZ_CLOCKCYCLES(3,0x8003BC1C);
ZZ_3B8B8_364:
	EMU_Write8(V0,R0);
	S1 -= 1;
	if ((int32_t)S1 >= 0)
	{
		V0 -= 1;
		ZZ_CLOCKCYCLES(4,0x8003BC1C);
		goto ZZ_3B8B8_364;
	}
	V0 -= 1;
	S0 = SP + 476;
	A0 = S0;
	A1 = 0x80010000;
	A1 += 3760;
	S1 = R0;
	S2 = 0x80;
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 6516); //+ 0x1974
	V0 = 0x53;
	EMU_Write8(SP + 472,V0); //+ 0x1D8
	V0 = 0x43;
	EMU_Write8(SP + 473,V0); //+ 0x1D9
	V0 = 0x13;
	EMU_Write8(SP + 474,V0); //+ 0x1DA
	V0 = 0x1;
	RA = 0x8003BC70; //ZZ_3B8B8_3B8
	EMU_Write8(SP + 475,V0); //+ 0x1DB
	ZZ_CLOCKCYCLES(21,0x8003D740);
	goto ZZ_3D740;
ZZ_3B8B8_3B8:
	A0 = S0;
	RA = 0x8003BC7C; //ZZ_3B8B8_3C4
	A1 = 0x20;
	ZZ_CLOCKCYCLES(3,0x8003B74C);
	goto ZZ_3B74C;
ZZ_3B8B8_3C4:
	A0 = 0x2;
	A2 = 0x2D00;
	A3 = SP + 568;
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 6608); //+ 0x19D0
	V0 = SP + 88;
	RA = 0x8003BC9C; //ZZ_3B8B8_3E4
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x8001A850);
	goto ZZ_1A850;
ZZ_3B8B8_3E4:
	A0 = 0x2;
	A2 = 0x2D00;
	A3 = R0;
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 6608); //+ 0x19D0
	V0 = SP + 216;
	RA = 0x8003BCBC; //ZZ_3B8B8_404
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x8001A850);
	goto ZZ_1A850;
ZZ_3B8B8_404:
	A0 = 0x2;
	A2 = 0x2E00;
	A3 = R0;
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 6608); //+ 0x19D0
	V0 = SP + 344;
	RA = 0x8003BCDC; //ZZ_3B8B8_424
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x8001A850);
	goto ZZ_1A850;
ZZ_3B8B8_424:
	A0 = EMU_ReadU32(SP + 616); //+ 0x268
	A1 = SP + 472;
	RA = 0x8003BCEC; //ZZ_3B8B8_434
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x8003E238);
	goto ZZ_3E238;
ZZ_3B8B8_434:
	if (V0 == S2)
	{
		V0 = (int32_t)S1 < 3;
		ZZ_CLOCKCYCLES(2,0x8003BD04);
		goto ZZ_3B8B8_44C;
	}
	V0 = (int32_t)S1 < 3;
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8003BCDC);
		goto ZZ_3B8B8_424;
	}
	ZZ_CLOCKCYCLES(6,0x8003BD04);
ZZ_3B8B8_44C:
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003BD18);
		goto ZZ_3B8B8_460;
	}
	V0 = R0;
	RA = 0x8003BD14; //ZZ_3B8B8_45C
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(4,0x8003AE08);
	goto ZZ_3AE08;
ZZ_3B8B8_45C:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003BD18);
ZZ_3B8B8_460:
	if (V0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003BE1C);
		goto ZZ_3B8B8_564;
	}
	S0 = R0;
	S3 = SP + 88;
	S4 = 0x80;
	S1 = R0;
	ZZ_CLOCKCYCLES(5,0x8003BD2C);
ZZ_3B8B8_474:
	S2 = S0 << 7;
	ZZ_CLOCKCYCLES(1,0x8003BD30);
ZZ_3B8B8_478:
	A0 = EMU_ReadU32(SP + 616); //+ 0x268
	A1 = S3 + S2;
	RA = 0x8003BD40; //ZZ_3B8B8_488
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x8003E238);
	goto ZZ_3E238;
ZZ_3B8B8_488:
	if (V0 == S4)
	{
		V0 = (int32_t)S1 < 3;
		ZZ_CLOCKCYCLES(2,0x8003BD58);
		goto ZZ_3B8B8_4A0;
	}
	V0 = (int32_t)S1 < 3;
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8003BD30);
		goto ZZ_3B8B8_478;
	}
	ZZ_CLOCKCYCLES(6,0x8003BD58);
ZZ_3B8B8_4A0:
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003BD6C);
		goto ZZ_3B8B8_4B4;
	}
	V0 = R0;
	RA = 0x8003BD68; //ZZ_3B8B8_4B0
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(4,0x8003AE08);
	goto ZZ_3AE08;
ZZ_3B8B8_4B0:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003BD6C);
ZZ_3B8B8_4B4:
	if (V0)
	{
		S0 += 1;
		ZZ_CLOCKCYCLES(2,0x8003BE1C);
		goto ZZ_3B8B8_564;
	}
	S0 += 1;
	V0 = (int32_t)S0 < 3;
	if (V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(5,0x8003BD2C);
		goto ZZ_3B8B8_474;
	}
	S1 = R0;
	RA = 0x8003BD88; //ZZ_3B8B8_4D0
	A0 = SP + 472;
	ZZ_CLOCKCYCLES(7,0x8003BE40);
	goto ZZ_3BE40;
ZZ_3B8B8_4D0:
	S0 = R0;
	S2 = 0x80;
	S1 = R0;
	ZZ_CLOCKCYCLES(3,0x8003BD94);
ZZ_3B8B8_4DC:
	A0 = EMU_ReadU32(SP + 616); //+ 0x268
	A1 = SP + 472;
	RA = 0x8003BDA4; //ZZ_3B8B8_4EC
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x8003E238);
	goto ZZ_3E238;
ZZ_3B8B8_4EC:
	if (V0 == S2)
	{
		V0 = (int32_t)S1 < 3;
		ZZ_CLOCKCYCLES(2,0x8003BDBC);
		goto ZZ_3B8B8_504;
	}
	V0 = (int32_t)S1 < 3;
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8003BD94);
		goto ZZ_3B8B8_4DC;
	}
	ZZ_CLOCKCYCLES(6,0x8003BDBC);
ZZ_3B8B8_504:
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x8003BDD0);
		goto ZZ_3B8B8_518;
	}
	V0 = R0;
	RA = 0x8003BDCC; //ZZ_3B8B8_514
	A0 = SP + 600;
	ZZ_CLOCKCYCLES(4,0x8003AE08);
	goto ZZ_3AE08;
ZZ_3B8B8_514:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x8003BDD0);
ZZ_3B8B8_518:
	if (V0)
	{
		S0 += 1;
		ZZ_CLOCKCYCLES(2,0x8003BE1C);
		goto ZZ_3B8B8_564;
	}
	S0 += 1;
	V0 = (int32_t)S0 < 5;
	if (V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(5,0x8003BD94);
		goto ZZ_3B8B8_4DC;
	}
	S1 = R0;
	RA = 0x8003BDEC; //ZZ_3B8B8_534
	A0 = SP + 616;
	ZZ_CLOCKCYCLES(7,0x8003C900);
	goto ZZ_3C900;
ZZ_3B8B8_534:
	RA = 0x8003BDF4; //ZZ_3B8B8_53C
	A0 = 0x2;
	ZZ_CLOCKCYCLES(2,0x8003CAD8);
	goto ZZ_3CAD8;
ZZ_3B8B8_53C:
	RA = 0x8003BDFC; //ZZ_3B8B8_544
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3B8B8_544:
	RA = 0x8003BE04; //ZZ_3B8B8_54C
	ZZ_CLOCKCYCLES(2,0x8003C9B8);
	goto ZZ_3C9B8;
ZZ_3B8B8_54C:
	A0 = 0x80050000;
	A0 += 28732;
	RA = 0x8003BE14; //ZZ_3B8B8_55C
	A1 = SP + 29;
	ZZ_CLOCKCYCLES(4,0x8003D6D0);
	goto ZZ_3D6D0;
ZZ_3B8B8_55C:
	RA = 0x8003BE1C; //ZZ_3B8B8_564
	A0 = 0x10;
	ZZ_CLOCKCYCLES(2,0x8003CAD8);
	goto ZZ_3CAD8;
ZZ_3B8B8_564:
	RA = EMU_ReadU32(SP + 644); //+ 0x284
	S4 = EMU_ReadU32(SP + 640); //+ 0x280
	S3 = EMU_ReadU32(SP + 636); //+ 0x27C
	S2 = EMU_ReadU32(SP + 632); //+ 0x278
	S1 = EMU_ReadU32(SP + 628); //+ 0x274
	S0 = EMU_ReadU32(SP + 624); //+ 0x270
	SP += 648;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x8003AA1C,ZZ_3A94C_D0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003B8B8,0x8003B918,ZZ_3B8B8);
ZZ_MARK_TARGET(0x8003B918,0x8003B91C,ZZ_3B8B8_60);
ZZ_MARK_TARGET(0x8003B91C,0x8003B934,ZZ_3B8B8_64);
ZZ_MARK_TARGET(0x8003B934,0x8003B940,ZZ_3B8B8_7C);
ZZ_MARK_TARGET(0x8003B940,0x8003B99C,ZZ_3B8B8_88);
ZZ_MARK_TARGET(0x8003B99C,0x8003B9AC,ZZ_3B8B8_E4);
ZZ_MARK_TARGET(0x8003B9AC,0x8003B9B4,ZZ_3B8B8_F4);
ZZ_MARK_TARGET(0x8003B9B4,0x8003B9BC,ZZ_3B8B8_FC);
ZZ_MARK_TARGET(0x8003B9BC,0x8003B9C8,ZZ_3B8B8_104);
ZZ_MARK_TARGET(0x8003B9C8,0x8003B9E0,ZZ_3B8B8_110);
ZZ_MARK_TARGET(0x8003B9E0,0x8003B9F0,ZZ_3B8B8_128);
ZZ_MARK_TARGET(0x8003B9F0,0x8003B9F4,ZZ_3B8B8_138);
ZZ_MARK_TARGET(0x8003B9F4,0x8003BA04,ZZ_3B8B8_13C);
ZZ_MARK_TARGET(0x8003BA04,0x8003BA0C,ZZ_3B8B8_14C);
ZZ_MARK_TARGET(0x8003BA0C,0x8003BA10,ZZ_3B8B8_154);
ZZ_MARK_TARGET(0x8003BA10,0x8003BA20,ZZ_3B8B8_158);
ZZ_MARK_TARGET(0x8003BA20,0x8003BA24,ZZ_3B8B8_168);
ZZ_MARK_TARGET(0x8003BA24,0x8003BA6C,ZZ_3B8B8_16C);
ZZ_MARK_TARGET(0x8003BA6C,0x8003BA74,ZZ_3B8B8_1B4);
ZZ_MARK_TARGET(0x8003BA74,0x8003BAA8,ZZ_3B8B8_1BC);
ZZ_MARK_TARGET(0x8003BAA8,0x8003BAE0,ZZ_3B8B8_1F0);
ZZ_MARK_TARGET(0x8003BAE0,0x8003BAE4,ZZ_3B8B8_228);
ZZ_MARK_TARGET(0x8003BAE4,0x8003BAF0,ZZ_3B8B8_22C);
ZZ_MARK_TARGET(0x8003BAF0,0x8003BB18,ZZ_3B8B8_238);
ZZ_MARK_TARGET(0x8003BB18,0x8003BB30,ZZ_3B8B8_260);
ZZ_MARK_TARGET(0x8003BB30,0x8003BB40,ZZ_3B8B8_278);
ZZ_MARK_TARGET(0x8003BB40,0x8003BB48,ZZ_3B8B8_288);
ZZ_MARK_TARGET(0x8003BB48,0x8003BB54,ZZ_3B8B8_290);
ZZ_MARK_TARGET(0x8003BB54,0x8003BB6C,ZZ_3B8B8_29C);
ZZ_MARK_TARGET(0x8003BB6C,0x8003BB80,ZZ_3B8B8_2B4);
ZZ_MARK_TARGET(0x8003BB80,0x8003BB84,ZZ_3B8B8_2C8);
ZZ_MARK_TARGET(0x8003BB84,0x8003BBA0,ZZ_3B8B8_2CC);
ZZ_MARK_TARGET(0x8003BBA0,0x8003BBA8,ZZ_3B8B8_2E8);
ZZ_MARK_TARGET(0x8003BBA8,0x8003BBB8,ZZ_3B8B8_2F0);
ZZ_MARK_TARGET(0x8003BBB8,0x8003BBC0,ZZ_3B8B8_300);
ZZ_MARK_TARGET(0x8003BBC0,0x8003BBD0,ZZ_3B8B8_308);
ZZ_MARK_TARGET(0x8003BBD0,0x8003BBD4,ZZ_3B8B8_318);
ZZ_MARK_TARGET(0x8003BBD4,0x8003BBD8,ZZ_3B8B8_31C);
ZZ_MARK_TARGET(0x8003BBD8,0x8003BBE0,ZZ_3B8B8_320);
ZZ_MARK_TARGET(0x8003BBE0,0x8003BBF8,ZZ_3B8B8_328);
ZZ_MARK_TARGET(0x8003BBF8,0x8003BC0C,ZZ_3B8B8_340);
ZZ_MARK_TARGET(0x8003BC0C,0x8003BC10,ZZ_3B8B8_354);
ZZ_MARK_TARGET(0x8003BC10,0x8003BC1C,ZZ_3B8B8_358);
ZZ_MARK_TARGET(0x8003BC1C,0x8003BC70,ZZ_3B8B8_364);
ZZ_MARK_TARGET(0x8003BC70,0x8003BC7C,ZZ_3B8B8_3B8);
ZZ_MARK_TARGET(0x8003BC7C,0x8003BC9C,ZZ_3B8B8_3C4);
ZZ_MARK_TARGET(0x8003BC9C,0x8003BCBC,ZZ_3B8B8_3E4);
ZZ_MARK_TARGET(0x8003BCBC,0x8003BCDC,ZZ_3B8B8_404);
ZZ_MARK_TARGET(0x8003BCDC,0x8003BCEC,ZZ_3B8B8_424);
ZZ_MARK_TARGET(0x8003BCEC,0x8003BD04,ZZ_3B8B8_434);
ZZ_MARK_TARGET(0x8003BD04,0x8003BD14,ZZ_3B8B8_44C);
ZZ_MARK_TARGET(0x8003BD14,0x8003BD18,ZZ_3B8B8_45C);
ZZ_MARK_TARGET(0x8003BD18,0x8003BD2C,ZZ_3B8B8_460);
ZZ_MARK_TARGET(0x8003BD2C,0x8003BD30,ZZ_3B8B8_474);
ZZ_MARK_TARGET(0x8003BD30,0x8003BD40,ZZ_3B8B8_478);
ZZ_MARK_TARGET(0x8003BD40,0x8003BD58,ZZ_3B8B8_488);
ZZ_MARK_TARGET(0x8003BD58,0x8003BD68,ZZ_3B8B8_4A0);
ZZ_MARK_TARGET(0x8003BD68,0x8003BD6C,ZZ_3B8B8_4B0);
ZZ_MARK_TARGET(0x8003BD6C,0x8003BD88,ZZ_3B8B8_4B4);
ZZ_MARK_TARGET(0x8003BD88,0x8003BD94,ZZ_3B8B8_4D0);
ZZ_MARK_TARGET(0x8003BD94,0x8003BDA4,ZZ_3B8B8_4DC);
ZZ_MARK_TARGET(0x8003BDA4,0x8003BDBC,ZZ_3B8B8_4EC);
ZZ_MARK_TARGET(0x8003BDBC,0x8003BDCC,ZZ_3B8B8_504);
ZZ_MARK_TARGET(0x8003BDCC,0x8003BDD0,ZZ_3B8B8_514);
ZZ_MARK_TARGET(0x8003BDD0,0x8003BDEC,ZZ_3B8B8_518);
ZZ_MARK_TARGET(0x8003BDEC,0x8003BDF4,ZZ_3B8B8_534);
ZZ_MARK_TARGET(0x8003BDF4,0x8003BDFC,ZZ_3B8B8_53C);
ZZ_MARK_TARGET(0x8003BDFC,0x8003BE04,ZZ_3B8B8_544);
ZZ_MARK_TARGET(0x8003BE04,0x8003BE14,ZZ_3B8B8_54C);
ZZ_MARK_TARGET(0x8003BE14,0x8003BE1C,ZZ_3B8B8_55C);
ZZ_MARK_TARGET(0x8003BE1C,0x8003BE40,ZZ_3B8B8_564);
