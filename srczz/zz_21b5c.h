#ifdef ZZ_INCLUDE_CODE
ZZ_21B5C:
	SP -= 40;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A0;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A1;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = A2;
	EMU_Write32(SP + 32,S4); //+ 0x20
	S4 = A3;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = R0;
	EMU_Write32(SP + 36,RA); //+ 0x24
	ZZ_CLOCKCYCLES(12,0x80021B8C);
ZZ_21B5C_30:
	A0 = EMU_ReadU32(S2);
	V0 = A0 & 0x1;
	if (!V0)
	{
		V0 = A0 >> 13;
		ZZ_CLOCKCYCLES(5,0x80021BF8);
		goto ZZ_21B5C_9C;
	}
	V0 = A0 >> 13;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 30760); //+ 0x7828
	V0 &= 0x3FC;
	V0 += V1;
	V1 = EMU_ReadU32(V0);
	if (!S0)
	{
		V0 = S0 < V1;
		ZZ_CLOCKCYCLES(12,0x80021BC4);
		goto ZZ_21B5C_68;
	}
	V0 = S0 < V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(14,0x80021BC8);
		goto ZZ_21B5C_6C;
	}
	ZZ_CLOCKCYCLES(14,0x80021BC4);
ZZ_21B5C_68:
	S0 = V1;
	ZZ_CLOCKCYCLES(1,0x80021BC8);
ZZ_21B5C_6C:
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	if (V0 == A0)
	{
		V0 = S3 & 0x8;
		ZZ_CLOCKCYCLES(4,0x80021C00);
		goto ZZ_21B5C_A4;
	}
	V0 = S3 & 0x8;
	S0 += 8;
	ZZ_CLOCKCYCLES(5,0x80021BDC);
ZZ_21B5C_80:
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	if (V0 != A0)
	{
		S0 += 8;
		ZZ_CLOCKCYCLES(4,0x80021BDC);
		goto ZZ_21B5C_80;
	}
	S0 += 8;
	S0 -= 8;
	V0 = S3 & 0x8;
	ZZ_CLOCKCYCLES(7,0x80021C00);
	goto ZZ_21B5C_A4;
ZZ_21B5C_9C:
	S0 = A0;
	V0 = S3 & 0x8;
	ZZ_CLOCKCYCLES(2,0x80021C00);
ZZ_21B5C_A4:
	if (!V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(2,0x80021C1C);
		goto ZZ_21B5C_C0;
	}
	A0 = S0;
	A1 = S3 | 0x2;
	RA = 0x80021C14; //ZZ_21B5C_B8
	A2 = S4;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_21B5C_B8:
	S1 -= 1;
	ZZ_CLOCKCYCLES(2,0x80021C38);
	goto ZZ_21B5C_DC;
ZZ_21B5C_C0:
	V0 = S3 & 0x4;
	if (!V0)
	{
		A1 = S4;
		ZZ_CLOCKCYCLES(3,0x80021C2C);
		goto ZZ_21B5C_D0;
	}
	A1 = S4;
	A1 = -A1;
	ZZ_CLOCKCYCLES(4,0x80021C2C);
ZZ_21B5C_D0:
	RA = 0x80021C34; //ZZ_21B5C_D8
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80014450);
	goto ZZ_14450;
ZZ_21B5C_D8:
	S1 -= 1;
	ZZ_CLOCKCYCLES(1,0x80021C38);
ZZ_21B5C_DC:
	if (S1)
	{
		S2 += 4;
		ZZ_CLOCKCYCLES(2,0x80021B8C);
		goto ZZ_21B5C_30;
	}
	S2 += 4;
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80021AE0,ZZ_21A54_8C);
	ZZ_JUMPREGISTER(0x80021B40,ZZ_21A54_EC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80021B5C,0x80021B8C,ZZ_21B5C);
ZZ_MARK_TARGET(0x80021B8C,0x80021BC4,ZZ_21B5C_30);
ZZ_MARK_TARGET(0x80021BC4,0x80021BC8,ZZ_21B5C_68);
ZZ_MARK_TARGET(0x80021BC8,0x80021BDC,ZZ_21B5C_6C);
ZZ_MARK_TARGET(0x80021BDC,0x80021BF8,ZZ_21B5C_80);
ZZ_MARK_TARGET(0x80021BF8,0x80021C00,ZZ_21B5C_9C);
ZZ_MARK_TARGET(0x80021C00,0x80021C14,ZZ_21B5C_A4);
ZZ_MARK_TARGET(0x80021C14,0x80021C1C,ZZ_21B5C_B8);
ZZ_MARK_TARGET(0x80021C1C,0x80021C2C,ZZ_21B5C_C0);
ZZ_MARK_TARGET(0x80021C2C,0x80021C34,ZZ_21B5C_D0);
ZZ_MARK_TARGET(0x80021C34,0x80021C38,ZZ_21B5C_D8);
ZZ_MARK_TARGET(0x80021C38,0x80021C64,ZZ_21B5C_DC);
