#ifdef ZZ_INCLUDE_CODE
ZZ_304C8:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6420); //+ 0x1914
	SP -= 120;
	EMU_Write32(SP + 104,S2); //+ 0x68
	S2 = A0;
	EMU_Write32(SP + 100,S1); //+ 0x64
	S1 = A1;
	EMU_Write32(SP + 112,S4); //+ 0x70
	S4 = A2;
	EMU_Write32(SP + 116,RA); //+ 0x74
	EMU_Write32(SP + 108,S3); //+ 0x6C
	if (!V0)
	{
		EMU_Write32(SP + 96,S0); //+ 0x60
		ZZ_CLOCKCYCLES(13,0x8003081C);
		goto ZZ_304C8_354;
	}
	EMU_Write32(SP + 96,S0); //+ 0x60
	RA = 0x80030504; //ZZ_304C8_3C
	ZZ_CLOCKCYCLES(15,0x80030328);
	goto ZZ_30328;
ZZ_304C8_3C:
	S3 = V0;
	if ((int32_t)S3 <= 0)
	{
		V0 = S3 << 4;
		ZZ_CLOCKCYCLES(3,0x80030818);
		goto ZZ_304C8_350;
	}
	V0 = S3 << 4;
	V0 += S3;
	V0 <<= 2;
	V1 = 0x80050000;
	V1 += 26628;
	S0 = V0 + V1;
	V0 = S1 & 0x1;
	if (!V0)
	{
		V0 = -2;
		ZZ_CLOCKCYCLES(11,0x80030538);
		goto ZZ_304C8_70;
	}
	V0 = -2;
	S1 &= V0;
	ZZ_CLOCKCYCLES(13,0x8003055C);
	goto ZZ_304C8_94;
ZZ_304C8_70:
	RA = 0x80030540; //ZZ_304C8_78
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x80015A98);
	goto ZZ_15A98;
ZZ_304C8_78:
	V1 = V0;
	V0 = (int32_t)V1 < -254;
	if (V0)
	{
		V0 = V1 << 1;
		ZZ_CLOCKCYCLES(4,0x80030558);
		goto ZZ_304C8_90;
	}
	V0 = V1 << 1;
	V0 = -1;
	ZZ_CLOCKCYCLES(6,0x8003081C);
	goto ZZ_304C8_354;
ZZ_304C8_90:
	S1 = V0 >> 3;
	ZZ_CLOCKCYCLES(1,0x8003055C);
ZZ_304C8_94:
	A3 = S0 + 4;
	A2 = 0x80050000;
	A2 += 28284;
	T0 = A2 + 64;
	ZZ_CLOCKCYCLES(4,0x8003056C);
ZZ_304C8_A4:
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	A1 = EMU_ReadU32(A2 + 12); //+ 0xC
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	EMU_Write32(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T0)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(11,0x8003056C);
		goto ZZ_304C8_A4;
	}
	A3 += 16;
	V0 = EMU_ReadS16(GP + 584); //+ 0x248
	EMU_SMultiply(S4,V0);
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V1 &= 0x40;
	V0 = LO;
	V0 = (int32_t)V0 >> 14;
	if (!V1)
	{
		EMU_Write16(S0 + 18,V0); //+ 0x12
		ZZ_CLOCKCYCLES(21,0x80030608);
		goto ZZ_304C8_140;
	}
	EMU_Write16(S0 + 18,V0); //+ 0x12
	V1 = V0 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = EMU_ReadS16(S0 + 48); //+ 0x30
	A0 = EMU_ReadU32(S0 + 52); //+ 0x34
	V0 = V0 - V1;
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(29,0x800305E4);
		goto ZZ_304C8_11C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(30,0x800305E4);
ZZ_304C8_11C:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x800305FC);
		goto ZZ_304C8_134;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x800305FC);
		goto ZZ_304C8_134;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x800305FC);
ZZ_304C8_134:
	V0 = LO;
	EMU_Write32(S0 + 56,V0); //+ 0x38
	ZZ_CLOCKCYCLES(3,0x80030608);
ZZ_304C8_140:
	if (!S2)
	{
		EMU_Write32(S0 + 12,S2); //+ 0xC
		ZZ_CLOCKCYCLES(2,0x80030650);
		goto ZZ_304C8_188;
	}
	EMU_Write32(S0 + 12,S2); //+ 0xC
	V0 = EMU_ReadU32(S2 + 128); //+ 0x80
	V1 = EMU_ReadU32(S2 + 132); //+ 0x84
	A0 = EMU_ReadU32(S2 + 136); //+ 0x88
	EMU_Write32(S0 + 36,V0); //+ 0x24
	EMU_Write32(S0 + 40,V1); //+ 0x28
	EMU_Write32(S0 + 44,A0); //+ 0x2C
	A0 = S2 + 128;
	A1 = SP + 80;
	RA = 0x80030638; //ZZ_304C8_170
	A2 = 0x1;
	ZZ_CLOCKCYCLES(12,0x800248A0);
	goto ZZ_248A0;
ZZ_304C8_170:
	V0 = EMU_ReadU32(SP + 80); //+ 0x50
	V1 = EMU_ReadU32(SP + 84); //+ 0x54
	A0 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_Write32(S0 + 24,V0); //+ 0x18
	EMU_Write32(S0 + 28,V1); //+ 0x1C
	EMU_Write32(S0 + 32,A0); //+ 0x20
	ZZ_CLOCKCYCLES(6,0x80030650);
ZZ_304C8_188:
	V0 = 0x1;
	AT = 0x80050000;
	EMU_Write8(AT + 28296,V0); //+ 0x6E88
	V0 = 0x80;
	AT = 0x80050000;
	EMU_Write8(AT + 28297,V0); //+ 0x6E89
	V0 = 0x3FFF;
	AT = 0x80050000;
	EMU_Write16(AT + 28298,V0); //+ 0x6E8A
	V0 = 0x1000;
	AT = 0x80050000;
	EMU_Write16(AT + 28302,V0); //+ 0x6E8E
	V0 = 0xFF93;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = 0x1;
	V0 <<= S3;
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 28284); //+ 0x6E7C
	V1 = -3;
	AT = 0x80050000;
	EMU_Write32(AT + 28292,R0); //+ 0x6E84
	AT = 0x80050000;
	EMU_Write16(AT + 28300,R0); //+ 0x6E8C
	AT = 0x80050000;
	EMU_Write32(AT + 28304,R0); //+ 0x6E90
	AT = 0x80050000;
	EMU_Write32(AT + 28308,R0); //+ 0x6E94
	AT = 0x80050000;
	EMU_Write32(AT + 28312,R0); //+ 0x6E98
	V0 &= V1;
	V1 = -2;
	V0 &= V1;
	V1 = -5;
	V0 &= V1;
	V1 = -9;
	V0 &= V1;
	V1 = -17;
	V0 &= V1;
	V1 = -33;
	V0 &= V1;
	V1 = -65;
	V0 &= V1;
	V1 = -129;
	V0 &= V1;
	V1 = -257;
	V0 &= V1;
	V0 |= 0x600;
	V1 = -2049;
	V0 &= V1;
	AT = 0x80050000;
	EMU_Write32(AT + 28284,V0); //+ 0x6E7C
	V0 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 = EMU_ReadU32(V0 + 204); //+ 0xCC
	V0 &= 0x200;
	if (!V0)
	{
		V1 = -513;
		ZZ_CLOCKCYCLES(59,0x80030760);
		goto ZZ_304C8_298;
	}
	V1 = -513;
	V0 = EMU_ReadU16(S0 + 18); //+ 0x12
	EMU_Write16(SP + 26,V0); //+ 0x1A
	EMU_Write16(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 &= V1;
	EMU_Write32(S0 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(68,0x80030780);
	goto ZZ_304C8_2B8;
ZZ_304C8_298:
	A1 = EMU_ReadS16(S0 + 18); //+ 0x12
	RA = 0x8003076C; //ZZ_304C8_2A4
	A0 = S0 + 24;
	ZZ_CLOCKCYCLES(3,0x80030078);
	goto ZZ_30078;
ZZ_304C8_2A4:
	EMU_ReadLeft(V0 + 3,&V1); //+ 0x3
	EMU_ReadRight(V0,&V1);
	EMU_WriteLeft(SP + 27,V1); //+ 0x1B
	EMU_WriteRight(SP + 24,V1); //+ 0x18
	ZZ_CLOCKCYCLES(5,0x80030780);
ZZ_304C8_2B8:
	A0 = SP + 16;
	V1 = EMU_ReadU16(S0 + 22); //+ 0x16
	V0 = 0x1;
	EMU_Write32(SP + 52,V0); //+ 0x34
	EMU_Write32(SP + 56,V0); //+ 0x38
	V0 = 0x3;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	V0 = 0xF;
	EMU_Write32(SP + 44,S1); //+ 0x2C
	EMU_Write16(SP + 64,R0); //+ 0x40
	EMU_Write16(SP + 66,R0); //+ 0x42
	EMU_Write16(SP + 68,R0); //+ 0x44
	EMU_Write16(SP + 70,R0); //+ 0x46
	EMU_Write16(SP + 72,V0); //+ 0x48
	RA = 0x800307C0; //ZZ_304C8_2F8
	EMU_Write16(SP + 36,V1); //+ 0x24
	ZZ_CLOCKCYCLES(16,0x80047F5C);
	goto ZZ_47F5C;
ZZ_304C8_2F8:
	A0 = EMU_ReadU32(S0 + 4); //+ 0x4
	A1 = EMU_ReadU32(SP + 16); //+ 0x10
	A0 >>= 10;
	RA = 0x800307D4; //ZZ_304C8_30C
	A0 &= 0x1;
	ZZ_CLOCKCYCLES(5,0x80047C60);
	goto ZZ_47C60;
ZZ_304C8_30C:
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 &= 0x10;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x800307F4);
		goto ZZ_304C8_32C;
	}
	A1 = EMU_ReadU32(SP + 16); //+ 0x10
	RA = 0x800307F4; //ZZ_304C8_32C
	A0 = 0x1;
	ZZ_CLOCKCYCLES(8,0x80047EE4);
	goto ZZ_47EE4;
ZZ_304C8_32C:
	A0 = EMU_ReadU32(GP + 576); //+ 0x240
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	A0 += 1;
	EMU_Write32(S0,A0);
	V0 = EMU_ReadU32(S0);
	V1 |= 0x8;
	EMU_Write32(GP + 576,A0); //+ 0x240
	EMU_Write32(S0 + 4,V1); //+ 0x4
	ZZ_CLOCKCYCLES(9,0x8003081C);
	goto ZZ_304C8_354;
ZZ_304C8_350:
	V0 = -1;
	ZZ_CLOCKCYCLES(1,0x8003081C);
ZZ_304C8_354:
	RA = EMU_ReadU32(SP + 116); //+ 0x74
	S4 = EMU_ReadU32(SP + 112); //+ 0x70
	S3 = EMU_ReadU32(SP + 108); //+ 0x6C
	S2 = EMU_ReadU32(SP + 104); //+ 0x68
	S1 = EMU_ReadU32(SP + 100); //+ 0x64
	S0 = EMU_ReadU32(SP + 96); //+ 0x60
	SP += 120;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	//ZZ_JUMPREGISTER(0x80023F24,ZZ_201DC_3D48);
	ZZ_JUMPREGISTER(0x8002F694,ZZ_2EC68_A2C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800304C8,0x80030504,ZZ_304C8);
ZZ_MARK_TARGET(0x80030504,0x80030538,ZZ_304C8_3C);
ZZ_MARK_TARGET(0x80030538,0x80030540,ZZ_304C8_70);
ZZ_MARK_TARGET(0x80030540,0x80030558,ZZ_304C8_78);
ZZ_MARK_TARGET(0x80030558,0x8003055C,ZZ_304C8_90);
ZZ_MARK_TARGET(0x8003055C,0x8003056C,ZZ_304C8_94);
ZZ_MARK_TARGET(0x8003056C,0x800305E4,ZZ_304C8_A4);
ZZ_MARK_TARGET(0x800305E4,0x800305FC,ZZ_304C8_11C);
ZZ_MARK_TARGET(0x800305FC,0x80030608,ZZ_304C8_134);
ZZ_MARK_TARGET(0x80030608,0x80030638,ZZ_304C8_140);
ZZ_MARK_TARGET(0x80030638,0x80030650,ZZ_304C8_170);
ZZ_MARK_TARGET(0x80030650,0x80030760,ZZ_304C8_188);
ZZ_MARK_TARGET(0x80030760,0x8003076C,ZZ_304C8_298);
ZZ_MARK_TARGET(0x8003076C,0x80030780,ZZ_304C8_2A4);
ZZ_MARK_TARGET(0x80030780,0x800307C0,ZZ_304C8_2B8);
ZZ_MARK_TARGET(0x800307C0,0x800307D4,ZZ_304C8_2F8);
ZZ_MARK_TARGET(0x800307D4,0x800307F4,ZZ_304C8_30C);
ZZ_MARK_TARGET(0x800307F4,0x80030818,ZZ_304C8_32C);
ZZ_MARK_TARGET(0x80030818,0x8003081C,ZZ_304C8_350);
ZZ_MARK_TARGET(0x8003081C,0x80030840,ZZ_304C8_354);