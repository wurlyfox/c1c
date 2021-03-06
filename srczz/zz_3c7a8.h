#ifdef ZZ_INCLUDE_CODE
ZZ_3C7A8:
	SP -= 96;
	EMU_Write32(SP + 84,S5); //+ 0x54
	S5 = A0;
	EMU_Write32(SP + 80,S4); //+ 0x50
	S4 = A1;
	EMU_Write32(SP + 68,S1); //+ 0x44
	S1 = R0;
	EMU_Write32(SP + 92,RA); //+ 0x5C
	EMU_Write32(SP + 88,S6); //+ 0x58
	EMU_Write32(SP + 76,S3); //+ 0x4C
	EMU_Write32(SP + 72,S2); //+ 0x48
	if ((int32_t)S4 <= 0)
	{
		EMU_Write32(SP + 64,S0); //+ 0x40
		ZZ_CLOCKCYCLES(13,0x8003C8D4);
		goto ZZ_3C7A8_12C;
	}
	EMU_Write32(SP + 64,S0); //+ 0x40
	S2 = S5;
	ZZ_CLOCKCYCLES(14,0x8003C7E0);
ZZ_3C7A8_38:
	A0 = 0x80010000;
	A0 += 3720;
	A1 = S2;
	RA = 0x8003C7F4; //ZZ_3C7A8_4C
	A2 = 0xC;
	ZZ_CLOCKCYCLES(5,0x8003D6C0);
	goto ZZ_3D6C0;
ZZ_3C7A8_4C:
	S6 = V0 < 1;
	V1 = S1 + 1;
	V0 = (int32_t)V1 < (int32_t)S4;
	if (!V0)
	{
		S3 = S1 << 2;
		ZZ_CLOCKCYCLES(5,0x8003C8C4);
		goto ZZ_3C7A8_11C;
	}
	S3 = S1 << 2;
	V0 = V1 << 2;
	V0 += V1;
	V0 <<= 3;
	S0 = V0 + S5;
	V0 = S3 + S1;
	V0 <<= 3;
	S3 = V0 + S5;
	ZZ_CLOCKCYCLES(12,0x8003C824);
ZZ_3C7A8_7C:
	A0 = 0x80010000;
	A0 += 3720;
	A1 = S0;
	RA = 0x8003C838; //ZZ_3C7A8_90
	A2 = 0xC;
	ZZ_CLOCKCYCLES(5,0x8003D6C0);
	goto ZZ_3D6C0;
ZZ_3C7A8_90:
	if (S6)
	{
		V0 = V0 < 1;
		ZZ_CLOCKCYCLES(2,0x8003C850);
		goto ZZ_3C7A8_A8;
	}
	V0 = V0 < 1;
	if (V0)
	{
		A0 = S2;
		ZZ_CLOCKCYCLES(4,0x8003C8A4);
		goto ZZ_3C7A8_FC;
	}
	A0 = S2;
	ZZ_CLOCKCYCLES(6,0x8003C858);
	goto ZZ_3C7A8_B0;
ZZ_3C7A8_A8:
	if (!V0)
	{
		A0 = S2;
		ZZ_CLOCKCYCLES(2,0x8003C868);
		goto ZZ_3C7A8_C0;
	}
	A0 = S2;
	ZZ_CLOCKCYCLES(2,0x8003C858);
ZZ_3C7A8_B0:
	RA = 0x8003C860; //ZZ_3C7A8_B8
	A1 = S0;
	ZZ_CLOCKCYCLES(2,0x8003D6B0);
	goto ZZ_3D6B0;
ZZ_3C7A8_B8:
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(2,0x8003C8A4);
		goto ZZ_3C7A8_FC;
	}
	ZZ_CLOCKCYCLES(2,0x8003C868);
ZZ_3C7A8_C0:
	A0 = S3;
	A1 = SP + 16;
	RA = 0x8003C878; //ZZ_3C7A8_D0
	A2 = 0x14;
	ZZ_CLOCKCYCLES(4,0x80033FBC);
	goto ZZ_33FBC;
ZZ_3C7A8_D0:
	A0 = S0;
	A1 = S3;
	RA = 0x8003C888; //ZZ_3C7A8_E0
	A2 = 0x14;
	ZZ_CLOCKCYCLES(4,0x80033FBC);
	goto ZZ_33FBC;
ZZ_3C7A8_E0:
	A0 = SP + 16;
	A1 = S0;
	RA = 0x8003C898; //ZZ_3C7A8_F0
	A2 = 0x14;
	ZZ_CLOCKCYCLES(4,0x80033FBC);
	goto ZZ_33FBC;
ZZ_3C7A8_F0:
	S2 -= 40;
	S1 -= 1;
	ZZ_CLOCKCYCLES(3,0x8003C8C4);
	goto ZZ_3C7A8_11C;
ZZ_3C7A8_FC:
	S0 += 40;
	V0 = S4 << 2;
	V0 += S4;
	V0 <<= 3;
	V0 += S5;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x8003C824);
		goto ZZ_3C7A8_7C;
	}
	ZZ_CLOCKCYCLES(8,0x8003C8C4);
ZZ_3C7A8_11C:
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)S4;
	if (V0)
	{
		S2 += 40;
		ZZ_CLOCKCYCLES(4,0x8003C7E0);
		goto ZZ_3C7A8_38;
	}
	S2 += 40;
	ZZ_CLOCKCYCLES(4,0x8003C8D4);
ZZ_3C7A8_12C:
	RA = EMU_ReadU32(SP + 92); //+ 0x5C
	S6 = EMU_ReadU32(SP + 88); //+ 0x58
	S5 = EMU_ReadU32(SP + 84); //+ 0x54
	S4 = EMU_ReadU32(SP + 80); //+ 0x50
	S3 = EMU_ReadU32(SP + 76); //+ 0x4C
	S2 = EMU_ReadU32(SP + 72); //+ 0x48
	S1 = EMU_ReadU32(SP + 68); //+ 0x44
	S0 = EMU_ReadU32(SP + 64); //+ 0x40
	SP += 96;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x8003ACD0,ZZ_3AC2C_A4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003C7A8,0x8003C7E0,ZZ_3C7A8);
ZZ_MARK_TARGET(0x8003C7E0,0x8003C7F4,ZZ_3C7A8_38);
ZZ_MARK_TARGET(0x8003C7F4,0x8003C824,ZZ_3C7A8_4C);
ZZ_MARK_TARGET(0x8003C824,0x8003C838,ZZ_3C7A8_7C);
ZZ_MARK_TARGET(0x8003C838,0x8003C850,ZZ_3C7A8_90);
ZZ_MARK_TARGET(0x8003C850,0x8003C858,ZZ_3C7A8_A8);
ZZ_MARK_TARGET(0x8003C858,0x8003C860,ZZ_3C7A8_B0);
ZZ_MARK_TARGET(0x8003C860,0x8003C868,ZZ_3C7A8_B8);
ZZ_MARK_TARGET(0x8003C868,0x8003C878,ZZ_3C7A8_C0);
ZZ_MARK_TARGET(0x8003C878,0x8003C888,ZZ_3C7A8_D0);
ZZ_MARK_TARGET(0x8003C888,0x8003C898,ZZ_3C7A8_E0);
ZZ_MARK_TARGET(0x8003C898,0x8003C8A4,ZZ_3C7A8_F0);
ZZ_MARK_TARGET(0x8003C8A4,0x8003C8C4,ZZ_3C7A8_FC);
ZZ_MARK_TARGET(0x8003C8C4,0x8003C8D4,ZZ_3C7A8_11C);
ZZ_MARK_TARGET(0x8003C8D4,0x8003C900,ZZ_3C7A8_12C);
