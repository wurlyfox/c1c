#ifdef ZZ_INCLUDE_CODE
ZZ_3578C:
	SP -= 656;
	EMU_Write32(SP + 644,S3); //+ 0x284
	S3 = A0;
	A0 = EMU_ReadU32(GP + 232); //+ 0xE8
	EMU_Write32(SP + 652,RA); //+ 0x28C
	EMU_Write32(SP + 648,S4); //+ 0x288
	EMU_Write32(SP + 640,S2); //+ 0x280
	EMU_Write32(SP + 636,S1); //+ 0x27C
	EMU_Write32(SP + 632,S0); //+ 0x278
	A1 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 = -1;
	EMU_Write32(SP + 624,V0); //+ 0x270
	V1 = EMU_ReadU32(A0 + 12); //+ 0xC
	if ((int32_t)A1 <= 0)
	{
		V0 = (int32_t)V1 < (int32_t)A1;
		ZZ_CLOCKCYCLES(15,0x800357EC);
		goto ZZ_3578C_60;
	}
	V0 = (int32_t)V1 < (int32_t)A1;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(17,0x800357EC);
		goto ZZ_3578C_60;
	}
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	V0 <<= 2;
	V0 += 40;
	S2 = A0 + V0;
	ZZ_CLOCKCYCLES(24,0x800357F0);
	goto ZZ_3578C_64;
ZZ_3578C_60:
	S2 = R0;
	ZZ_CLOCKCYCLES(1,0x800357F0);
ZZ_3578C_64:
	S0 = 0x6;
	if (S3 != S0)
	{
		V0 = SP + 624;
		ZZ_CLOCKCYCLES(3,0x80035818);
		goto ZZ_3578C_8C;
	}
	V0 = SP + 624;
	A0 = 0xF0000;
	RA = 0x80035808; //ZZ_3578C_7C
	A0 |= 0x423F;
	ZZ_CLOCKCYCLES(6,0x80031884);
	goto ZZ_31884;
ZZ_3578C_7C:
	EMU_Write32(GP + 416,V0); //+ 0x1A0
	EMU_Write32(GP + 408,R0); //+ 0x198
	EMU_Write32(GP + 412,R0); //+ 0x19C
	V0 = SP + 624;
	ZZ_CLOCKCYCLES(4,0x80035818);
ZZ_3578C_8C:
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = 0x80060000;
	V0 -= 2644;
	A0 = SP + 48;
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = 0x80060000;
	V0 -= 2640;
	EMU_Write32(SP + 40,A0); //+ 0x28
	if (!S2)
	{
		EMU_Write32(SP + 36,V0); //+ 0x24
		ZZ_CLOCKCYCLES(10,0x800358F0);
		goto ZZ_3578C_164;
	}
	EMU_Write32(SP + 36,V0); //+ 0x24
	V0 = EMU_ReadU32(S2);
	if (V0)
	{
		V0 = 0x6;
		ZZ_CLOCKCYCLES(14,0x800358F4);
		goto ZZ_3578C_168;
	}
	V0 = 0x6;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	A1 = 0x80060000;
	A1 -= 2796;
	A2 = 0x80060000;
	A2 -= 2804;
	V1 = EMU_ReadU32(GP + 232); //+ 0xE8
	A3 = V0 << 2;
	A3 += V0;
	A3 <<= 3;
	A3 += 1180;
	RA = 0x80035880; //ZZ_3578C_F4
	A3 += V1;
	ZZ_CLOCKCYCLES(26,0x800494EC);
	goto ZZ_494EC;
ZZ_3578C_F4:
	if (S3 != S0)
	{
		ZZ_CLOCKCYCLES(2,0x80035908);
		goto ZZ_3578C_17C;
	}
	RA = 0x80035890; //ZZ_3578C_104
	A0 = 0x14;
	ZZ_CLOCKCYCLES(4,0x8004A71C);
	goto ZZ_4A71C;
ZZ_3578C_104:
	S1 = R0;
	S2 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80035898);
ZZ_3578C_10C:
	RA = 0x800358A0; //ZZ_3578C_114
	A0 = SP + 48;
	ZZ_CLOCKCYCLES(2,0x8004A044);
	goto ZZ_4A044;
ZZ_3578C_114:
	A0 = 0x14;
	RA = 0x800358AC; //ZZ_3578C_120
	S0 = V0;
	ZZ_CLOCKCYCLES(3,0x8004A71C);
	goto ZZ_4A71C;
ZZ_3578C_120:
	if (S0 == S2)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(2,0x800358C4);
		goto ZZ_3578C_138;
	}
	A0 = S1;
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(6,0x80035898);
		goto ZZ_3578C_10C;
	}
	A0 = S1;
	ZZ_CLOCKCYCLES(6,0x800358C4);
ZZ_3578C_138:
	A1 = 0x3;
	A2 = 0x80030000;
	A2 += 19980;
	RA = 0x800358D8; //ZZ_3578C_14C
	A3 = SP + 24;
	ZZ_CLOCKCYCLES(5,0x80034D40);
	goto ZZ_34D40;
ZZ_3578C_14C:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x80035D10);
		goto ZZ_3578C_584;
	}
	RA = 0x800358E8; //ZZ_3578C_15C
	A0 = 0x7;
	ZZ_CLOCKCYCLES(4,0x80036410);
	goto ZZ_36410;
ZZ_3578C_15C:
	ZZ_CLOCKCYCLES(2,0x80035D10);
	goto ZZ_3578C_584;
ZZ_3578C_164:
	V0 = 0x6;
	ZZ_CLOCKCYCLES(1,0x800358F4);
ZZ_3578C_168:
	if (S3 != V0)
	{
		ZZ_CLOCKCYCLES(2,0x80035908);
		goto ZZ_3578C_17C;
	}
	RA = 0x80035904; //ZZ_3578C_178
	A0 = 0x7;
	ZZ_CLOCKCYCLES(4,0x80036410);
	goto ZZ_36410;
ZZ_3578C_178:
	S3 = 0x7;
	ZZ_CLOCKCYCLES(1,0x80035908);
ZZ_3578C_17C:
	if (!S2)
	{
		ZZ_CLOCKCYCLES(2,0x80035958);
		goto ZZ_3578C_1CC;
	}
	V0 = EMU_ReadU32(S2);
	if (!V0)
	{
		A0 = SP + 48;
		ZZ_CLOCKCYCLES(6,0x80035958);
		goto ZZ_3578C_1CC;
	}
	A0 = SP + 48;
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	A1 = 0x80060000;
	A1 -= 2796;
	A2 = 0x80060000;
	A2 -= 2804;
	V1 = EMU_ReadU32(GP + 232); //+ 0xE8
	A3 = V0 << 2;
	A3 += V0;
	A3 <<= 3;
	A3 += 1180;
	RA = 0x80035950; //ZZ_3578C_1C4
	A3 += V1;
	ZZ_CLOCKCYCLES(18,0x800494EC);
	goto ZZ_494EC;
ZZ_3578C_1C4:
	ZZ_CLOCKCYCLES(2,0x800359F8);
	goto ZZ_3578C_26C;
ZZ_3578C_1CC:
	A0 = EMU_ReadU32(GP + 232); //+ 0xE8
	V0 = EMU_ReadU32(A0 + 32); //+ 0x20
	S1 = V0 - 1;
	if ((int32_t)S1 < 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(7,0x800359C0);
		goto ZZ_3578C_234;
	}
	S0 = R0;
	V0 = S1 << 2;
	V0 += S1;
	V0 <<= 3;
	S1 = V0 + 1180;
	RA = 0x8003598C; //ZZ_3578C_200
	A0 += S1;
	ZZ_CLOCKCYCLES(13,0x80036244);
	goto ZZ_36244;
ZZ_3578C_200:
	if (!V0)
	{
		V0 = (int32_t)S0 < 100;
		ZZ_CLOCKCYCLES(2,0x800359C4);
		goto ZZ_3578C_238;
	}
	V0 = (int32_t)S0 < 100;
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	V0 += S1;
	V1 = EMU_ReadU8(V0 + 12); //+ 0xC
	A0 = EMU_ReadU8(V0 + 13); //+ 0xD
	V1 -= 48;
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 1;
	V0 += A0;
	S0 = V0 - 47;
	ZZ_CLOCKCYCLES(13,0x800359C0);
ZZ_3578C_234:
	V0 = (int32_t)S0 < 100;
	ZZ_CLOCKCYCLES(1,0x800359C4);
ZZ_3578C_238:
	if (V0)
	{
		A0 = SP + 48;
		ZZ_CLOCKCYCLES(2,0x800359D0);
		goto ZZ_3578C_244;
	}
	A0 = SP + 48;
	S0 = 0x63;
	ZZ_CLOCKCYCLES(3,0x800359D0);
ZZ_3578C_244:
	V0 = EMU_ReadU32(GP + 416); //+ 0x1A0
	A1 = 0x80010000;
	A1 += 1676;
	A2 = 0x80060000;
	A2 -= 2804;
	A3 = 0x80010000;
	A3 += 1692;
	EMU_Write32(SP + 16,S0); //+ 0x10
	RA = 0x800359F8; //ZZ_3578C_26C
	EMU_Write32(SP + 20,V0); //+ 0x14
	ZZ_CLOCKCYCLES(10,0x800494EC);
	goto ZZ_494EC;
ZZ_3578C_26C:
	if (!S2)
	{
		V0 = 0x7;
		ZZ_CLOCKCYCLES(2,0x80035A10);
		goto ZZ_3578C_284;
	}
	V0 = 0x7;
	V0 = EMU_ReadU32(S2);
	if (V0)
	{
		V0 = 0x7;
		ZZ_CLOCKCYCLES(6,0x80035AA0);
		goto ZZ_3578C_314;
	}
	V0 = 0x7;
	ZZ_CLOCKCYCLES(6,0x80035A10);
ZZ_3578C_284:
	if (S3 != V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(2,0x80035AB4);
		goto ZZ_3578C_328;
	}
	S1 = R0;
	RA = 0x80035A20; //ZZ_3578C_294
	A0 = 0x14;
	ZZ_CLOCKCYCLES(4,0x8004A71C);
	goto ZZ_4A71C;
ZZ_3578C_294:
	S1 = R0;
	A0 = SP + 48;
	ZZ_CLOCKCYCLES(2,0x80035A28);
ZZ_3578C_29C:
	A1 = 0x10000;
	RA = 0x80035A34; //ZZ_3578C_2A8
	A1 |= 0x200;
	ZZ_CLOCKCYCLES(3,0x80049FD4);
	goto ZZ_49FD4;
ZZ_3578C_2A8:
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(SP + 624,V0); //+ 0x270
		ZZ_CLOCKCYCLES(2,0x80035A4C);
		goto ZZ_3578C_2C0;
	}
	EMU_Write32(SP + 624,V0); //+ 0x270
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		A0 = SP + 48;
		ZZ_CLOCKCYCLES(6,0x80035A28);
		goto ZZ_3578C_29C;
	}
	A0 = SP + 48;
	ZZ_CLOCKCYCLES(6,0x80035A4C);
ZZ_3578C_2C0:
	A0 = S1;
	A1 = 0x3;
	A2 = 0x80030000;
	A2 += 19980;
	RA = 0x80035A64; //ZZ_3578C_2D8
	A3 = SP + 24;
	ZZ_CLOCKCYCLES(6,0x80034D40);
	goto ZZ_34D40;
ZZ_3578C_2D8:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x80035D10);
		goto ZZ_3578C_584;
	}
	A1 = EMU_ReadU32(SP + 624); //+ 0x270
	A0 = 0x80010000;
	A0 += 1708;
	RA = 0x80035A80; //ZZ_3578C_2F4
	ZZ_CLOCKCYCLES(7,0x800494DC);
	goto ZZ_494DC;
ZZ_3578C_2F4:
	RA = 0x80035A88; //ZZ_3578C_2FC
	A0 = SP + 624;
	ZZ_CLOCKCYCLES(2,0x80036270);
	goto ZZ_36270;
ZZ_3578C_2FC:
	V0 = 0x1;
	EMU_Write32(GP + 408,V0); //+ 0x198
	RA = 0x80035A98; //ZZ_3578C_30C
	A0 = 0x8;
	ZZ_CLOCKCYCLES(4,0x80036410);
	goto ZZ_36410;
ZZ_3578C_30C:
	ZZ_CLOCKCYCLES(2,0x80035D10);
	goto ZZ_3578C_584;
ZZ_3578C_314:
	if (S3 != V0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(2,0x80035AB4);
		goto ZZ_3578C_328;
	}
	S1 = R0;
	RA = 0x80035AB0; //ZZ_3578C_324
	A0 = 0x8;
	ZZ_CLOCKCYCLES(4,0x80036410);
	goto ZZ_36410;
ZZ_3578C_324:
	S1 = R0;
	ZZ_CLOCKCYCLES(1,0x80035AB4);
ZZ_3578C_328:
	A0 = SP + 48;
	ZZ_CLOCKCYCLES(1,0x80035AB8);
ZZ_3578C_32C:
	RA = 0x80035AC0; //ZZ_3578C_334
	A1 = 0x2;
	ZZ_CLOCKCYCLES(2,0x80049FD4);
	goto ZZ_49FD4;
ZZ_3578C_334:
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(SP + 624,V0); //+ 0x270
		ZZ_CLOCKCYCLES(2,0x80035AD8);
		goto ZZ_3578C_34C;
	}
	EMU_Write32(SP + 624,V0); //+ 0x270
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		A0 = SP + 48;
		ZZ_CLOCKCYCLES(6,0x80035AB8);
		goto ZZ_3578C_32C;
	}
	A0 = SP + 48;
	ZZ_CLOCKCYCLES(6,0x80035AD8);
ZZ_3578C_34C:
	A0 = S1;
	A1 = 0x3;
	A2 = 0x80030000;
	A2 += 19980;
	RA = 0x80035AF0; //ZZ_3578C_364
	A3 = SP + 24;
	ZZ_CLOCKCYCLES(6,0x80034D40);
	goto ZZ_34D40;
ZZ_3578C_364:
	if (V0)
	{
		S1 = 0x7F;
		ZZ_CLOCKCYCLES(2,0x80035D10);
		goto ZZ_3578C_584;
	}
	S1 = 0x7F;
	V0 = SP + 623;
	ZZ_CLOCKCYCLES(3,0x80035AFC);
ZZ_3578C_370:
	EMU_Write8(V0,R0);
	S1 -= 1;
	if ((int32_t)S1 >= 0)
	{
		V0 -= 1;
		ZZ_CLOCKCYCLES(4,0x80035AFC);
		goto ZZ_3578C_370;
	}
	V0 -= 1;
	S0 = SP + 500;
	A0 = S0;
	A1 = 0x80010000;
	A1 += 1732;
	V0 = 0x53;
	EMU_Write8(SP + 496,V0); //+ 0x1F0
	V0 = 0x43;
	EMU_Write8(SP + 497,V0); //+ 0x1F1
	V0 = 0x11;
	EMU_Write8(SP + 498,V0); //+ 0x1F2
	V0 = 0x1;
	RA = 0x80035B40; //ZZ_3578C_3B4
	EMU_Write8(SP + 499,V0); //+ 0x1F3
	ZZ_CLOCKCYCLES(17,0x800494EC);
	goto ZZ_494EC;
ZZ_3578C_3B4:
	A0 = S0;
	RA = 0x80035B4C; //ZZ_3578C_3C0
	A1 = 0x20;
	ZZ_CLOCKCYCLES(3,0x80035620);
	goto ZZ_35620;
ZZ_3578C_3C0:
	A0 = 0x2;
	S0 = 0x80070000;
	S0 -= 12468;
	A1 = EMU_ReadU32(S0);
	A2 = R0;
	A3 = SP + 592;
	S1 = R0;
	S2 = 0x80;
	V0 = SP + 112;
	EMU_Write32(SP + 16,V0); //+ 0x10
	RA = 0x80035B7C; //ZZ_3578C_3F0
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(12,0x80017800);
	goto ZZ_17800;
ZZ_3578C_3F0:
	A0 = 0x2;
	A1 = EMU_ReadU32(S0);
	A2 = R0;
	A3 = R0;
	V0 = SP + 240;
	EMU_Write32(SP + 16,V0); //+ 0x10
	RA = 0x80035B9C; //ZZ_3578C_410
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(8,0x80017800);
	goto ZZ_17800;
ZZ_3578C_410:
	A0 = 0x2;
	A1 = EMU_ReadU32(S0);
	A2 = 0x100;
	A3 = R0;
	V0 = SP + 368;
	EMU_Write32(SP + 16,V0); //+ 0x10
	RA = 0x80035BBC; //ZZ_3578C_430
	EMU_Write32(SP + 20,R0); //+ 0x14
	ZZ_CLOCKCYCLES(8,0x80017800);
	goto ZZ_17800;
ZZ_3578C_430:
	A0 = EMU_ReadU32(SP + 624); //+ 0x270
	A1 = SP + 496;
	RA = 0x80035BCC; //ZZ_3578C_440
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x80049FF4);
	goto ZZ_49FF4;
ZZ_3578C_440:
	if (V0 == S2)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(2,0x80035BE4);
		goto ZZ_3578C_458;
	}
	A0 = S1;
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(6,0x80035BBC);
		goto ZZ_3578C_430;
	}
	A0 = S1;
	ZZ_CLOCKCYCLES(6,0x80035BE4);
ZZ_3578C_458:
	A1 = 0x3;
	A2 = 0x80030000;
	A2 += 19980;
	RA = 0x80035BF8; //ZZ_3578C_46C
	A3 = SP + 24;
	ZZ_CLOCKCYCLES(5,0x80034D40);
	goto ZZ_34D40;
ZZ_3578C_46C:
	if (V0)
	{
		S3 = R0;
		ZZ_CLOCKCYCLES(2,0x80035D10);
		goto ZZ_3578C_584;
	}
	S3 = R0;
	S2 = SP + 112;
	S4 = 0x80;
	S1 = R0;
	ZZ_CLOCKCYCLES(5,0x80035C0C);
ZZ_3578C_480:
	S0 = S3 << 7;
	ZZ_CLOCKCYCLES(1,0x80035C10);
ZZ_3578C_484:
	A0 = EMU_ReadU32(SP + 624); //+ 0x270
	A1 = S2 + S0;
	RA = 0x80035C20; //ZZ_3578C_494
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x80049FF4);
	goto ZZ_49FF4;
ZZ_3578C_494:
	if (V0 == S4)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(2,0x80035C38);
		goto ZZ_3578C_4AC;
	}
	A0 = S1;
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(6,0x80035C10);
		goto ZZ_3578C_484;
	}
	A0 = S1;
	ZZ_CLOCKCYCLES(6,0x80035C38);
ZZ_3578C_4AC:
	A1 = 0x3;
	A2 = 0x80030000;
	A2 += 19980;
	RA = 0x80035C4C; //ZZ_3578C_4C0
	A3 = SP + 24;
	ZZ_CLOCKCYCLES(5,0x80034D40);
	goto ZZ_34D40;
ZZ_3578C_4C0:
	if (V0)
	{
		S3 += 1;
		ZZ_CLOCKCYCLES(2,0x80035D10);
		goto ZZ_3578C_584;
	}
	S3 += 1;
	if ((int32_t)S3 <= 0)
	{
		S1 = R0;
		ZZ_CLOCKCYCLES(4,0x80035C0C);
		goto ZZ_3578C_480;
	}
	S1 = R0;
	RA = 0x80035C64; //ZZ_3578C_4D8
	S3 = R0;
	ZZ_CLOCKCYCLES(6,0x80036C10);
	goto ZZ_36C10;
ZZ_3578C_4D8:
	V0 = 0x1;
	EMU_Write32(GP + 412,V0); //+ 0x19C
	S4 = 0x80;
	ZZ_CLOCKCYCLES(3,0x80035C70);
ZZ_3578C_4E4:
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	S2 = R0;
	S0 = V0 + 1780;
	ZZ_CLOCKCYCLES(3,0x80035C7C);
ZZ_3578C_4F0:
	S1 = R0;
	ZZ_CLOCKCYCLES(1,0x80035C80);
ZZ_3578C_4F4:
	A0 = EMU_ReadU32(SP + 624); //+ 0x270
	A1 = S0;
	RA = 0x80035C90; //ZZ_3578C_504
	A2 = 0x80;
	ZZ_CLOCKCYCLES(4,0x80049FF4);
	goto ZZ_49FF4;
ZZ_3578C_504:
	if (V0 == S4)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(2,0x80035CA8);
		goto ZZ_3578C_51C;
	}
	A0 = S1;
	S1 += 1;
	V0 = (int32_t)S1 < 3;
	if (V0)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(6,0x80035C80);
		goto ZZ_3578C_4F4;
	}
	A0 = S1;
	ZZ_CLOCKCYCLES(6,0x80035CA8);
ZZ_3578C_51C:
	A1 = 0x3;
	A2 = 0x80030000;
	A2 += 19980;
	RA = 0x80035CBC; //ZZ_3578C_530
	A3 = SP + 24;
	ZZ_CLOCKCYCLES(5,0x80034D40);
	goto ZZ_34D40;
ZZ_3578C_530:
	if (V0)
	{
		S2 += 1;
		ZZ_CLOCKCYCLES(2,0x80035D10);
		goto ZZ_3578C_584;
	}
	S2 += 1;
	V0 = S2 < 22;
	if (V0)
	{
		S0 += 128;
		ZZ_CLOCKCYCLES(5,0x80035C7C);
		goto ZZ_3578C_4F0;
	}
	S0 += 128;
	S3 += 1;
	if ((int32_t)S3 <= 0)
	{
		ZZ_CLOCKCYCLES(8,0x80035C70);
		goto ZZ_3578C_4E4;
	}
	RA = 0x80035CE4; //ZZ_3578C_558
	ZZ_CLOCKCYCLES(10,0x80036C8C);
	goto ZZ_36C8C;
ZZ_3578C_558:
	EMU_Write32(GP + 412,R0); //+ 0x19C
	RA = 0x80035CF0; //ZZ_3578C_564
	A0 = SP + 624;
	ZZ_CLOCKCYCLES(3,0x80036270);
	goto ZZ_36270;
ZZ_3578C_564:
	RA = 0x80035CF8; //ZZ_3578C_56C
	A0 = 0x2;
	ZZ_CLOCKCYCLES(2,0x800363F0);
	goto ZZ_363F0;
ZZ_3578C_56C:
	RA = 0x80035D00; //ZZ_3578C_574
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x80036410);
	goto ZZ_36410;
ZZ_3578C_574:
	RA = 0x80035D08; //ZZ_3578C_57C
	ZZ_CLOCKCYCLES(2,0x8003631C);
	goto ZZ_3631C;
ZZ_3578C_57C:
	RA = 0x80035D10; //ZZ_3578C_584
	A0 = 0x10;
	ZZ_CLOCKCYCLES(2,0x800363F0);
	goto ZZ_363F0;
ZZ_3578C_584:
	RA = EMU_ReadU32(SP + 652); //+ 0x28C
	S4 = EMU_ReadU32(SP + 648); //+ 0x288
	S3 = EMU_ReadU32(SP + 644); //+ 0x284
	S2 = EMU_ReadU32(SP + 640); //+ 0x280
	S1 = EMU_ReadU32(SP + 636); //+ 0x27C
	S0 = EMU_ReadU32(SP + 632); //+ 0x278
	SP += 656;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x800349BC,ZZ_348EC_D0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003578C,0x800357EC,ZZ_3578C);
ZZ_MARK_TARGET(0x800357EC,0x800357F0,ZZ_3578C_60);
ZZ_MARK_TARGET(0x800357F0,0x80035808,ZZ_3578C_64);
ZZ_MARK_TARGET(0x80035808,0x80035818,ZZ_3578C_7C);
ZZ_MARK_TARGET(0x80035818,0x80035880,ZZ_3578C_8C);
ZZ_MARK_TARGET(0x80035880,0x80035890,ZZ_3578C_F4);
ZZ_MARK_TARGET(0x80035890,0x80035898,ZZ_3578C_104);
ZZ_MARK_TARGET(0x80035898,0x800358A0,ZZ_3578C_10C);
ZZ_MARK_TARGET(0x800358A0,0x800358AC,ZZ_3578C_114);
ZZ_MARK_TARGET(0x800358AC,0x800358C4,ZZ_3578C_120);
ZZ_MARK_TARGET(0x800358C4,0x800358D8,ZZ_3578C_138);
ZZ_MARK_TARGET(0x800358D8,0x800358E8,ZZ_3578C_14C);
ZZ_MARK_TARGET(0x800358E8,0x800358F0,ZZ_3578C_15C);
ZZ_MARK_TARGET(0x800358F0,0x800358F4,ZZ_3578C_164);
ZZ_MARK_TARGET(0x800358F4,0x80035904,ZZ_3578C_168);
ZZ_MARK_TARGET(0x80035904,0x80035908,ZZ_3578C_178);
ZZ_MARK_TARGET(0x80035908,0x80035950,ZZ_3578C_17C);
ZZ_MARK_TARGET(0x80035950,0x80035958,ZZ_3578C_1C4);
ZZ_MARK_TARGET(0x80035958,0x8003598C,ZZ_3578C_1CC);
ZZ_MARK_TARGET(0x8003598C,0x800359C0,ZZ_3578C_200);
ZZ_MARK_TARGET(0x800359C0,0x800359C4,ZZ_3578C_234);
ZZ_MARK_TARGET(0x800359C4,0x800359D0,ZZ_3578C_238);
ZZ_MARK_TARGET(0x800359D0,0x800359F8,ZZ_3578C_244);
ZZ_MARK_TARGET(0x800359F8,0x80035A10,ZZ_3578C_26C);
ZZ_MARK_TARGET(0x80035A10,0x80035A20,ZZ_3578C_284);
ZZ_MARK_TARGET(0x80035A20,0x80035A28,ZZ_3578C_294);
ZZ_MARK_TARGET(0x80035A28,0x80035A34,ZZ_3578C_29C);
ZZ_MARK_TARGET(0x80035A34,0x80035A4C,ZZ_3578C_2A8);
ZZ_MARK_TARGET(0x80035A4C,0x80035A64,ZZ_3578C_2C0);
ZZ_MARK_TARGET(0x80035A64,0x80035A80,ZZ_3578C_2D8);
ZZ_MARK_TARGET(0x80035A80,0x80035A88,ZZ_3578C_2F4);
ZZ_MARK_TARGET(0x80035A88,0x80035A98,ZZ_3578C_2FC);
ZZ_MARK_TARGET(0x80035A98,0x80035AA0,ZZ_3578C_30C);
ZZ_MARK_TARGET(0x80035AA0,0x80035AB0,ZZ_3578C_314);
ZZ_MARK_TARGET(0x80035AB0,0x80035AB4,ZZ_3578C_324);
ZZ_MARK_TARGET(0x80035AB4,0x80035AB8,ZZ_3578C_328);
ZZ_MARK_TARGET(0x80035AB8,0x80035AC0,ZZ_3578C_32C);
ZZ_MARK_TARGET(0x80035AC0,0x80035AD8,ZZ_3578C_334);
ZZ_MARK_TARGET(0x80035AD8,0x80035AF0,ZZ_3578C_34C);
ZZ_MARK_TARGET(0x80035AF0,0x80035AFC,ZZ_3578C_364);
ZZ_MARK_TARGET(0x80035AFC,0x80035B40,ZZ_3578C_370);
ZZ_MARK_TARGET(0x80035B40,0x80035B4C,ZZ_3578C_3B4);
ZZ_MARK_TARGET(0x80035B4C,0x80035B7C,ZZ_3578C_3C0);
ZZ_MARK_TARGET(0x80035B7C,0x80035B9C,ZZ_3578C_3F0);
ZZ_MARK_TARGET(0x80035B9C,0x80035BBC,ZZ_3578C_410);
ZZ_MARK_TARGET(0x80035BBC,0x80035BCC,ZZ_3578C_430);
ZZ_MARK_TARGET(0x80035BCC,0x80035BE4,ZZ_3578C_440);
ZZ_MARK_TARGET(0x80035BE4,0x80035BF8,ZZ_3578C_458);
ZZ_MARK_TARGET(0x80035BF8,0x80035C0C,ZZ_3578C_46C);
ZZ_MARK_TARGET(0x80035C0C,0x80035C10,ZZ_3578C_480);
ZZ_MARK_TARGET(0x80035C10,0x80035C20,ZZ_3578C_484);
ZZ_MARK_TARGET(0x80035C20,0x80035C38,ZZ_3578C_494);
ZZ_MARK_TARGET(0x80035C38,0x80035C4C,ZZ_3578C_4AC);
ZZ_MARK_TARGET(0x80035C4C,0x80035C64,ZZ_3578C_4C0);
ZZ_MARK_TARGET(0x80035C64,0x80035C70,ZZ_3578C_4D8);
ZZ_MARK_TARGET(0x80035C70,0x80035C7C,ZZ_3578C_4E4);
ZZ_MARK_TARGET(0x80035C7C,0x80035C80,ZZ_3578C_4F0);
ZZ_MARK_TARGET(0x80035C80,0x80035C90,ZZ_3578C_4F4);
ZZ_MARK_TARGET(0x80035C90,0x80035CA8,ZZ_3578C_504);
ZZ_MARK_TARGET(0x80035CA8,0x80035CBC,ZZ_3578C_51C);
ZZ_MARK_TARGET(0x80035CBC,0x80035CE4,ZZ_3578C_530);
ZZ_MARK_TARGET(0x80035CE4,0x80035CF0,ZZ_3578C_558);
ZZ_MARK_TARGET(0x80035CF0,0x80035CF8,ZZ_3578C_564);
ZZ_MARK_TARGET(0x80035CF8,0x80035D00,ZZ_3578C_56C);
ZZ_MARK_TARGET(0x80035D00,0x80035D08,ZZ_3578C_574);
ZZ_MARK_TARGET(0x80035D08,0x80035D10,ZZ_3578C_57C);
ZZ_MARK_TARGET(0x80035D10,0x80035D34,ZZ_3578C_584);
