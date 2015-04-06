#ifdef ZZ_INCLUDE_CODE
ZZ_23D78:
	SP -= 80;
	EMU_Write32(SP + 52,S1); //+ 0x34
	S1 = A0;
	EMU_Write32(SP + 76,RA); //+ 0x4C
	EMU_Write32(SP + 72,S6); //+ 0x48
	EMU_Write32(SP + 68,S5); //+ 0x44
	EMU_Write32(SP + 64,S4); //+ 0x40
	EMU_Write32(SP + 60,S3); //+ 0x3C
	EMU_Write32(SP + 56,S2); //+ 0x38
	EMU_Write32(SP + 48,S0); //+ 0x30
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2924); //+ 0xB6C
	S5 = A1;
	if (V1 != V0)
	{
		S6 = A2;
		ZZ_CLOCKCYCLES(16,0x80023DD0);
		goto ZZ_23D78_58;
	}
	S6 = A2;
	S3 = 0x80060000;
	S3 = EMU_ReadU32(S3 + 2952); //+ 0xB88
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2932); //+ 0xB74
	ZZ_CLOCKCYCLES(22,0x80023E50);
	goto ZZ_23D78_D8;
ZZ_23D78_58:
	S0 = 0x2;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,S0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	A0 = EMU_ReadU32(S1 + 4); //+ 0x4
	A1 = 0x29;
	A2 = R0;
	RA = 0x80023DF4; //ZZ_23D78_7C
	A3 = R0;
	ZZ_CLOCKCYCLES(9,0x800324E0);
	goto ZZ_324E0;
ZZ_23D78_7C:
	S3 = V0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,S0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	A0 = EMU_ReadU32(S1 + 4); //+ 0x4
	A1 = 0x173;
	A2 = R0;
	RA = 0x80023E18; //ZZ_23D78_A0
	A3 = R0;
	ZZ_CLOCKCYCLES(9,0x800324E0);
	goto ZZ_324E0;
ZZ_23D78_A0:
	A1 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	S0 = V0;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2964); //+ 0xB94
	V1 = EMU_ReadU32(V1 + 388); //+ 0x184
	V0 = S0 << 1;
	V0 += S0;
	V0 += A0;
	V0 += V1;
	V0 <<= 2;
	V0 += A1;
	A0 = EMU_ReadU32(V0 + 16); //+ 0x10
	ZZ_CLOCKCYCLES(14,0x80023E50);
ZZ_23D78_D8:
	S2 = 0x80060000;
	S2 -= 17216;
	S4 = EMU_ReadU32(S1 + 8); //+ 0x8
	if (S3)
	{
		A1 = 0x142;
		ZZ_CLOCKCYCLES(5,0x80023E68);
		goto ZZ_23D78_F0;
	}
	A1 = 0x142;
	S2 += 24;
	ZZ_CLOCKCYCLES(6,0x80023E68);
ZZ_23D78_F0:
	A2 = S4;
	A3 = R0;
	V0 = 0x3;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = SP + 40;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	RA = 0x80023E90; //ZZ_23D78_118
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(10,0x80031DF4);
	goto ZZ_31DF4;
ZZ_23D78_118:
	A0 = V0;
	if (A0)
	{
		V0 = S3 < 11;
		ZZ_CLOCKCYCLES(3,0x80023F20);
		goto ZZ_23D78_1A8;
	}
	V0 = S3 < 11;
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2924); //+ 0xB6C
	if (V1 != V0)
	{
		A1 = 0x142;
		ZZ_CLOCKCYCLES(9,0x80023EC4);
		goto ZZ_23D78_14C;
	}
	A1 = 0x142;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2928); //+ 0xB70
	ZZ_CLOCKCYCLES(13,0x80023EF0);
	goto ZZ_23D78_178;
ZZ_23D78_14C:
	V1 = EMU_ReadU32(S1);
	V0 = EMU_ReadU32(V1 + 16); //+ 0x10
	A0 = EMU_ReadU32(V0 + 388); //+ 0x184
	V0 = S0 << 1;
	V0 += S0;
	V0 += A0;
	V0 <<= 2;
	V1 += V0;
	A0 = EMU_ReadU32(V1 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(11,0x80023EF0);
ZZ_23D78_178:
	A2 = S4;
	A3 = R0;
	V0 = 0x3;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = SP + 40;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 24,V0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	RA = 0x80023F18; //ZZ_23D78_1A0
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(10,0x80031DF4);
	goto ZZ_31DF4;
ZZ_23D78_1A0:
	A0 = V0;
	V0 = S3 < 11;
	ZZ_CLOCKCYCLES(2,0x80023F20);
ZZ_23D78_1A8:
	if (!V0)
	{
		V0 = S3 << 2;
		ZZ_CLOCKCYCLES(2,0x80023FAC);
		goto ZZ_23D78_234;
	}
	V0 = S3 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 1080); //+ 0x438
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x80023F40,ZZ_23D78_1C8);
	ZZ_JUMPREGISTER(0x80023FAC,ZZ_23D78_234);
	ZZ_JUMPREGISTER_END();
ZZ_23D78_1C8:
	V0 = EMU_ReadS16(A0);
	V1 = EMU_ReadS16(A0 + 2); //+ 0x2
	A1 = EMU_ReadU32(S2 + 12); //+ 0xC
	A3 = V0 << 8;
	if (!A1)
	{
		A2 = V1 << 8;
		ZZ_CLOCKCYCLES(6,0x80023FBC);
		goto ZZ_23D78_244;
	}
	A2 = V1 << 8;
	V0 = EMU_ReadS16(A0 + 4); //+ 0x4
	V1 = EMU_ReadS16(A0 + 6); //+ 0x6
	A0 = V0 << 8;
	V0 = 0x400;
	if (A1 != V0)
	{
		V1 <<= 8;
		ZZ_CLOCKCYCLES(12,0x80023F7C);
		goto ZZ_23D78_204;
	}
	V1 <<= 8;
	A3 = A0;
	A2 = V1;
	ZZ_CLOCKCYCLES(15,0x80023FBC);
	goto ZZ_23D78_244;
ZZ_23D78_204:
	V0 = A0 - A3;
	EMU_SMultiply(V0,A1);
	T1 = LO;
	V0 = V1 - A2;
	EMU_SMultiply(V0,A1);
	V0 = (int32_t)T1 >> 10;
	A3 += V0;
	V1 = LO;
	V0 = (int32_t)V1 >> 10;
	A2 += V0;
	ZZ_CLOCKCYCLES(12,0x80023FBC);
	goto ZZ_23D78_244;
ZZ_23D78_234:
	V0 = EMU_ReadS16(A0);
	V1 = EMU_ReadS16(A0 + 2); //+ 0x2
	A3 = V0 << 8;
	A2 = V1 << 8;
	ZZ_CLOCKCYCLES(4,0x80023FBC);
ZZ_23D78_244:
	EMU_Write32(S5,A3);
	EMU_Write32(S6,A2);
	RA = EMU_ReadU32(SP + 76); //+ 0x4C
	S6 = EMU_ReadU32(SP + 72); //+ 0x48
	S5 = EMU_ReadU32(SP + 68); //+ 0x44
	S4 = EMU_ReadU32(SP + 64); //+ 0x40
	S3 = EMU_ReadU32(SP + 60); //+ 0x3C
	S2 = EMU_ReadU32(SP + 56); //+ 0x38
	S1 = EMU_ReadU32(SP + 52); //+ 0x34
	S0 = EMU_ReadU32(SP + 48); //+ 0x30
	SP += 80;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x800245F8,ZZ_245B0_48);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80023D78,0x80023DD0,ZZ_23D78);
ZZ_MARK_TARGET(0x80023DD0,0x80023DF4,ZZ_23D78_58);
ZZ_MARK_TARGET(0x80023DF4,0x80023E18,ZZ_23D78_7C);
ZZ_MARK_TARGET(0x80023E18,0x80023E50,ZZ_23D78_A0);
ZZ_MARK_TARGET(0x80023E50,0x80023E68,ZZ_23D78_D8);
ZZ_MARK_TARGET(0x80023E68,0x80023E90,ZZ_23D78_F0);
ZZ_MARK_TARGET(0x80023E90,0x80023EC4,ZZ_23D78_118);
ZZ_MARK_TARGET(0x80023EC4,0x80023EF0,ZZ_23D78_14C);
ZZ_MARK_TARGET(0x80023EF0,0x80023F18,ZZ_23D78_178);
ZZ_MARK_TARGET(0x80023F18,0x80023F20,ZZ_23D78_1A0);
ZZ_MARK_TARGET(0x80023F20,0x80023F40,ZZ_23D78_1A8);
ZZ_MARK_TARGET(0x80023F40,0x80023F7C,ZZ_23D78_1C8);
ZZ_MARK_TARGET(0x80023F7C,0x80023FAC,ZZ_23D78_204);
ZZ_MARK_TARGET(0x80023FAC,0x80023FBC,ZZ_23D78_234);
ZZ_MARK_TARGET(0x80023FBC,0x80023FF0,ZZ_23D78_244);
