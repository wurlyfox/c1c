#ifdef ZZ_INCLUDE_CODE
ZZ_5468C:
	SP -= 32;
	T4 = A0;
	T3 = A1;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = R0;
	T0 = R0;
	T2 = 64;
	T1 = 127;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 14;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = A1 << 1;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 16,S0); //+ 0x10
	AT = 0x80070000;
	AT += A0;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	S0 = V1 + V0;
	V1 = S0;
	V0 = 1;
	EMU_Write8(S0 + 32,V0); //+ 0x20
	V0 = 1;
	EMU_Write8(S0 + 21,R0); //+ 0x15
	EMU_Write8(S0 + 22,R0); //+ 0x16
	EMU_Write8(S0 + 23,R0); //+ 0x17
	EMU_Write8(S0 + 24,R0); //+ 0x18
	EMU_Write8(S0 + 25,R0); //+ 0x19
	EMU_Write8(S0 + 26,R0); //+ 0x1A
	EMU_Write8(S0 + 27,R0); //+ 0x1B
	EMU_Write8(S0 + 28,R0); //+ 0x1C
	EMU_Write8(S0 + 29,R0); //+ 0x1D
	EMU_Write8(S0 + 30,R0); //+ 0x1E
	EMU_Write8(S0 + 31,R0); //+ 0x1F
	EMU_Write8(S0 + 20,R0); //+ 0x14
	EMU_Write8(S0 + 33,R0); //+ 0x21
	EMU_Write16(S0 + 82,V0); //+ 0x52
	EMU_Write16(S0 + 80,R0); //+ 0x50
	EMU_Write8(S0 + 38,A2); //+ 0x26
	EMU_Write16(S0 + 86,R0); //+ 0x56
	EMU_Write32(S0 + 132,R0); //+ 0x84
	EMU_Write32(S0 + 136,R0); //+ 0x88
	EMU_Write32(S0 + 140,R0); //+ 0x8C
	EMU_Write32(S0 + 144,R0); //+ 0x90
	EMU_Write16(S0 + 128,R0); //+ 0x80
	EMU_Write8(S0 + 36,R0); //+ 0x24
	EMU_Write8(S0 + 37,R0); //+ 0x25
	ZZ_CLOCKCYCLES(52,0x8005475C);
ZZ_5468C_D0:
	V0 = S0 + T0;
	EMU_Write8(V0 + 39,T2); //+ 0x27
	EMU_Write8(V0 + 55,T0); //+ 0x37
	EMU_Write16(V1 + 96,T1); //+ 0x60
	T0 += 1;
	V0 = (int32_t)T0 < 16;
	if (V0)
	{
		V1 += 2;
		ZZ_CLOCKCYCLES(8,0x8005475C);
		goto ZZ_5468C_D0;
	}
	V1 += 2;
	V0 = T3 << 16;
	if (V0)
	{
		EMU_Write32(S0,A3);
		ZZ_CLOCKCYCLES(11,0x800547DC);
		goto ZZ_5468C_150;
	}
	EMU_Write32(S0,A3);
	V1 = EMU_ReadU8(A3);
	V0 = 83;
	if (V1 == V0)
	{
		V0 = 112;
		ZZ_CLOCKCYCLES(15,0x800547A0);
		goto ZZ_5468C_114;
	}
	V0 = 112;
	if (V1 != V0)
	{
		A1 = 0x3930000;
		ZZ_CLOCKCYCLES(17,0x800547EC);
		goto ZZ_5468C_160;
	}
	A1 = 0x3930000;
	ZZ_CLOCKCYCLES(17,0x800547A0);
ZZ_5468C_114:
	V0 = A3 + 6;
	EMU_Write32(S0,V0);
	V0 = EMU_ReadU8(A3 + 5); //+ 0x5
	if (!V0)
	{
		V0 = A3 + 8;
		ZZ_CLOCKCYCLES(6,0x800547D0);
		goto ZZ_5468C_144;
	}
	V0 = A3 + 8;
	A0 = 0x80010000;
	A0 += 4480;
	RA = 0x800547C8; //ZZ_5468C_13C
	ZZ_CLOCKCYCLES(10,0x800494DC);
	goto ZZ_494DC;
ZZ_5468C_13C:
	V0 = -1;
	ZZ_CLOCKCYCLES(2,0x80054A58);
	goto ZZ_5468C_3CC;
ZZ_5468C_144:
	EMU_Write32(S0,V0);
	S1 += 8;
	ZZ_CLOCKCYCLES(3,0x800547E8);
	goto ZZ_5468C_15C;
ZZ_5468C_150:
	V0 = A3 + 2;
	EMU_Write32(S0,V0);
	S1 += 2;
	ZZ_CLOCKCYCLES(3,0x800547E8);
ZZ_5468C_15C:
	A1 = 0x3930000;
	ZZ_CLOCKCYCLES(1,0x800547EC);
ZZ_5468C_160:
	V1 = EMU_ReadU32(S0);
	A1 |= 0x8700;
	V0 = V1 + 1;
	EMU_Write32(S0,V0);
	A2 = EMU_ReadU8(V1);
	V0 = V1 + 2;
	EMU_Write32(S0,V0);
	V0 = EMU_ReadU8(V1 + 1); //+ 0x1
	V1 = EMU_ReadU32(S0);
	A0 = A2 << 8;
	V0 |= A0;
	EMU_Write16(S0 + 80,V0); //+ 0x50
	V0 = V1 + 1;
	EMU_Write32(S0,V0);
	A3 = EMU_ReadU8(V1);
	V0 = V1 + 2;
	EMU_Write32(S0,V0);
	A0 = EMU_ReadU8(V1 + 1); //+ 0x1
	V0 = V1 + 3;
	EMU_Write32(S0,V0);
	V1 = EMU_ReadU8(V1 + 2); //+ 0x2
	V0 = A3 << 16;
	A0 <<= 8;
	V0 |= A0;
	V0 |= V1;
	EMU_SDivide(A1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(28,0x80054860);
		goto ZZ_5468C_1D4;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(29,0x80054860);
ZZ_5468C_1D4:
	AT = -1;
	if (V0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x80054878);
		goto ZZ_5468C_1EC;
	}
	AT = 0x80000000;
	if (A1 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x80054878);
		goto ZZ_5468C_1EC;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x80054878);
ZZ_5468C_1EC:
	A1 = LO;
	V1 = HI;
	EMU_Write32(S0 + 140,V0); //+ 0x8C
	V0 >>= 1;
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		S1 += 5;
		ZZ_CLOCKCYCLES(7,0x800548A0);
		goto ZZ_5468C_214;
	}
	S1 += 5;
	V0 = A1 + 1;
	EMU_Write32(S0 + 140,V0); //+ 0x8C
	ZZ_CLOCKCYCLES(10,0x800548A4);
	goto ZZ_5468C_218;
ZZ_5468C_214:
	EMU_Write32(S0 + 140,A1); //+ 0x8C
	ZZ_CLOCKCYCLES(1,0x800548A4);
ZZ_5468C_218:
	V0 = EMU_ReadU32(S0 + 140); //+ 0x8C
	V1 = EMU_ReadU32(S0);
	EMU_Write32(S0 + 148,V0); //+ 0x94
	V0 = V1 + 1;
	EMU_Write32(S0,V0);
	V0 = EMU_ReadU8(V1);
	V1 = EMU_ReadU32(S0);
	A0 = T4 << 16;
	EMU_Write8(S0 + 36,V0); //+ 0x24
	V0 = V1 + 1;
	EMU_Write32(S0,V0);
	V0 = EMU_ReadU8(V1);
	A1 = EMU_ReadU32(S0);
	A0 = (int32_t)A0 >> 16;
	EMU_Write8(S0 + 37,V0); //+ 0x25
	V0 = A1 + 1;
	EMU_Write32(S0,V0);
	A2 = EMU_ReadU8(A1);
	V0 = A1 + 2;
	EMU_Write32(S0,V0);
	V1 = EMU_ReadU8(A1 + 1); //+ 0x1
	V0 = A1 + 3;
	EMU_Write32(S0,V0);
	A3 = EMU_ReadU8(A1 + 2); //+ 0x2
	V0 = A1 + 4;
	EMU_Write32(S0,V0);
	A1 = EMU_ReadU8(A1 + 3); //+ 0x3
	V0 = A2 << 24;
	V1 <<= 16;
	V0 += V1;
	V1 = A3 << 8;
	V0 += V1;
	S2 = V0 + A1;
	A1 = T3 << 16;
	RA = 0x80054934; //ZZ_5468C_2A8
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(36,0x800545DC);
	goto ZZ_545DC;
ZZ_5468C_2A8:
	A0 = EMU_ReadS16(S0 + 80); //+ 0x50
	V1 = EMU_ReadU32(S0 + 140); //+ 0x8C
	A1 = EMU_ReadU32(S0);
	EMU_SMultiply(A0,V1);
	A0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S0);
	EMU_Write32(S0 + 8,A0); //+ 0x8
	A0 = 0x80070000;
	A0 = EMU_ReadU32(A0 - 19372); //+ 0xFFFFB454
	EMU_Write32(S0 + 132,V0); //+ 0x84
	EMU_Write32(S0 + 144,V0); //+ 0x90
	EMU_Write32(S0 + 16,R0); //+ 0x10
	EMU_Write32(S0 + 12,A1); //+ 0xC
	EMU_Write32(S0 + 4,V1); //+ 0x4
	V1 = A0 << 4;
	A3 = V1 - A0;
	A1 = A3 << 2;
	A2 = LO;
	V0 = A2 << 2;
	V0 += A2;
	V0 <<= 1;
	V0 = V0 < A1;
	if (!V0)
	{
		S1 += 6;
		ZZ_CLOCKCYCLES(24,0x800549C4);
		goto ZZ_5468C_338;
	}
	S1 += 6;
	V1 = A0 << 2;
	V1 += A0;
	V0 = V1 << 4;
	V0 = V0 - V1;
	V0 <<= 3;
	EMU_UDivide(V0,A2);
	if (A2)
	{
		ZZ_CLOCKCYCLES(32,0x800549B8);
		goto ZZ_5468C_32C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(33,0x800549B8);
ZZ_5468C_32C:
	V0 = LO;
	EMU_Write16(S0 + 82,V0); //+ 0x52
	ZZ_CLOCKCYCLES(3,0x80054A48);
	goto ZZ_5468C_3BC;
ZZ_5468C_338:
	V1 = EMU_ReadS16(S0 + 80); //+ 0x50
	V0 = EMU_ReadU32(S0 + 140); //+ 0x8C
	EMU_SMultiply(V1,V0);
	V1 = LO;
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 1;
	EMU_UDivide(V0,A1);
	if (A1)
	{
		ZZ_CLOCKCYCLES(11,0x800549F4);
		goto ZZ_5468C_368;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(12,0x800549F4);
ZZ_5468C_368:
	A0 = LO;
	V1 = EMU_ReadS16(S0 + 80); //+ 0x50
	V0 = EMU_ReadU32(S0 + 140); //+ 0x8C
	EMU_SMultiply(V1,V0);
	V1 = LO;
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 1;
	EMU_UDivide(V0,A1);
	if (A1)
	{
		ZZ_CLOCKCYCLES(12,0x80054A28);
		goto ZZ_5468C_39C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x80054A28);
ZZ_5468C_39C:
	V1 = HI;
	V0 = -1;
	EMU_Write16(S0 + 82,V0); //+ 0x52
	V0 = A3 << 1;
	V0 = V0 < V1;
	if (!V0)
	{
		EMU_Write16(S0 + 84,A0); //+ 0x54
		ZZ_CLOCKCYCLES(7,0x80054A4C);
		goto ZZ_5468C_3C0;
	}
	EMU_Write16(S0 + 84,A0); //+ 0x54
	V0 = A0 + 1;
	ZZ_CLOCKCYCLES(8,0x80054A48);
ZZ_5468C_3BC:
	EMU_Write16(S0 + 84,V0); //+ 0x54
	ZZ_CLOCKCYCLES(1,0x80054A4C);
ZZ_5468C_3C0:
	V1 = EMU_ReadU16(S0 + 84); //+ 0x54
	V0 = S1 + S2;
	EMU_Write16(S0 + 86,V1); //+ 0x56
	ZZ_CLOCKCYCLES(3,0x80054A58);
ZZ_5468C_3CC:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80053338,ZZ_53014_324);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005468C,0x8005475C,ZZ_5468C);
ZZ_MARK_TARGET(0x8005475C,0x800547A0,ZZ_5468C_D0);
ZZ_MARK_TARGET(0x800547A0,0x800547C8,ZZ_5468C_114);
ZZ_MARK_TARGET(0x800547C8,0x800547D0,ZZ_5468C_13C);
ZZ_MARK_TARGET(0x800547D0,0x800547DC,ZZ_5468C_144);
ZZ_MARK_TARGET(0x800547DC,0x800547E8,ZZ_5468C_150);
ZZ_MARK_TARGET(0x800547E8,0x800547EC,ZZ_5468C_15C);
ZZ_MARK_TARGET(0x800547EC,0x80054860,ZZ_5468C_160);
ZZ_MARK_TARGET(0x80054860,0x80054878,ZZ_5468C_1D4);
ZZ_MARK_TARGET(0x80054878,0x800548A0,ZZ_5468C_1EC);
ZZ_MARK_TARGET(0x800548A0,0x800548A4,ZZ_5468C_214);
ZZ_MARK_TARGET(0x800548A4,0x80054934,ZZ_5468C_218);
ZZ_MARK_TARGET(0x80054934,0x800549B8,ZZ_5468C_2A8);
ZZ_MARK_TARGET(0x800549B8,0x800549C4,ZZ_5468C_32C);
ZZ_MARK_TARGET(0x800549C4,0x800549F4,ZZ_5468C_338);
ZZ_MARK_TARGET(0x800549F4,0x80054A28,ZZ_5468C_368);
ZZ_MARK_TARGET(0x80054A28,0x80054A48,ZZ_5468C_39C);
ZZ_MARK_TARGET(0x80054A48,0x80054A4C,ZZ_5468C_3BC);
ZZ_MARK_TARGET(0x80054A4C,0x80054A58,ZZ_5468C_3C0);
ZZ_MARK_TARGET(0x80054A58,0x80054A74,ZZ_5468C_3CC);
