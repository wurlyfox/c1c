#ifdef ZZ_INCLUDE_CODE
ZZ_3322C:
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12756); //+ 0xFFFFCE2C
	SP -= 200;
	EMU_Write32(SP + 168,S2); //+ 0xA8
	S2 = A0;
	EMU_Write32(SP + 184,S6); //+ 0xB8
	S6 = A1;
	EMU_Write32(SP + 164,S1); //+ 0xA4
	S1 = A2;
	EMU_Write32(SP + 192,FP); //+ 0xC0
	FP = A3;
	EMU_Write32(SP + 196,RA); //+ 0xC4
	EMU_Write32(SP + 188,S7); //+ 0xBC
	EMU_Write32(SP + 180,S5); //+ 0xB4
	EMU_Write32(SP + 176,S4); //+ 0xB0
	EMU_Write32(SP + 172,S3); //+ 0xAC
	V0 &= 0x1000;
	if (V0)
	{
		EMU_Write32(SP + 160,S0); //+ 0xA0
		ZZ_CLOCKCYCLES(19,0x8003328C);
		goto ZZ_3322C_60;
	}
	EMU_Write32(SP + 160,S0); //+ 0xA0
	V0 = EMU_ReadU32(FP + 256); //+ 0x100
	V1 = 0x100000;
	V0 &= V1;
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(24,0x80033730);
		goto ZZ_3322C_504;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(24,0x8003328C);
ZZ_3322C_60:
	S3 = EMU_ReadU32(GP + 392); //+ 0x188
	V1 = 0x80060000;
	V1 -= 2172;
	V0 = S3 << 2;
	V0 += S3;
	V0 <<= 4;
	S5 = V0 + V1;
	V0 = (int32_t)S3 < 24;
	if (!V0)
	{
		V0 = 0xFFF0000;
		ZZ_CLOCKCYCLES(10,0x80033728);
		goto ZZ_3322C_4FC;
	}
	V0 = 0xFFF0000;
	V0 |= 0xFFFF;
	S7 = S6 & V0;
	T0 = S7 << 2;
	EMU_Write32(SP + 152,T0); //+ 0x98
	S4 = S5 + 36;
	ZZ_CLOCKCYCLES(15,0x800332C8);
ZZ_3322C_9C:
	if (!S2)
	{
		V0 = S2 + 2;
		ZZ_CLOCKCYCLES(2,0x800332EC);
		goto ZZ_3322C_C0;
	}
	V0 = S2 + 2;
	V0 = V0 < 2;
	if (V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(5,0x800332F0);
		goto ZZ_3322C_C4;
	}
	V0 = -1;
	V0 = EMU_ReadU32(S5);
	if (V0 != S2)
	{
		ZZ_CLOCKCYCLES(9,0x80033714);
		goto ZZ_3322C_4E8;
	}
	ZZ_CLOCKCYCLES(9,0x800332EC);
ZZ_3322C_C0:
	V0 = -1;
	ZZ_CLOCKCYCLES(1,0x800332F0);
ZZ_3322C_C4:
	if (S2 != V0)
	{
		ZZ_CLOCKCYCLES(2,0x80033308);
		goto ZZ_3322C_DC;
	}
	V0 = EMU_ReadU32(S4 - 24); //+ 0xFFFFFFE8
	if (V0 != FP)
	{
		ZZ_CLOCKCYCLES(6,0x80033714);
		goto ZZ_3322C_4E8;
	}
	ZZ_CLOCKCYCLES(6,0x80033308);
ZZ_3322C_DC:
	S0 = 0x80060000;
	S0 -= 228;
	if (!S2)
	{
		ZZ_CLOCKCYCLES(4,0x8003332C);
		goto ZZ_3322C_100;
	}
	V0 = EMU_ReadU32(S4 - 32); //+ 0xFFFFFFE0
	V0 &= 0x8;
	if (!V0)
	{
		S0 = S5 + 4;
		ZZ_CLOCKCYCLES(9,0x80033714);
		goto ZZ_3322C_4E8;
	}
	S0 = S5 + 4;
	ZZ_CLOCKCYCLES(9,0x8003332C);
ZZ_3322C_100:
	if ((int32_t)S6 >= 0)
	{
		V0 = 0x40000000;
		ZZ_CLOCKCYCLES(2,0x80033348);
		goto ZZ_3322C_11C;
	}
	V0 = 0x40000000;
	V0 = EMU_ReadU32(S0);
	V0 |= 0x1;
	EMU_Write32(S0,V0);
	V0 = 0x40000000;
	ZZ_CLOCKCYCLES(7,0x80033348);
ZZ_3322C_11C:
	V0 &= S6;
	if (!V0)
	{
		V0 = 0x20000000;
		ZZ_CLOCKCYCLES(3,0x80033368);
		goto ZZ_3322C_13C;
	}
	V0 = 0x20000000;
	V0 = EMU_ReadU32(S0);
	V0 |= 0x2;
	EMU_Write32(S0,V0);
	V0 = 0x20000000;
	ZZ_CLOCKCYCLES(8,0x80033368);
ZZ_3322C_13C:
	V0 &= S6;
	if (!V0)
	{
		V0 = S7 < 15;
		ZZ_CLOCKCYCLES(3,0x80033388);
		goto ZZ_3322C_15C;
	}
	V0 = S7 < 15;
	V0 = EMU_ReadU32(S0);
	V0 |= 0x4;
	EMU_Write32(S0,V0);
	V0 = S7 < 15;
	ZZ_CLOCKCYCLES(8,0x80033388);
ZZ_3322C_15C:
	if (!V0)
	{
		EMU_Write32(SP + 20,R0); //+ 0x14
		ZZ_CLOCKCYCLES(2,0x800336EC);
		goto ZZ_3322C_4C0;
	}
	EMU_Write32(SP + 20,R0); //+ 0x14
	T0 = EMU_ReadU32(SP + 152); //+ 0x98
	AT = 0x80010000;
	AT += T0;
	V0 = EMU_ReadU32(AT + 1424); //+ 0x590
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x800333AC,ZZ_3322C_180);
	ZZ_JUMPREGISTER(0x80033454,ZZ_3322C_228);
	ZZ_JUMPREGISTER(0x80033514,ZZ_3322C_2E8);
	ZZ_JUMPREGISTER(0x8003353C,ZZ_3322C_310);
	ZZ_JUMPREGISTER(0x800335D4,ZZ_3322C_3A8);
	ZZ_JUMPREGISTER(0x800335E0,ZZ_3322C_3B4);
	ZZ_JUMPREGISTER(0x80033640,ZZ_3322C_414);
	ZZ_JUMPREGISTER(0x80033660,ZZ_3322C_434);
	ZZ_JUMPREGISTER(0x80033678,ZZ_3322C_44C);
	ZZ_JUMPREGISTER(0x8003368C,ZZ_3322C_460);
	ZZ_JUMPREGISTER(0x800336A0,ZZ_3322C_474);
	ZZ_JUMPREGISTER(0x800336BC,ZZ_3322C_490);
	ZZ_JUMPREGISTER(0x800336E0,ZZ_3322C_4B4);
	ZZ_JUMPREGISTER(0x80033618,ZZ_3322C_3EC);
	ZZ_JUMPREGISTER(0x800335EC,ZZ_3322C_3C0);
	ZZ_JUMPREGISTER_END();
ZZ_3322C_180:
	V0 = EMU_ReadU32(S0);
	V0 &= 0x4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8003342C);
		goto ZZ_3322C_200;
	}
	V0 = EMU_ReadU32(S1);
	A0 = EMU_ReadU32(GP + 200); //+ 0xC8
	EMU_Write16(S0 + 56,V0); //+ 0x38
	if (!S2)
	{
		EMU_Write32(S0 + 60,A0); //+ 0x3C
		ZZ_CLOCKCYCLES(10,0x80033418);
		goto ZZ_3322C_1EC;
	}
	EMU_Write32(S0 + 60,A0); //+ 0x3C
	V0 = EMU_ReadS16(S0 + 56); //+ 0x38
	V1 = EMU_ReadS16(S0 + 26); //+ 0x1A
	V0 = V0 - V1;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(17,0x800333F4);
		goto ZZ_3322C_1C8;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(18,0x800333F4);
ZZ_3322C_1C8:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8003340C);
		goto ZZ_3322C_1E0;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8003340C);
		goto ZZ_3322C_1E0;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8003340C);
ZZ_3322C_1E0:
	V0 = LO;
	EMU_Write32(S0 + 64,V0); //+ 0x40
	ZZ_CLOCKCYCLES(3,0x80033418);
ZZ_3322C_1EC:
	V0 = EMU_ReadU32(S0);
	V0 |= 0x40;
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(5,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_200:
	V0 = EMU_ReadU32(S1);
	if (!S2)
	{
		EMU_Write16(S0 + 26,V0); //+ 0x1A
		ZZ_CLOCKCYCLES(3,0x800336EC);
		goto ZZ_3322C_4C0;
	}
	EMU_Write16(S0 + 26,V0); //+ 0x1A
	V0 = EMU_ReadU32(SP + 20); //+ 0x14
	V0 |= 0x3;
	EMU_Write32(SP + 20,V0); //+ 0x14
	A1 = EMU_ReadS16(S0 + 26); //+ 0x1A
	A0 = S0 + 32;
	ZZ_CLOCKCYCLES(10,0x800335B0);
	goto ZZ_3322C_384;
ZZ_3322C_228:
	V0 = EMU_ReadU32(S0);
	V0 &= 0x4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x800334C8);
		goto ZZ_3322C_29C;
	}
	V0 = EMU_ReadU32(S1);
	EMU_Write16(S0 + 58,V0); //+ 0x3A
	A0 = EMU_ReadU16(S0 + 58); //+ 0x3A
	V0 = EMU_ReadU16(S0 + 30); //+ 0x1E
	V1 = EMU_ReadU32(GP + 200); //+ 0xC8
	A0 = A0 - V0;
	EMU_SDivide(A0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(15,0x80033494);
		goto ZZ_3322C_268;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(16,0x80033494);
ZZ_3322C_268:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x800334AC);
		goto ZZ_3322C_280;
	}
	AT = 0x80000000;
	if (A0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x800334AC);
		goto ZZ_3322C_280;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x800334AC);
ZZ_3322C_280:
	A0 = LO;
	V0 = EMU_ReadU32(S0);
	EMU_Write32(S0 + 68,V1); //+ 0x44
	V0 |= 0x80;
	EMU_Write32(S0,V0);
	EMU_Write32(S0 + 72,A0); //+ 0x48
	ZZ_CLOCKCYCLES(7,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_29C:
	V0 = EMU_ReadU32(S1);
	if (!S2)
	{
		EMU_Write16(S0 + 30,V0); //+ 0x1E
		ZZ_CLOCKCYCLES(3,0x800336EC);
		goto ZZ_3322C_4C0;
	}
	EMU_Write16(S0 + 30,V0); //+ 0x1E
	V0 = 0x10;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V1 = EMU_ReadU16(S0 + 30); //+ 0x1E
	V0 = V1 << 5;
	V0 += V1;
	V0 <<= 3;
	V0 = V0 - V1;
	V0 <<= 4;
	V0 += V1;
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(15,0x80033508);
		goto ZZ_3322C_2DC;
	}
	V0 += 4095;
	ZZ_CLOCKCYCLES(16,0x80033508);
ZZ_3322C_2DC:
	V0 = (int32_t)V0 >> 12;
	EMU_Write16(SP + 36,V0); //+ 0x24
	ZZ_CLOCKCYCLES(3,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_2E8:
	V0 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	EMU_Write32(SP + 120,V0); //+ 0x78
	EMU_Write32(SP + 124,V1); //+ 0x7C
	EMU_Write32(SP + 128,A0); //+ 0x80
	A0 = SP + 120;
	A1 = S1;
	RA = 0x8003353C; //ZZ_3322C_310
	A2 = 0x1;
	ZZ_CLOCKCYCLES(10,0x8001EE74);
	goto ZZ_1EE74;
ZZ_3322C_310:
	V0 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	EMU_Write32(SP + 136,V0); //+ 0x88
	EMU_Write32(SP + 140,V1); //+ 0x8C
	EMU_Write32(SP + 144,A0); //+ 0x90
	V0 = EMU_ReadU32(S0);
	V0 &= 0x4;
	if (V0)
	{
		ZZ_CLOCKCYCLES(11,0x800336EC);
		goto ZZ_3322C_4C0;
	}
	V0 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	EMU_Write32(S0 + 32,V0); //+ 0x20
	EMU_Write32(S0 + 36,V1); //+ 0x24
	EMU_Write32(S0 + 40,A0); //+ 0x28
	if (!S2)
	{
		A2 = S0 + 32;
		ZZ_CLOCKCYCLES(19,0x800336EC);
		goto ZZ_3322C_4C0;
	}
	A2 = S0 + 32;
	V0 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	EMU_Write32(S4,V0);
	EMU_Write32(S4 + 4,V1); //+ 0x4
	EMU_Write32(S4 + 8,A0); //+ 0x8
	V0 = 0x3;
	EMU_Write32(SP + 20,V0); //+ 0x14
	A1 = EMU_ReadS16(S0 + 26); //+ 0x1A
	A0 = A2;
	ZZ_CLOCKCYCLES(29,0x800335B0);
ZZ_3322C_384:
	RA = 0x800335B8; //ZZ_3322C_38C
	ZZ_CLOCKCYCLES(2,0x80032958);
	goto ZZ_32958;
ZZ_3322C_38C:
	EMU_ReadLeft(V0 + 3,&V1); //+ 0x3
	EMU_ReadRight(V0,&V1);
	EMU_WriteLeft(SP + 27,V1); //+ 0x1B
	EMU_WriteRight(SP + 24,V1); //+ 0x18
	ZZ_CLOCKCYCLES(7,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_3A8:
	V0 = EMU_ReadU32(S1);
	EMU_Write8(S0 + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(3,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_3B4:
	V0 = EMU_ReadU32(S1);
	EMU_Write32(S0 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES(3,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_3C0:
	if (!S1)
	{
		V0 = 0x100;
		ZZ_CLOCKCYCLES(2,0x800336EC);
		goto ZZ_3322C_4C0;
	}
	V0 = 0x100;
	V1 = EMU_ReadU32(S1);
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x800336EC);
		goto ZZ_3322C_4C0;
	}
	V0 = EMU_ReadU32(S0);
	V0 &= 0x8010;
	V0 = V0 < 1;
	ZZ_CLOCKCYCLES(11,0x80033730);
	goto ZZ_3322C_504;
ZZ_3322C_3EC:
	if (!S1)
	{
		V1 = 0x63960000;
		ZZ_CLOCKCYCLES(2,0x8003362C);
		goto ZZ_3322C_400;
	}
	V1 = 0x63960000;
	V0 = EMU_ReadU32(S1);
	EMU_Write32(S0 + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(5,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_400:
	V0 = EMU_ReadU32(S0 + 16); //+ 0x10
	V1 |= 0x347F;
	V0 ^= V1;
	V0 = R0 < V0;
	ZZ_CLOCKCYCLES(5,0x80033730);
	goto ZZ_3322C_504;
ZZ_3322C_414:
	V0 = EMU_ReadU32(S1);
	EMU_Write32(GP + 200,V0); //+ 0xC8
	if (V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(5,0x800336EC);
		goto ZZ_3322C_4C0;
	}
	V0 = 0x1;
	EMU_Write32(GP + 200,V0); //+ 0xC8
	ZZ_CLOCKCYCLES(8,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_434:
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S1);
	V0 |= 0x10;
	EMU_Write16(S0 + 28,V1); //+ 0x1C
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(6,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_44C:
	V0 = EMU_ReadU32(S0);
	V0 |= 0x200;
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(5,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_460:
	V0 = EMU_ReadU32(S0);
	V1 = -513;
	V0 &= V1;
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(5,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_474:
	A0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S1);
	V0 = -2049;
	A0 &= V0;
	V1 <<= 3;
	V1 &= 0x800;
	ZZ_CLOCKCYCLES(7,0x800336D4);
	goto ZZ_3322C_4A8;
ZZ_3322C_490:
	A0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S1);
	V0 = -1025;
	A0 &= V0;
	V1 <<= 2;
	V1 &= 0x400;
	ZZ_CLOCKCYCLES(6,0x800336D4);
ZZ_3322C_4A8:
	A0 |= V1;
	EMU_Write32(S0,A0);
	ZZ_CLOCKCYCLES(3,0x800336EC);
	goto ZZ_3322C_4C0;
ZZ_3322C_4B4:
	V0 = EMU_ReadU32(S1);
	EMU_Write8(S0 + 25,V0); //+ 0x19
	ZZ_CLOCKCYCLES(3,0x800336EC);
ZZ_3322C_4C0:
	V0 = EMU_ReadU32(SP + 20); //+ 0x14
	if (!V0)
	{
		V0 = 0x1;
		ZZ_CLOCKCYCLES(4,0x8003370C);
		goto ZZ_3322C_4E0;
	}
	V0 = 0x1;
	V0 <<= S3;
	EMU_Write32(SP + 16,V0); //+ 0x10
	RA = 0x8003370C; //ZZ_3322C_4E0
	A0 = SP + 16;
	ZZ_CLOCKCYCLES(8,0x80051B50);
	goto ZZ_51B50;
ZZ_3322C_4E0:
	if ((int32_t)S2 >= 0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x80033730);
		goto ZZ_3322C_504;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x80033714);
ZZ_3322C_4E8:
	S3 += 1;
	S4 += 80;
	V0 = (int32_t)S3 < 24;
	if (V0)
	{
		S5 += 80;
		ZZ_CLOCKCYCLES(5,0x800332C8);
		goto ZZ_3322C_9C;
	}
	S5 += 80;
	ZZ_CLOCKCYCLES(5,0x80033728);
ZZ_3322C_4FC:
	V0 = ~S2;
	V0 = (int32_t)V0 >> 31;
	ZZ_CLOCKCYCLES(2,0x80033730);
ZZ_3322C_504:
	RA = EMU_ReadU32(SP + 196); //+ 0xC4
	FP = EMU_ReadU32(SP + 192); //+ 0xC0
	S7 = EMU_ReadU32(SP + 188); //+ 0xBC
	S6 = EMU_ReadU32(SP + 184); //+ 0xB8
	S5 = EMU_ReadU32(SP + 180); //+ 0xB4
	S4 = EMU_ReadU32(SP + 176); //+ 0xB0
	S3 = EMU_ReadU32(SP + 172); //+ 0xAC
	S2 = EMU_ReadU32(SP + 168); //+ 0xA8
	S1 = EMU_ReadU32(SP + 164); //+ 0xA4
	S0 = EMU_ReadU32(SP + 160); //+ 0xA0
	SP += 200;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80039090,ZZ_38FA0_F0);
	ZZ_JUMPREGISTER(0x80032BA0,ZZ_32B14_8C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003322C,0x8003328C,ZZ_3322C);
ZZ_MARK_TARGET(0x8003328C,0x800332C8,ZZ_3322C_60);
ZZ_MARK_TARGET(0x800332C8,0x800332EC,ZZ_3322C_9C);
ZZ_MARK_TARGET(0x800332EC,0x800332F0,ZZ_3322C_C0);
ZZ_MARK_TARGET(0x800332F0,0x80033308,ZZ_3322C_C4);
ZZ_MARK_TARGET(0x80033308,0x8003332C,ZZ_3322C_DC);
ZZ_MARK_TARGET(0x8003332C,0x80033348,ZZ_3322C_100);
ZZ_MARK_TARGET(0x80033348,0x80033368,ZZ_3322C_11C);
ZZ_MARK_TARGET(0x80033368,0x80033388,ZZ_3322C_13C);
ZZ_MARK_TARGET(0x80033388,0x800333AC,ZZ_3322C_15C);
ZZ_MARK_TARGET(0x800333AC,0x800333F4,ZZ_3322C_180);
ZZ_MARK_TARGET(0x800333F4,0x8003340C,ZZ_3322C_1C8);
ZZ_MARK_TARGET(0x8003340C,0x80033418,ZZ_3322C_1E0);
ZZ_MARK_TARGET(0x80033418,0x8003342C,ZZ_3322C_1EC);
ZZ_MARK_TARGET(0x8003342C,0x80033454,ZZ_3322C_200);
ZZ_MARK_TARGET(0x80033454,0x80033494,ZZ_3322C_228);
ZZ_MARK_TARGET(0x80033494,0x800334AC,ZZ_3322C_268);
ZZ_MARK_TARGET(0x800334AC,0x800334C8,ZZ_3322C_280);
ZZ_MARK_TARGET(0x800334C8,0x80033508,ZZ_3322C_29C);
ZZ_MARK_TARGET(0x80033508,0x80033514,ZZ_3322C_2DC);
ZZ_MARK_TARGET(0x80033514,0x8003353C,ZZ_3322C_2E8);
ZZ_MARK_TARGET(0x8003353C,0x800335B0,ZZ_3322C_310);
ZZ_MARK_TARGET(0x800335B0,0x800335B8,ZZ_3322C_384);
ZZ_MARK_TARGET(0x800335B8,0x800335D4,ZZ_3322C_38C);
ZZ_MARK_TARGET(0x800335D4,0x800335E0,ZZ_3322C_3A8);
ZZ_MARK_TARGET(0x800335E0,0x800335EC,ZZ_3322C_3B4);
ZZ_MARK_TARGET(0x800335EC,0x80033618,ZZ_3322C_3C0);
ZZ_MARK_TARGET(0x80033618,0x8003362C,ZZ_3322C_3EC);
ZZ_MARK_TARGET(0x8003362C,0x80033640,ZZ_3322C_400);
ZZ_MARK_TARGET(0x80033640,0x80033660,ZZ_3322C_414);
ZZ_MARK_TARGET(0x80033660,0x80033678,ZZ_3322C_434);
ZZ_MARK_TARGET(0x80033678,0x8003368C,ZZ_3322C_44C);
ZZ_MARK_TARGET(0x8003368C,0x800336A0,ZZ_3322C_460);
ZZ_MARK_TARGET(0x800336A0,0x800336BC,ZZ_3322C_474);
ZZ_MARK_TARGET(0x800336BC,0x800336D4,ZZ_3322C_490);
ZZ_MARK_TARGET(0x800336D4,0x800336E0,ZZ_3322C_4A8);
ZZ_MARK_TARGET(0x800336E0,0x800336EC,ZZ_3322C_4B4);
ZZ_MARK_TARGET(0x800336EC,0x8003370C,ZZ_3322C_4C0);
ZZ_MARK_TARGET(0x8003370C,0x80033714,ZZ_3322C_4E0);
ZZ_MARK_TARGET(0x80033714,0x80033728,ZZ_3322C_4E8);
ZZ_MARK_TARGET(0x80033728,0x80033730,ZZ_3322C_4FC);
ZZ_MARK_TARGET(0x80033730,0x80033764,ZZ_3322C_504);
