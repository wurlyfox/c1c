#ifdef ZZ_INCLUDE_CODE
ZZ_32BE0:
	SP -= 104;
	EMU_Write32(SP + 88,S2); //+ 0x58
	S2 = EMU_ReadU32(GP + 392); //+ 0x188
	EMU_Write32(SP + 96,S4); //+ 0x60
	S4 = 0x3FFF;
	EMU_Write32(SP + 92,S3); //+ 0x5C
	S3 = 0xFF;
	V1 = 0x80060000;
	V1 -= 2172;
	EMU_Write32(SP + 100,RA); //+ 0x64
	EMU_Write32(SP + 84,S1); //+ 0x54
	V0 = S2 << 2;
	V0 += S2;
	V0 <<= 4;
	S1 = V0 + V1;
	V0 = (int32_t)S2 < 24;
	if (!V0)
	{
		EMU_Write32(SP + 80,S0); //+ 0x50
		ZZ_CLOCKCYCLES(18,0x80032C68);
		goto ZZ_32BE0_88;
	}
	EMU_Write32(SP + 80,S0); //+ 0x50
	A0 = S1 + 4;
	ZZ_CLOCKCYCLES(19,0x80032C2C);
ZZ_32BE0_4C:
	V1 = EMU_ReadU8(A0 + 25); //+ 0x19
	V0 = (int32_t)V1 < (int32_t)S3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80032C44);
		goto ZZ_32BE0_64;
	}
	S3 = V1;
	ZZ_CLOCKCYCLES(6,0x80032C44);
ZZ_32BE0_64:
	V0 = EMU_ReadU32(A0);
	V0 &= 0x8;
	if (!V0)
	{
		V0 = S2;
		ZZ_CLOCKCYCLES(5,0x80032D80);
		goto ZZ_32BE0_1A0;
	}
	V0 = S2;
	S2 += 1;
	V0 = (int32_t)S2 < 24;
	if (V0)
	{
		A0 += 80;
		ZZ_CLOCKCYCLES(9,0x80032C2C);
		goto ZZ_32BE0_4C;
	}
	A0 += 80;
	ZZ_CLOCKCYCLES(9,0x80032C68);
ZZ_32BE0_88:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 203); //+ 0xFFFFFF35
	V0 = (int32_t)V0 < (int32_t)S3;
	if (V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(6,0x80032D80);
		goto ZZ_32BE0_1A0;
	}
	V0 = -1;
	S0 = EMU_ReadU32(GP + 392); //+ 0x188
	V1 = 0x80060000;
	V1 -= 2172;
	V0 = S0 << 2;
	V0 += S0;
	V0 <<= 4;
	S1 = V0 + V1;
	V0 = (int32_t)S0 < 24;
	if (!V0)
	{
		S2 = -1;
		ZZ_CLOCKCYCLES(16,0x80032D48);
		goto ZZ_32BE0_168;
	}
	S2 = -1;
	ZZ_CLOCKCYCLES(16,0x80032CA8);
ZZ_32BE0_C8:
	V0 = EMU_ReadU8(S1 + 29); //+ 0x1D
	if (V0 != S3)
	{
		A0 = SP + 16;
		ZZ_CLOCKCYCLES(4,0x80032D38);
		goto ZZ_32BE0_158;
	}
	A0 = SP + 16;
	V0 = 0x1;
	V0 <<= S0;
	RA = 0x80032CC8; //ZZ_32BE0_E8
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x80052440);
	goto ZZ_52440;
ZZ_32BE0_E8:
	V0 = EMU_ReadS16(SP + 24); //+ 0x18
	V1 = EMU_ReadS16(SP + 26); //+ 0x1A
	if ((int32_t)V0 >= 0)
	{
		A0 = V0;
		ZZ_CLOCKCYCLES(4,0x80032CDC);
		goto ZZ_32BE0_FC;
	}
	A0 = V0;
	A0 = -A0;
	ZZ_CLOCKCYCLES(5,0x80032CDC);
ZZ_32BE0_FC:
	if ((int32_t)V1 < 0)
	{
		V0 = (int32_t)V1 < (int32_t)A0;
		ZZ_CLOCKCYCLES(2,0x80032CF4);
		goto ZZ_32BE0_114;
	}
	V0 = (int32_t)V1 < (int32_t)A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80032D14);
		goto ZZ_32BE0_134;
	}
	ZZ_CLOCKCYCLES(6,0x80032D04);
	goto ZZ_32BE0_124;
ZZ_32BE0_114:
	V0 = -V1;
	V0 = (int32_t)V0 < (int32_t)A0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80032D10);
		goto ZZ_32BE0_130;
	}
	ZZ_CLOCKCYCLES(4,0x80032D04);
ZZ_32BE0_124:
	V1 = EMU_ReadS16(SP + 24); //+ 0x18
	ZZ_CLOCKCYCLES(3,0x80032D14);
	goto ZZ_32BE0_134;
ZZ_32BE0_130:
	V1 = EMU_ReadS16(SP + 26); //+ 0x1A
	ZZ_CLOCKCYCLES(1,0x80032D14);
ZZ_32BE0_134:
	if ((int32_t)V1 >= 0)
	{
		V0 = (int32_t)V1 < (int32_t)S4;
		ZZ_CLOCKCYCLES(3,0x80032D28);
		goto ZZ_32BE0_148;
	}
	V0 = (int32_t)V1 < (int32_t)S4;
	V1 = -V1;
	V0 = (int32_t)V1 < (int32_t)S4;
	ZZ_CLOCKCYCLES(5,0x80032D28);
ZZ_32BE0_148:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80032D38);
		goto ZZ_32BE0_158;
	}
	S2 = S0;
	S4 = V1;
	ZZ_CLOCKCYCLES(4,0x80032D38);
ZZ_32BE0_158:
	S0 += 1;
	V0 = (int32_t)S0 < 24;
	if (V0)
	{
		S1 += 80;
		ZZ_CLOCKCYCLES(4,0x80032CA8);
		goto ZZ_32BE0_C8;
	}
	S1 += 80;
	ZZ_CLOCKCYCLES(4,0x80032D48);
ZZ_32BE0_168:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 203); //+ 0xFFFFFF35
	if (S3 != V0)
	{
		V0 = S2;
		ZZ_CLOCKCYCLES(5,0x80032D80);
		goto ZZ_32BE0_1A0;
	}
	V0 = S2;
	V0 = (int32_t)S4 < 2048;
	if (V0)
	{
		V0 = S2;
		ZZ_CLOCKCYCLES(8,0x80032D80);
		goto ZZ_32BE0_1A0;
	}
	V0 = S2;
	RA = 0x80032D70; //ZZ_32BE0_190
	A0 = 0x64;
	ZZ_CLOCKCYCLES(10,0x80031884);
	goto ZZ_31884;
ZZ_32BE0_190:
	V0 = (int32_t)V0 < 50;
	if (V0)
	{
		V0 = S2;
		ZZ_CLOCKCYCLES(3,0x80032D80);
		goto ZZ_32BE0_1A0;
	}
	V0 = S2;
	V0 = -1;
	ZZ_CLOCKCYCLES(4,0x80032D80);
ZZ_32BE0_1A0:
	RA = EMU_ReadU32(SP + 100); //+ 0x64
	S4 = EMU_ReadU32(SP + 96); //+ 0x60
	S3 = EMU_ReadU32(SP + 92); //+ 0x5C
	S2 = EMU_ReadU32(SP + 88); //+ 0x58
	S1 = EMU_ReadU32(SP + 84); //+ 0x54
	S0 = EMU_ReadU32(SP + 80); //+ 0x50
	SP += 104;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80032EFC,ZZ_32E88_74);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80032BE0,0x80032C2C,ZZ_32BE0);
ZZ_MARK_TARGET(0x80032C2C,0x80032C44,ZZ_32BE0_4C);
ZZ_MARK_TARGET(0x80032C44,0x80032C68,ZZ_32BE0_64);
ZZ_MARK_TARGET(0x80032C68,0x80032CA8,ZZ_32BE0_88);
ZZ_MARK_TARGET(0x80032CA8,0x80032CC8,ZZ_32BE0_C8);
ZZ_MARK_TARGET(0x80032CC8,0x80032CDC,ZZ_32BE0_E8);
ZZ_MARK_TARGET(0x80032CDC,0x80032CF4,ZZ_32BE0_FC);
ZZ_MARK_TARGET(0x80032CF4,0x80032D04,ZZ_32BE0_114);
ZZ_MARK_TARGET(0x80032D04,0x80032D10,ZZ_32BE0_124);
ZZ_MARK_TARGET(0x80032D10,0x80032D14,ZZ_32BE0_130);
ZZ_MARK_TARGET(0x80032D14,0x80032D28,ZZ_32BE0_134);
ZZ_MARK_TARGET(0x80032D28,0x80032D38,ZZ_32BE0_148);
ZZ_MARK_TARGET(0x80032D38,0x80032D48,ZZ_32BE0_158);
ZZ_MARK_TARGET(0x80032D48,0x80032D70,ZZ_32BE0_168);
ZZ_MARK_TARGET(0x80032D70,0x80032D80,ZZ_32BE0_190);
ZZ_MARK_TARGET(0x80032D80,0x80032DA4,ZZ_32BE0_1A0);
