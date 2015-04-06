#ifdef ZZ_INCLUDE_CODE
ZZ_542C8:
	SP -= 24;
	T0 = 0x3930000;
	A2 = A0 << 16;
	A2 = (int32_t)A2 >> 14;
	V1 = A1 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	AT = 0x80070000;
	AT += A2;
	V1 = EMU_ReadU32(AT - 15268); //+ 0xFFFFC45C
	V0 <<= 4;
	S0 = V1 + V0;
	A3 = EMU_ReadU32(S0);
	T0 |= 0x8700;
	V0 = A3 + 1;
	EMU_Write32(S0,V0);
	V0 = EMU_ReadU8(A3);
	V1 = A3 + 2;
	EMU_Write32(S0,V1);
	A2 = EMU_ReadU8(A3 + 1); //+ 0x1
	V1 = A3 + 3;
	EMU_Write32(S0,V1);
	V1 = EMU_ReadU8(A3 + 2); //+ 0x2
	V0 <<= 16;
	A2 <<= 8;
	V0 |= A2;
	V0 |= V1;
	EMU_SDivide(T0,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(35,0x80054358);
		goto ZZ_542C8_90;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(36,0x80054358);
ZZ_542C8_90:
	AT = -1;
	if (V0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x80054370);
		goto ZZ_542C8_A8;
	}
	AT = 0x80000000;
	if (T0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x80054370);
		goto ZZ_542C8_A8;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x80054370);
ZZ_542C8_A8:
	T0 = LO;
	V0 = EMU_ReadS16(S0 + 80); //+ 0x50
	EMU_SMultiply(V0,T0);
	A2 = 0x80070000;
	A2 = EMU_ReadU32(A2 - 19372); //+ 0xFFFFB454
	V1 = A2 << 4;
	EMU_Write32(S0 + 148,T0); //+ 0x94
	T0 = V1 - A2;
	A3 = T0 << 2;
	T1 = LO;
	V0 = T1 << 2;
	V0 += T1;
	V0 <<= 1;
	V0 = V0 < A3;
	if (!V0)
	{
		V1 = A2 << 2;
		ZZ_CLOCKCYCLES(18,0x800543E4);
		goto ZZ_542C8_11C;
	}
	V1 = A2 << 2;
	V1 += A2;
	V0 = V1 << 4;
	V0 = V0 - V1;
	V0 <<= 3;
	EMU_UDivide(V0,T1);
	if (T1)
	{
		ZZ_CLOCKCYCLES(25,0x800543D8);
		goto ZZ_542C8_110;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(26,0x800543D8);
ZZ_542C8_110:
	V0 = LO;
	EMU_Write16(S0 + 82,V0); //+ 0x52
	ZZ_CLOCKCYCLES(3,0x80054468);
	goto ZZ_542C8_1A0;
ZZ_542C8_11C:
	V1 = EMU_ReadS16(S0 + 80); //+ 0x50
	V0 = EMU_ReadU32(S0 + 148); //+ 0x94
	EMU_SMultiply(V1,V0);
	V1 = LO;
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 1;
	EMU_UDivide(V0,A3);
	if (A3)
	{
		ZZ_CLOCKCYCLES(11,0x80054414);
		goto ZZ_542C8_14C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(12,0x80054414);
ZZ_542C8_14C:
	A2 = LO;
	V1 = EMU_ReadS16(S0 + 80); //+ 0x50
	V0 = EMU_ReadU32(S0 + 148); //+ 0x94
	EMU_SMultiply(V1,V0);
	V1 = LO;
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 1;
	EMU_UDivide(V0,A3);
	if (A3)
	{
		ZZ_CLOCKCYCLES(12,0x80054448);
		goto ZZ_542C8_180;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(13,0x80054448);
ZZ_542C8_180:
	V1 = HI;
	V0 = -1;
	EMU_Write16(S0 + 82,V0); //+ 0x52
	V0 = T0 << 1;
	V0 = V0 < V1;
	if (!V0)
	{
		EMU_Write16(S0 + 84,A2); //+ 0x54
		ZZ_CLOCKCYCLES(7,0x8005446C);
		goto ZZ_542C8_1A4;
	}
	EMU_Write16(S0 + 84,A2); //+ 0x54
	V0 = A2 + 1;
	ZZ_CLOCKCYCLES(8,0x80054468);
ZZ_542C8_1A0:
	EMU_Write16(S0 + 84,V0); //+ 0x54
	ZZ_CLOCKCYCLES(1,0x8005446C);
ZZ_542C8_1A4:
	A0 <<= 16;
	A1 <<= 16;
	A0 = (int32_t)A0 >> 16;
	RA = 0x80054480; //ZZ_542C8_1B8
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(5,0x800545DC);
	goto ZZ_545DC;
ZZ_542C8_1B8:
	EMU_Write32(S0 + 144,V0); //+ 0x90
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800542C8,0x80054358,ZZ_542C8);
ZZ_MARK_TARGET(0x80054358,0x80054370,ZZ_542C8_90);
ZZ_MARK_TARGET(0x80054370,0x800543D8,ZZ_542C8_A8);
ZZ_MARK_TARGET(0x800543D8,0x800543E4,ZZ_542C8_110);
ZZ_MARK_TARGET(0x800543E4,0x80054414,ZZ_542C8_11C);
ZZ_MARK_TARGET(0x80054414,0x80054448,ZZ_542C8_14C);
ZZ_MARK_TARGET(0x80054448,0x80054468,ZZ_542C8_180);
ZZ_MARK_TARGET(0x80054468,0x8005446C,ZZ_542C8_1A0);
ZZ_MARK_TARGET(0x8005446C,0x80054480,ZZ_542C8_1A4);
ZZ_MARK_TARGET(0x80054480,0x80054498,ZZ_542C8_1B8);
