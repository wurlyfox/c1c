#ifdef ZZ_INCLUDE_CODE
ZZ_420F4:
	SP -= 68;
	EMU_Write32(SP + 16,S0); //+ 0x10
	EMU_Write32(SP + 20,S1); //+ 0x14
	EMU_Write32(SP + 24,S2); //+ 0x18
	EMU_Write32(SP + 28,S3); //+ 0x1C
	EMU_Write32(SP + 32,S4); //+ 0x20
	EMU_Write32(SP + 36,S5); //+ 0x24
	EMU_Write32(SP + 40,S6); //+ 0x28
	EMU_Write32(SP + 44,S7); //+ 0x2C
	EMU_Write32(SP + 48,T8); //+ 0x30
	EMU_Write32(SP + 52,T9); //+ 0x34
	EMU_Write32(SP + 56,GP); //+ 0x38
	EMU_Write32(SP + 60,FP); //+ 0x3C
	EMU_Write32(SP + 64,RA); //+ 0x40
	V1 = 0x1F800000;
	EMU_Write32(V1,SP);
	GTE_SetRegister(GTE_CREG_TRX,R0);
	GTE_SetRegister(GTE_CREG_TRY,R0);
	GTE_SetRegister(GTE_CREG_TRZ,R0);
	T9 = EMU_ReadS16(A0);
	FP = A1 + 24;
	EMU_Write32(V1 + 28,A3); //+ 0x1C
	A0 = EMU_CheckedAdd(A0,2);
	T9 <<= 1;
	SP = T9 + A0;
	A0 += 2;
	EMU_Write32(V1 + 156,A0); //+ 0x9C
	if (A0 != SP)
	{
		A0 = A1 + 24;
		ZZ_CLOCKCYCLES(29,0x80042180);
		goto ZZ_420F4_8C;
	}
	A0 = A1 + 24;
	RA = 0x80042170; //ZZ_420F4_7C
	A1 = 2048;
	ZZ_CLOCKCYCLES(31,0x8003BEF4);
	goto ZZ_3BEF4;
ZZ_420F4_7C:
	V1 = 0x1F800000;
	SP = EMU_ReadU32(V1);
	ZZ_CLOCKCYCLES(4,0x8004267C);
	goto ZZ_420F4_588;
ZZ_420F4_8C:
	A1 = EMU_ReadU32(A2);
	T8 = EMU_ReadU32(A1);
	T9 = EMU_ReadU32(A1 + 4); //+ 0x4
	A0 = EMU_ReadU32(A1 + 8); //+ 0x8
	T8 = (int32_t)T8 >> 8;
	T9 = (int32_t)T9 >> 8;
	A0 = (int32_t)A0 >> 8;
	EMU_Write32(V1 + 192,T8); //+ 0xC0
	EMU_Write32(V1 + 196,T9); //+ 0xC4
	EMU_Write32(V1 + 200,A0); //+ 0xC8
	T8 = EMU_ReadU32(A2 + 20); //+ 0x14
	T9 = EMU_ReadU32(A2 + 24); //+ 0x18
	A0 = EMU_ReadU32(A2 + 16); //+ 0x10
	EMU_Write32(V1 + 168,T8); //+ 0xA8
	EMU_Write32(V1 + 172,T9); //+ 0xAC
	T8 = EMU_ReadU32(A2 + 28); //+ 0x1C
	T9 = EMU_ReadU32(A2 + 32); //+ 0x20
	EMU_Write32(V1 + 100,T8); //+ 0x64
	ZZ_JUMPREGISTER_BEGIN(A0);
	RA = 0x800421D4; //ZZ_420F4_E0
	EMU_Write32(V1 + 104,T9); //+ 0x68
	ZZ_CLOCKCYCLES_JR(21);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (A0,800421CC)
	ZZ_JUMPREGISTER_END();
ZZ_420F4_E0:
	A0 = 0x80060000;
	A0 -= 13892;
	T8 = EMU_ReadU32(A0);
	T9 = EMU_ReadU32(A0 + 4); //+ 0x4
	EMU_Write32(V1 + 208,T8); //+ 0xD0
	EMU_Write32(V1 + 212,T9); //+ 0xD4
	T8 = EMU_ReadU32(A0 + 8); //+ 0x8
	T9 = EMU_ReadU32(A0 + 12); //+ 0xC
	EMU_Write32(V1 + 216,T8); //+ 0xD8
	EMU_Write32(V1 + 220,T9); //+ 0xDC
	T8 = EMU_ReadU32(A0 + 16); //+ 0x10
	T9 = EMU_ReadU32(A0 + 20); //+ 0x14
	EMU_Write32(V1 + 224,T8); //+ 0xE0
	EMU_Write32(V1 + 228,T9); //+ 0xE4
	T8 = EMU_ReadU32(A0 + 24); //+ 0x18
	T9 = EMU_ReadU32(A0 + 28); //+ 0x1C
	EMU_Write32(V1 + 232,T8); //+ 0xE8
	EMU_Write32(V1 + 236,T9); //+ 0xEC
	S7 = EMU_ReadU32(FP - 16); //+ 0xFFFFFFF0
	S6 = 0xFFF00000;
	S6 |= 0xFFF0;
	T2 = 0xFFFE0000;
	T2 |= 0xFFFF;
	EMU_Write32(V1 + 472,S6); //+ 0x1D8
	EMU_Write32(V1 + 476,T2); //+ 0x1DC
	T8 = 0x1010000;
	T8 |= 0x200;
	EMU_Write32(V1 + 540,T8); //+ 0x21C
	T4 = FP + 8188;
	T8 = 0xFF0000;
	T8 |= 0xFFFF;
	EMU_Write32(T4,T8);
	T3 = EMU_ReadU16(SP);
	SP -= 2;
	S4 = T3 & 0xE000;
	S4 >>= 8;
	T9 = T3 & 0x7FF;
	T3 &= 0x1800;
	if (!T3)
	{
		S4 += V1;
		ZZ_CLOCKCYCLES(40,0x8004229C);
		goto ZZ_420F4_1A8;
	}
	S4 += V1;
	T8 = EMU_ReadU32(S4 + 652); //+ 0x28C
	T9 <<= 3;
	T9 += T8;
	S3 = EMU_ReadU32(T9);
	T6 <<= 2;
	T6 &= 0x3C;
	T8 = A3 >> 6;
	T8 &= 0xC00;
	GP = EMU_ReadU32(T9 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(50,0x800422C8);
	goto ZZ_420F4_1D4;
ZZ_420F4_1A8:
	T8 = EMU_ReadU32(S4 + 648); //+ 0x288
	GP = T9 << 1;
	GP += T8;
	GP = EMU_ReadU16(GP);
	T9 <<= 2;
	T9 = T8 - T9;
	T6 <<= 2;
	T6 &= 0x3C;
	T8 = A3 >> 6;
	T8 &= 0xC00;
	S3 = EMU_ReadU32(T9 - 4); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(11,0x800422C8);
ZZ_420F4_1D4:
	T6 |= T8;
	T8 = A3 << 6;
	T8 &= 0x3C0;
	T6 |= T8;
	T6 += S2;
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	EMU_Write32(V1 + 108,R0); //+ 0x6C
	ZZ_CLOCKCYCLES(7,0x800422E4);
ZZ_420F4_1F0:
	RA = EMU_ReadU32(S4 + 640); //+ 0x280
	T8 = EMU_ReadU32(S4 + 644); //+ 0x284
	T9 = EMU_ReadU32(S4 + 656); //+ 0x290
	S1 = EMU_ReadU32(S4 + 668); //+ 0x29C
	if (T3)
	{
		S0 = EMU_ReadU32(S4 + 664); //+ 0x298
		ZZ_CLOCKCYCLES(6,0x80042428);
		goto ZZ_420F4_334;
	}
	S0 = EMU_ReadU32(S4 + 664); //+ 0x298
	S5 = S3 << 4;
	A0 = GP & 0xF;
	S5 |= A0;
	T5 = S3 >> 18;
	T5 &= 0x3FFC;
	AT = T9 - T5;
	AT = EMU_ReadU32(AT - 4); //+ 0xFFFFFFFC
	T5 >>= 1;
	T5 += T9;
	T6 = S3 >> 6;
	T6 &= 0x3FFC;
	A3 = T9 - T6;
	T5 = EMU_ReadU16(T5);
	T6 >>= 1;
	T6 += T9;
	V0 = AT & S6;
	V0 += RA;
	V0 &= T2;
	GTE_SetRegister(GTE_DREG_VXY0,V0);
	A3 = EMU_ReadU32(A3 - 4); //+ 0xFFFFFFFC
	T7 = GP >> 2;
	T7 &= 0x3FFC;
	T0 = T9 - T7;
	V0 = T5 & 0xFFF0;
	V0 += T8;
	GTE_SetRegister(GTE_DREG_VZ0,V0);
	T6 = EMU_ReadU16(T6);
	T7 >>= 1;
	T7 += T9;
	V0 = A3 & S6;
	V0 += RA;
	V0 &= T2;
	GTE_SetRegister(GTE_DREG_VXY1,V0);
	T0 = EMU_ReadU32(T0 - 4); //+ 0xFFFFFFFC
	T5 <<= 2;
	T5 &= 0x3C;
	A2 = AT >> 6;
	V0 = T6 & 0xFFF0;
	V0 += T8;
	GTE_SetRegister(GTE_DREG_VZ1,V0);
	T7 = EMU_ReadU16(T7);
	V0 = T0 & S6;
	V0 += RA;
	V0 &= T2;
	A2 &= 0xC00;
	T5 |= A2;
	T9 = EMU_ReadU32(V1 + 168); //+ 0xA8
	GTE_SetRegister(GTE_DREG_VXY2,V0);
	A2 = T7 & 0xFFF0;
	A2 += T8;
	GTE_SetRegister(GTE_DREG_VZ2,A2);
	EMU_Write32(V1 + 388,R0); //+ 0x184
	T3 = EMU_ReadU16(SP);
	RA = AT << 6;
	RA &= 0x3C0;
	T5 |= RA;
	ZZ_JUMPREGISTER_BEGIN(T9);
	T5 += S2;
	ZZ_CLOCKCYCLES_JR(64);
	// UNIMPLEMENTED INDIRECT JUMP (T9,800423DC)
	// PC IS 800423DC
	ZZ_JUMPREGISTER_END();
ZZ_420F4_2F0:
	T9 = EMU_ReadU32(V1 + 168); //+ 0xA8
	GTE_SetRegister(GTE_DREG_VXY2,V0);
	A2 = T7 & 0xFFF0;
	A2 += T8;
	GTE_SetRegister(GTE_DREG_VZ2,A2);
	T5 <<= 2;
	T5 &= 0x3C;
	RA = AT >> 6;
	RA &= 0xC00;
	T5 |= RA;
	EMU_Write32(V1 + 388,R0); //+ 0x184
	T3 = EMU_ReadU16(SP);
	RA = AT << 6;
	RA &= 0x3C0;
	T5 |= RA;
	ZZ_JUMPREGISTER_BEGIN(T9);
	T5 += S2;
	ZZ_CLOCKCYCLES_JR(17);
	// UNIMPLEMENTED INDIRECT JUMP (T9,80042420)
	// PC IS 80042420
	ZZ_JUMPREGISTER_END();
ZZ_420F4_334:
	S5 = S3 << 4;
	A0 = GP & 0xF;
	A1 = T3 & 0x800;
	if (!A1)
	{
		S5 |= A0;
		ZZ_CLOCKCYCLES(5,0x8004254C);
		goto ZZ_420F4_458;
	}
	S5 |= A0;
	T5 = S3 >> 18;
	T5 &= 0x3FFC;
	AT = T9 - T5;
	AT = EMU_ReadU32(AT - 4); //+ 0xFFFFFFFC
	T5 >>= 1;
	T5 += T9;
	T6 = S3 >> 6;
	T6 &= 0x3FFC;
	A3 = T9 - T6;
	T5 = EMU_ReadU16(T5);
	T6 >>= 1;
	T6 += T9;
	V0 = AT & S6;
	V0 += RA;
	V0 &= T2;
	GTE_SetRegister(GTE_DREG_VXY0,V0);
	A3 = EMU_ReadU32(A3 - 4); //+ 0xFFFFFFFC
	T7 = GP >> 18;
	T7 &= 0x3FFC;
	T0 = T9 - T7;
	V0 = T5 & 0xFFF0;
	V0 += T8;
	GTE_SetRegister(GTE_DREG_VZ0,V0);
	T6 = EMU_ReadU16(T6);
	T7 >>= 1;
	T7 += T9;
	V0 = A3 & S6;
	V0 += RA;
	V0 &= T2;
	GTE_SetRegister(GTE_DREG_VXY1,V0);
	T0 = EMU_ReadU32(T0 - 4); //+ 0xFFFFFFFC
	A1 = GP >> 6;
	A1 &= 0x3FFC;
	A0 = T9 - A1;
	V0 = T6 & 0xFFF0;
	V0 += T8;
	GTE_SetRegister(GTE_DREG_VZ1,V0);
	T7 = EMU_ReadU16(T7);
	V0 = T0 & S6;
	V0 += RA;
	V0 &= T2;
	T3 = EMU_CheckedAdd(T3,-6144);
	if (T3)
	{
		A1 >>= 1;
		ZZ_CLOCKCYCLES(49,0x800423E4);
		goto ZZ_420F4_2F0;
	}
	A1 >>= 1;
	A1 += T9;
	GTE_SetRegister(GTE_DREG_VXY2,V0);
	A0 = EMU_ReadU32(A0 - 4); //+ 0xFFFFFFFC
	T5 <<= 2;
	T5 &= 0x3C;
	A2 = AT >> 6;
	V0 = T7 & 0xFFF0;
	V0 += T8;
	GTE_SetRegister(GTE_DREG_VZ2,V0);
	A1 = EMU_ReadU16(A1);
	A2 &= 0xC00;
	T5 |= A2;
	V0 = A0 & S6;
	V0 += RA;
	V0 &= T2;
	T9 = EMU_ReadU32(V1 + 172); //+ 0xAC
	T3 = EMU_ReadU16(SP);
	A2 = AT << 6;
	A2 &= 0x3C0;
	T5 |= A2;
	A2 = A1 & 0xFFF0;
	A2 += T8;
	ZZ_JUMPREGISTER_BEGIN(T9);
	T5 += S2;
	ZZ_CLOCKCYCLES_JR(73);
	// UNIMPLEMENTED INDIRECT JUMP (T9,80042544)
	// PC IS 80042544
	ZZ_JUMPREGISTER_END();
ZZ_420F4_458:
	T5 = S3 >> 6;
	T5 &= 0x3FFC;
	AT = T9 - T5;
	AT = EMU_ReadU32(AT - 4); //+ 0xFFFFFFFC
	T5 >>= 1;
	T5 += T9;
	T6 = GP >> 18;
	T6 &= 0x3FFC;
	A3 = T9 - T6;
	T5 = EMU_ReadU16(T5);
	T6 >>= 1;
	T6 += T9;
	V0 = AT & S6;
	V0 += RA;
	V0 &= T2;
	GTE_SetRegister(GTE_DREG_VXY0,V0);
	A3 = EMU_ReadU32(A3 - 4); //+ 0xFFFFFFFC
	T7 = GP >> 6;
	T7 &= 0x3FFC;
	T0 = T9 - T7;
	V0 = T5 & 0xFFF0;
	V0 += T8;
	GTE_SetRegister(GTE_DREG_VZ0,V0);
	T6 = EMU_ReadU16(T6);
	T7 >>= 1;
	T7 += T9;
	V0 = A3 & S6;
	V0 += RA;
	V0 &= T2;
	GTE_SetRegister(GTE_DREG_VXY1,V0);
	T0 = EMU_ReadU32(T0 - 4); //+ 0xFFFFFFFC
	T5 <<= 2;
	T5 &= 0x3C;
	A2 = AT >> 6;
	V0 = T6 & 0xFFF0;
	V0 += T8;
	GTE_SetRegister(GTE_DREG_VZ1,V0);
	T7 = EMU_ReadU16(T7);
	V0 = T0 & S6;
	V0 += RA;
	V0 &= T2;
	A2 &= 0xC00;
	T5 |= A2;
	T9 = EMU_ReadU32(V1 + 168); //+ 0xA8
	GTE_SetRegister(GTE_DREG_VXY2,V0);
	A2 = T7 & 0xFFF0;
	A2 += T8;
	GTE_SetRegister(GTE_DREG_VZ2,A2);
	EMU_Write32(V1 + 388,S6); //+ 0x184
	T3 = EMU_ReadU16(SP);
	RA = AT << 6;
	RA &= 0x3C0;
	T5 |= RA;
	ZZ_JUMPREGISTER_BEGIN(T9);
	T5 += S2;
	ZZ_CLOCKCYCLES_JR(55);
	// UNIMPLEMENTED INDIRECT JUMP (T9,80042620)
	// PC IS 80042620
	ZZ_JUMPREGISTER_END();
ZZ_420F4_534:
	T8 = EMU_ReadU32(V1 + 156); //+ 0x9C
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	if (SP != T8)
	{
		SP -= 2;
		ZZ_CLOCKCYCLES(4,0x800422E4);
		goto ZZ_420F4_1F0;
	}
	SP -= 2;
	ZZ_CLOCKCYCLES(4,0x80042638);
ZZ_420F4_544:
	T9 = EMU_ReadU32(V1 + 108); //+ 0x6C
	T8 = EMU_ReadU32(V1 + 156); //+ 0x9C
	if (T9)
	{
		EMU_Write32(V1 + 108,V1); //+ 0x6C
		ZZ_CLOCKCYCLES(4,0x80042650);
		goto ZZ_420F4_55C;
	}
	EMU_Write32(V1 + 108,V1); //+ 0x6C
	SP += 2;
	ZZ_CLOCKCYCLES(6,0x800422E4);
	goto ZZ_420F4_1F0;
ZZ_420F4_55C:
	if (FP == T4)
	{
		T8 = FP - 4;
		ZZ_CLOCKCYCLES(2,0x80042674);
		goto ZZ_420F4_580;
	}
	T8 = FP - 4;
	T1 = T4 << 8;
	T4 -= 4;
	T1 >>= 8;
	ZZ_CLOCKCYCLES(5,0x80042664);
ZZ_420F4_570:
	EMU_Write32(T4,T1);
	T4 -= 4;
	if (T8 != T4)
	{
		T1 -= 4;
		ZZ_CLOCKCYCLES(4,0x80042664);
		goto ZZ_420F4_570;
	}
	T1 -= 4;
	ZZ_CLOCKCYCLES(4,0x80042674);
ZZ_420F4_580:
	SP = EMU_ReadU32(V1);
	EMU_Write32(FP - 16,S7); //+ 0xFFFFFFF0
	ZZ_CLOCKCYCLES(2,0x8004267C);
ZZ_420F4_588:
	RA = EMU_ReadU32(SP + 64); //+ 0x40
	FP = EMU_ReadU32(SP + 60); //+ 0x3C
	GP = EMU_ReadU32(SP + 56); //+ 0x38
	T9 = EMU_ReadU32(SP + 52); //+ 0x34
	T8 = EMU_ReadU32(SP + 48); //+ 0x30
	S7 = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 68;
	ZZ_CLOCKCYCLES_JR(15);
	ZZ_JUMPREGISTER(0x80011CB8,ZZ_11800_4B8);
	ZZ_JUMPREGISTER_END();
ZZ_420F4_5C4:
	GTE_RotateTranslateProjectTriple();
	T5 = EMU_ReadU32(T5);
	S4 = T3 & 0xE000;
	S4 >>= 8;
	T9 = T3 & 0x7FF;
	T3 &= 0x1800;
	if (!T3)
	{
		S4 += V1;
		ZZ_CLOCKCYCLES(8,0x80042700);
		goto ZZ_420F4_60C;
	}
	S4 += V1;
	T8 = EMU_ReadU32(S4 + 652); //+ 0x28C
	T9 <<= 3;
	T9 += T8;
	S3 = EMU_ReadU32(T9);
	T6 <<= 2;
	T6 &= 0x3C;
	T8 = A3 >> 6;
	T8 &= 0xC00;
	GP = EMU_ReadU32(T9 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(18,0x8004272C);
	goto ZZ_420F4_638;
ZZ_420F4_60C:
	T8 = EMU_ReadU32(S4 + 648); //+ 0x288
	GP = T9 << 1;
	GP += T8;
	GP = EMU_ReadU16(GP);
	T9 <<= 2;
	T9 = T8 - T9;
	T6 <<= 2;
	T6 &= 0x3C;
	T8 = A3 >> 6;
	T8 &= 0xC00;
	S3 = EMU_ReadU32(T9 - 4); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(11,0x8004272C);
ZZ_420F4_638:
	T6 |= T8;
	T8 = A3 << 6;
	T8 &= 0x3C0;
	T6 |= T8;
	T6 += S2;
	T8 = GTE_GetRegister(GTE_DREG_SXY0);
	T9 = GTE_GetRegister(GTE_DREG_SXY1);
	V0 = GTE_GetRegister(GTE_DREG_SXY2);
	RA = EMU_ReadU32(V1 + 540); //+ 0x21C
	A0 = T8 & T9;
	T8 = T8 - RA;
	T9 = T9 - RA;
	A0 &= V0;
	V0 = V0 - RA;
	T8 |= T9;
	T8 = ~(T8 | V0);
	T8 |= A0;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 16;
		ZZ_CLOCKCYCLES(19,0x80042628);
		goto ZZ_420F4_534;
	}
	T8 <<= 16;
	if ((int32_t)T8 < 0)
	{
		A0 = 1904;
		ZZ_CLOCKCYCLES(21,0x80042628);
		goto ZZ_420F4_534;
	}
	A0 = 1904;
	T6 = EMU_ReadU32(T6);
	T7 <<= 2;
	T7 &= 0x3C;
	T9 = T0 >> 6;
	T9 &= 0xC00;
	T7 |= T9;
	T9 = T0 << 6;
	T9 &= 0x3C0;
	T7 |= T9;
	T7 += S2;
	V0 = GTE_GetRegister(GTE_DREG_SZ1);
	T8 = GTE_GetRegister(GTE_DREG_SZ2);
	T9 = GTE_GetRegister(GTE_DREG_SZ3);
	T7 = EMU_ReadU32(T7);
	V0 += T8;
	V0 += T9;
	RA = V0 >> 5;
	V0 = A0 - RA;
	A2 = EMU_ReadU32(V1 + 100); //+ 0x64
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(42,0x800427D8);
		goto ZZ_420F4_6E4;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(43,0x800427D8);
ZZ_420F4_6E4:
	ZZ_JUMPREGISTER_BEGIN(A2);
	V0 += FP;
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED INDIRECT JUMP (A2,800427D8)
	// PC IS 800427D8
	ZZ_JUMPREGISTER_END();
ZZ_420F4_6EC:
	T8 = S5 << 20;
	if (T8)
	{
		S5 &= 0x7FF;
		ZZ_CLOCKCYCLES(3,0x8004281C);
		goto ZZ_420F4_728;
	}
	S5 &= 0x7FF;
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	EMU_Write32(S7 + 8,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x8
	EMU_Write32(S7 + 16,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x10
	EMU_Write32(S7 + 24,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x18
	A0 = 28;
	T8 = 0x30000000;
	T5 |= T8;
	EMU_Write32(S7 + 4,T5); //+ 0x4
	EMU_Write32(S7 + 12,T6); //+ 0xC
	EMU_Write32(S7 + 20,T7); //+ 0x14
	T9 = 0x6000000;
	ZZ_CLOCKCYCLES(15,0x80042BE0);
	goto ZZ_420F4_AEC;
ZZ_420F4_728:
	if ((int32_t)T8 <= 0)
	{
		S2 = EMU_ReadU32(S4 + 660); //+ 0x294
		ZZ_CLOCKCYCLES(2,0x80042834);
		goto ZZ_420F4_740;
	}
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	T8 = S5 << 1;
	S5 += T8;
	S5 <<= 2;
	ZZ_CLOCKCYCLES(6,0x800428AC);
	goto ZZ_420F4_7B8;
ZZ_420F4_740:
	T8 = S5 << 2;
	T8 += S0;
	S5 = EMU_ReadU32(T8);
	RA >>= 6;
	RA += V1;
	if ((int32_t)S5 < 0)
	{
		RA = EMU_ReadU8(RA + 208); //+ 0xD0
		ZZ_CLOCKCYCLES(7,0x80042890);
		goto ZZ_420F4_79C;
	}
	RA = EMU_ReadU8(RA + 208); //+ 0xD0
	T8 = EMU_ReadU32(V1 + 28); //+ 0x1C
	A1 = S5 >> 26;
	T8 >>= A1;
	A1 = S5 >> 19;
	T8 += A1;
	A1 = S5 >> 12;
	A1 &= 0x7F;
	T8 &= A1;
	A1 = S5 << 20;
	S5 += T8;
	if ((int32_t)A1 >= 0)
	{
		S5 &= 0x7FF;
		ZZ_CLOCKCYCLES(19,0x800428A0);
		goto ZZ_420F4_7AC;
	}
	S5 &= 0x7FF;
	T8 = S5 << 2;
	T8 += S0;
	S5 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(23,0x80042890);
ZZ_420F4_79C:
	T8 = S5 & 0x7FF;
	S5 >>= RA;
	S5 &= 0x3;
	S5 += T8;
	ZZ_CLOCKCYCLES(4,0x800428A0);
ZZ_420F4_7AC:
	T8 = S5 << 1;
	S5 += T8;
	S5 <<= 2;
	ZZ_CLOCKCYCLES(3,0x800428AC);
ZZ_420F4_7B8:
	S5 += S1;
	T9 = EMU_ReadU32(V1 + 388); //+ 0x184
	T8 = EMU_ReadU32(S5 - 12); //+ 0xFFFFFFF4
	A0 = EMU_ReadU32(S5 - 8); //+ 0xFFFFFFF8
	if (!T9)
	{
		A1 = EMU_ReadU32(S5 - 4); //+ 0xFFFFFFFC
		ZZ_CLOCKCYCLES(6,0x800428E8);
		goto ZZ_420F4_7F4;
	}
	A1 = EMU_ReadU32(S5 - 4); //+ 0xFFFFFFFC
	T9 = 0xFFFF0000;
	T8 &= T9;
	T9 = A0 & 0xFFFF;
	T8 |= T9;
	T9 = 0xFFFF0000;
	A0 &= T9;
	T9 = A1 & 0xFFFF;
	A0 |= T9;
	A1 >>= 16;
	ZZ_CLOCKCYCLES(15,0x800428E8);
ZZ_420F4_7F4:
	EMU_Write32(S7 + 12,T8); //+ 0xC
	EMU_Write32(S7 + 24,A0); //+ 0x18
	EMU_Write32(S7 + 36,A1); //+ 0x24
	EMU_Write32(S7 + 16,T6); //+ 0x10
	EMU_Write32(S7 + 28,T7); //+ 0x1C
	A1 = 0x600000;
	T8 = A0 & A1;
	if (T8 == A1)
	{
		T8 = 0x34000000;
		ZZ_CLOCKCYCLES(9,0x80042910);
		goto ZZ_420F4_81C;
	}
	T8 = 0x34000000;
	T8 = 0x36000000;
	ZZ_CLOCKCYCLES(10,0x80042910);
ZZ_420F4_81C:
	T5 |= T8;
	EMU_Write32(S7 + 4,T5); //+ 0x4
	EMU_Write32(S7 + 8,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x8
	EMU_Write32(S7 + 20,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x14
	EMU_Write32(S7 + 32,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x20
	A0 = 40;
	T9 = 0x9000000;
	ZZ_CLOCKCYCLES(8,0x80042BE0);
	goto ZZ_420F4_AEC;
ZZ_420F4_83C:
	EMU_Write32(V1 + 436,GTE_GetRegister(GTE_DREG_VXY0)); //+ 0x1B4
	EMU_Write32(V1 + 440,GTE_GetRegister(GTE_DREG_VZ0)); //+ 0x1B8
	ZZ_CLOCKCYCLES(2,0x80042938);
ZZ_420F4_844:
	GTE_RotateTranslateProjectTriple();
	T5 = EMU_ReadU32(T5);
	S4 = T3 & 0xE000;
	S4 >>= 8;
	T9 = T3 & 0x7FF;
	T3 &= 0x1800;
	if (!T3)
	{
		S4 += V1;
		ZZ_CLOCKCYCLES(8,0x80042980);
		goto ZZ_420F4_88C;
	}
	S4 += V1;
	T8 = EMU_ReadU32(S4 + 652); //+ 0x28C
	T9 <<= 3;
	T9 += T8;
	S3 = EMU_ReadU32(T9);
	T6 <<= 2;
	T6 &= 0x3C;
	T8 = A3 >> 6;
	T8 &= 0xC00;
	GP = EMU_ReadU32(T9 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(18,0x800429AC);
	goto ZZ_420F4_8B8;
ZZ_420F4_88C:
	T8 = EMU_ReadU32(S4 + 648); //+ 0x288
	GP = T9 << 1;
	GP += T8;
	GP = EMU_ReadU16(GP);
	T9 <<= 2;
	T9 = T8 - T9;
	T6 <<= 2;
	T6 &= 0x3C;
	T8 = A3 >> 6;
	T8 &= 0xC00;
	S3 = EMU_ReadU32(T9 - 4); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(11,0x800429AC);
ZZ_420F4_8B8:
	T6 |= T8;
	T8 = A3 << 6;
	T8 &= 0x3C0;
	T6 |= T8;
	T6 += S2;
	EMU_Write32(V1 + 376,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x178
	EMU_Write32(V1 + 380,GTE_GetRegister(GTE_DREG_SZ1)); //+ 0x17C
	GTE_SetRegister(GTE_DREG_VXY0,V0);
	GTE_SetRegister(GTE_DREG_VZ0,A2);
	T8 = GTE_GetRegister(GTE_DREG_SXY0);
	T9 = GTE_GetRegister(GTE_DREG_SXY1);
	V0 = GTE_GetRegister(GTE_DREG_SXY2);
	EMU_Write32(S7 + 8,T8); //+ 0x8
	RA = EMU_ReadU32(V1 + 540); //+ 0x21C
	GTE_RotateTranslateProjectSingle();
	T6 = EMU_ReadU32(T6);
	A2 = T8 & T9;
	T8 = T8 - RA;
	T9 = T9 - RA;
	A2 &= V0;
	V0 = V0 - RA;
	T8 |= T9;
	T7 <<= 2;
	T7 &= 0x3C;
	T9 = T0 >> 6;
	T9 &= 0xC00;
	T7 |= T9;
	T9 = GTE_GetRegister(GTE_DREG_SXY2);
	T8 |= V0;
	A2 &= T9;
	T9 = T9 - RA;
	T8 = ~(T8 | T9);
	T8 |= A2;
	if ((int32_t)T8 < 0)
	{
		T8 <<= 16;
		ZZ_CLOCKCYCLES(35,0x80042628);
		goto ZZ_420F4_534;
	}
	T8 <<= 16;
	if ((int32_t)T8 < 0)
	{
		A2 = 1904;
		ZZ_CLOCKCYCLES(37,0x80042628);
		goto ZZ_420F4_534;
	}
	A2 = 1904;
	T9 = T0 << 6;
	T9 &= 0x3C0;
	T7 |= T9;
	T7 += S2;
	T7 = EMU_ReadU32(T7);
	A1 <<= 2;
	A1 &= 0x3C;
	T9 = A0 >> 6;
	T9 &= 0xC00;
	A1 |= T9;
	T9 = A0 << 6;
	T9 &= 0x3C0;
	A1 |= T9;
	A1 += S2;
	V0 = GTE_GetRegister(GTE_DREG_SZ1);
	T8 = GTE_GetRegister(GTE_DREG_SZ2);
	T9 = GTE_GetRegister(GTE_DREG_SZ3);
	A1 = EMU_ReadU32(A1);
	V0 += T8;
	V0 += T9;
	RA = V0 >> 5;
	V0 = A2 - RA;
	A2 = EMU_ReadU32(V1 + 104); //+ 0x68
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(62,0x80042AA8);
		goto ZZ_420F4_9B4;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(63,0x80042AA8);
ZZ_420F4_9B4:
	ZZ_JUMPREGISTER_BEGIN(A2);
	V0 += FP;
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED INDIRECT JUMP (A2,80042AA8)
	// PC IS 80042AA8
	ZZ_JUMPREGISTER_END();
ZZ_420F4_9BC:
	T8 = S5 << 20;
	if (T8)
	{
		S2 = EMU_ReadU32(S4 + 660); //+ 0x294
		ZZ_CLOCKCYCLES(3,0x80042AEC);
		goto ZZ_420F4_9F8;
	}
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	EMU_Write32(S7 + 16,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x10
	EMU_Write32(S7 + 24,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x18
	EMU_Write32(S7 + 32,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x20
	T8 = 0x38000000;
	T5 |= T8;
	EMU_Write32(S7 + 4,T5); //+ 0x4
	A0 = 36;
	EMU_Write32(S7 + 12,T6); //+ 0xC
	EMU_Write32(S7 + 20,T7); //+ 0x14
	EMU_Write32(S7 + 28,A1); //+ 0x1C
	T9 = 0x8000000;
	ZZ_CLOCKCYCLES(15,0x80042BE0);
	goto ZZ_420F4_AEC;
ZZ_420F4_9F8:
	S5 &= 0x7FF;
	if ((int32_t)T8 <= 0)
	{
		S2 = EMU_ReadU32(S4 + 660); //+ 0x294
		ZZ_CLOCKCYCLES(3,0x80042B08);
		goto ZZ_420F4_A14;
	}
	S2 = EMU_ReadU32(S4 + 660); //+ 0x294
	T8 = S5 << 1;
	S5 += T8;
	S5 <<= 2;
	ZZ_CLOCKCYCLES(7,0x80042B80);
	goto ZZ_420F4_A8C;
ZZ_420F4_A14:
	T8 = S5 << 2;
	T8 += S0;
	S5 = EMU_ReadU32(T8);
	RA >>= 6;
	RA += V1;
	if ((int32_t)S5 < 0)
	{
		RA = EMU_ReadU8(RA + 208); //+ 0xD0
		ZZ_CLOCKCYCLES(7,0x80042B64);
		goto ZZ_420F4_A70;
	}
	RA = EMU_ReadU8(RA + 208); //+ 0xD0
	T8 = EMU_ReadU32(V1 + 28); //+ 0x1C
	T9 = S5 >> 26;
	T8 >>= T9;
	T9 = S5 >> 19;
	T8 += T9;
	T9 = S5 >> 12;
	T9 &= 0x7F;
	T8 &= T9;
	T9 = S5 << 20;
	S5 += T8;
	if ((int32_t)T9 >= 0)
	{
		S5 &= 0x7FF;
		ZZ_CLOCKCYCLES(19,0x80042B74);
		goto ZZ_420F4_A80;
	}
	S5 &= 0x7FF;
	T8 = S5 << 2;
	T8 += S0;
	S5 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(23,0x80042B64);
ZZ_420F4_A70:
	T8 = S5 & 0x7FF;
	S5 >>= RA;
	S5 &= 0x3;
	S5 += T8;
	ZZ_CLOCKCYCLES(4,0x80042B74);
ZZ_420F4_A80:
	T8 = S5 << 1;
	S5 += T8;
	S5 <<= 2;
	ZZ_CLOCKCYCLES(3,0x80042B80);
ZZ_420F4_A8C:
	S5 += S1;
	T8 = EMU_ReadU32(S5 - 12); //+ 0xFFFFFFF4
	A0 = EMU_ReadU32(S5 - 8); //+ 0xFFFFFFF8
	RA = EMU_ReadU32(S5 - 4); //+ 0xFFFFFFFC
	EMU_Write32(S7 + 12,T8); //+ 0xC
	EMU_Write32(S7 + 24,A0); //+ 0x18
	EMU_Write32(S7 + 36,RA); //+ 0x24
	RA >>= 16;
	EMU_Write32(S7 + 48,RA); //+ 0x30
	EMU_Write32(S7 + 16,T6); //+ 0x10
	EMU_Write32(S7 + 28,T7); //+ 0x1C
	EMU_Write32(S7 + 40,A1); //+ 0x28
	RA = 0x600000;
	T8 = A0 & RA;
	if (T8 == RA)
	{
		T8 = 0x3C000000;
		ZZ_CLOCKCYCLES(16,0x80042BC4);
		goto ZZ_420F4_AD0;
	}
	T8 = 0x3C000000;
	T8 = 0x3E000000;
	ZZ_CLOCKCYCLES(17,0x80042BC4);
ZZ_420F4_AD0:
	T5 |= T8;
	EMU_Write32(S7 + 4,T5); //+ 0x4
	EMU_Write32(S7 + 20,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x14
	EMU_Write32(S7 + 32,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x20
	EMU_Write32(S7 + 44,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x2C
	A0 = 52;
	T9 = 0xC000000;
	ZZ_CLOCKCYCLES(7,0x80042BE0);
ZZ_420F4_AEC:
	T8 = V0 - T4;
	if ((int32_t)T8 >= 0)
	{
		T8 = S7 << 8;
		ZZ_CLOCKCYCLES(3,0x80042C0C);
		goto ZZ_420F4_B18;
	}
	T8 = S7 << 8;
	T1 = T4 << 8;
	T4 -= 4;
	if (V0 == T4)
	{
		T1 >>= 8;
		ZZ_CLOCKCYCLES(7,0x80042C0C);
		goto ZZ_420F4_B18;
	}
	T1 >>= 8;
	ZZ_CLOCKCYCLES(7,0x80042BFC);
ZZ_420F4_B08:
	EMU_Write32(T4,T1);
	T4 -= 4;
	if (V0 != T4)
	{
		T1 -= 4;
		ZZ_CLOCKCYCLES(4,0x80042BFC);
		goto ZZ_420F4_B08;
	}
	T1 -= 4;
	ZZ_CLOCKCYCLES(4,0x80042C0C);
ZZ_420F4_B18:
	T1 |= T9;
	EMU_Write32(S7,T1);
	T1 = T8 >> 8;
	EMU_Write32(T4,T1);
	T8 = EMU_ReadU32(V1 + 156); //+ 0x9C
	S7 += A0;
	if (SP != T8)
	{
		SP -= 2;
		ZZ_CLOCKCYCLES(8,0x800422E4);
		goto ZZ_420F4_1F0;
	}
	SP -= 2;
	ZZ_CLOCKCYCLES(10,0x80042638);
	goto ZZ_420F4_544;
ZZ_420F4_B40:
	T8 = EMU_ReadU32(V1 + 192); //+ 0xC0
	T9 = EMU_ReadU32(V1 + 200); //+ 0xC8
	A0 = EMU_ReadU32(A2 + 48); //+ 0x30
	A1 = EMU_ReadU32(A2 + 168); //+ 0xA8
	T8 = EMU_CheckedAdd(T8,T9);
	EMU_Write32(V1 + 204,T8); //+ 0xCC
	T9 = EMU_ReadU32(A2 + 52); //+ 0x34
	A1 <<= 8;
	A1 >>= 8;
	EMU_Write32(V1 + 424,A1); //+ 0x1A8
	EMU_Write32(V1 + 240,A0); //+ 0xF0
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 96,T9); //+ 0x60
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80011CB8,ZZ_11800_4B8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800420F4,0x80042170,ZZ_420F4);
ZZ_MARK_TARGET(0x80042170,0x80042180,ZZ_420F4_7C);
ZZ_MARK_TARGET(0x80042180,0x800421D4,ZZ_420F4_8C);
ZZ_MARK_TARGET(0x800421D4,0x8004229C,ZZ_420F4_E0);
ZZ_MARK_TARGET(0x8004229C,0x800422C8,ZZ_420F4_1A8);
ZZ_MARK_TARGET(0x800422C8,0x800422E4,ZZ_420F4_1D4);
ZZ_MARK_TARGET(0x800422E4,0x800423E4,ZZ_420F4_1F0);
ZZ_MARK_TARGET(0x800423E4,0x80042428,ZZ_420F4_2F0);
ZZ_MARK_TARGET(0x80042428,0x8004254C,ZZ_420F4_334);
ZZ_MARK_TARGET(0x8004254C,0x80042628,ZZ_420F4_458);
ZZ_MARK_TARGET(0x80042628,0x80042638,ZZ_420F4_534);
ZZ_MARK_TARGET(0x80042638,0x80042650,ZZ_420F4_544);
ZZ_MARK_TARGET(0x80042650,0x80042664,ZZ_420F4_55C);
ZZ_MARK_TARGET(0x80042664,0x80042674,ZZ_420F4_570);
ZZ_MARK_TARGET(0x80042674,0x8004267C,ZZ_420F4_580);
ZZ_MARK_TARGET(0x8004267C,0x800426B8,ZZ_420F4_588);
ZZ_MARK_TARGET(0x800426B8,0x80042700,ZZ_420F4_5C4);
ZZ_MARK_TARGET(0x80042700,0x8004272C,ZZ_420F4_60C);
ZZ_MARK_TARGET(0x8004272C,0x800427D8,ZZ_420F4_638);
ZZ_MARK_TARGET(0x800427D8,0x800427E0,ZZ_420F4_6E4);
ZZ_MARK_TARGET(0x800427E0,0x8004281C,ZZ_420F4_6EC);
ZZ_MARK_TARGET(0x8004281C,0x80042834,ZZ_420F4_728);
ZZ_MARK_TARGET(0x80042834,0x80042890,ZZ_420F4_740);
ZZ_MARK_TARGET(0x80042890,0x800428A0,ZZ_420F4_79C);
ZZ_MARK_TARGET(0x800428A0,0x800428AC,ZZ_420F4_7AC);
ZZ_MARK_TARGET(0x800428AC,0x800428E8,ZZ_420F4_7B8);
ZZ_MARK_TARGET(0x800428E8,0x80042910,ZZ_420F4_7F4);
ZZ_MARK_TARGET(0x80042910,0x80042930,ZZ_420F4_81C);
ZZ_MARK_TARGET(0x80042930,0x80042938,ZZ_420F4_83C);
ZZ_MARK_TARGET(0x80042938,0x80042980,ZZ_420F4_844);
ZZ_MARK_TARGET(0x80042980,0x800429AC,ZZ_420F4_88C);
ZZ_MARK_TARGET(0x800429AC,0x80042AA8,ZZ_420F4_8B8);
ZZ_MARK_TARGET(0x80042AA8,0x80042AB0,ZZ_420F4_9B4);
ZZ_MARK_TARGET(0x80042AB0,0x80042AEC,ZZ_420F4_9BC);
ZZ_MARK_TARGET(0x80042AEC,0x80042B08,ZZ_420F4_9F8);
ZZ_MARK_TARGET(0x80042B08,0x80042B64,ZZ_420F4_A14);
ZZ_MARK_TARGET(0x80042B64,0x80042B74,ZZ_420F4_A70);
ZZ_MARK_TARGET(0x80042B74,0x80042B80,ZZ_420F4_A80);
ZZ_MARK_TARGET(0x80042B80,0x80042BC4,ZZ_420F4_A8C);
ZZ_MARK_TARGET(0x80042BC4,0x80042BE0,ZZ_420F4_AD0);
ZZ_MARK_TARGET(0x80042BE0,0x80042BFC,ZZ_420F4_AEC);
ZZ_MARK_TARGET(0x80042BFC,0x80042C0C,ZZ_420F4_B08);
ZZ_MARK_TARGET(0x80042C0C,0x80042C34,ZZ_420F4_B18);
ZZ_MARK_TARGET(0x80042C34,0x80042C68,ZZ_420F4_B40);
