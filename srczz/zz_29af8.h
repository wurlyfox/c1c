#ifdef ZZ_INCLUDE_CODE
ZZ_29AF8:
	SP -= 88;
	EMU_Write32(SP + 64,S0); //+ 0x40
	S0 = A0;
	EMU_Write32(SP + 68,S1); //+ 0x44
	S1 = A1;
	EMU_Write32(SP + 76,S3); //+ 0x4C
	S3 = A2;
	EMU_Write32(SP + 80,RA); //+ 0x50
	if (S0)
	{
		EMU_Write32(SP + 72,S2); //+ 0x48
		ZZ_CLOCKCYCLES(10,0x80029B2C);
		goto ZZ_29AF8_34;
	}
	EMU_Write32(SP + 72,S2); //+ 0x48
	EMU_Write32(GP + 340,R0); //+ 0x154
	ZZ_CLOCKCYCLES(13,0x80029F84);
	goto ZZ_29AF8_48C;
ZZ_29AF8_34:
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	EMU_Write32(V0 + 72,R0); //+ 0x48
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 30772); //+ 0x7834
	V1 = EMU_ReadU32(V0 + 8); //+ 0x8
	V0 = 0x1D;
	if (V1 == V0)
	{
		V0 = V1 < 30;
		ZZ_CLOCKCYCLES(10,0x80029B80);
		goto ZZ_29AF8_88;
	}
	V0 = V1 < 30;
	if (!V0)
	{
		V0 = 0x17;
		ZZ_CLOCKCYCLES(12,0x80029B6C);
		goto ZZ_29AF8_74;
	}
	V0 = 0x17;
	if (V1 == V0)
	{
		V0 = 0xF424;
		ZZ_CLOCKCYCLES(14,0x80029B80);
		goto ZZ_29AF8_88;
	}
	V0 = 0xF424;
	ZZ_CLOCKCYCLES(16,0x80029BA0);
	goto ZZ_29AF8_A8;
ZZ_29AF8_74:
	V0 = 0x22;
	if (V1 == V0)
	{
		V0 = 0x25;
		ZZ_CLOCKCYCLES(3,0x80029B80);
		goto ZZ_29AF8_88;
	}
	V0 = 0x25;
	if (V1 != V0)
	{
		V0 = 0xF424;
		ZZ_CLOCKCYCLES(5,0x80029BA0);
		goto ZZ_29AF8_A8;
	}
	V0 = 0xF424;
	ZZ_CLOCKCYCLES(5,0x80029B80);
ZZ_29AF8_88:
	V0 = EMU_ReadU32(S0 + 256); //+ 0x100
	V1 = 0x20000000;
	V0 &= V1;
	if (!V0)
	{
		V0 = 0x20000;
		ZZ_CLOCKCYCLES(5,0x80029B9C);
		goto ZZ_29AF8_A4;
	}
	V0 = 0x20000;
	V0 |= 0x7AC4;
	ZZ_CLOCKCYCLES(7,0x80029BA0);
	goto ZZ_29AF8_A8;
ZZ_29AF8_A4:
	V0 = 0xF424;
	ZZ_CLOCKCYCLES(1,0x80029BA0);
ZZ_29AF8_A8:
	EMU_Write32(GP + 136,V0); //+ 0x88
	V0 = EMU_ReadU32(S0 + 96); //+ 0x60
	V1 = EMU_ReadU32(GP + 340); //+ 0x154
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S0 + 100); //+ 0x64
	EMU_Write32(SP + 28,V0); //+ 0x1C
	V0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadU32(S1);
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	S2 = S0 + 96;
	if (!V1)
	{
		EMU_Write32(SP + 48,V0); //+ 0x30
		ZZ_CLOCKCYCLES(20,0x80029CAC);
		goto ZZ_29AF8_1B4;
	}
	EMU_Write32(SP + 48,V0); //+ 0x30
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 2248); //+ 0xFFFFF738
	V1 = EMU_ReadU32(S1);
	V0 = A0 - V1;
	if ((int32_t)V0 < 0)
	{
		V0 = (int32_t)V0 < 10;
		ZZ_CLOCKCYCLES(27,0x80029C1C);
		goto ZZ_29AF8_124;
	}
	V0 = (int32_t)V0 < 10;
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(29,0x80029C2C);
		goto ZZ_29AF8_134;
	}
	A0 = S0;
	ZZ_CLOCKCYCLES(31,0x80029CB0);
	goto ZZ_29AF8_1B8;
ZZ_29AF8_124:
	V0 = V1 - A0;
	V0 = (int32_t)V0 < 10;
	if (!V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(4,0x80029CB0);
		goto ZZ_29AF8_1B8;
	}
	A0 = S0;
	ZZ_CLOCKCYCLES(4,0x80029C2C);
ZZ_29AF8_134:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 2244); //+ 0xFFFFF73C
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 = A0 - V1;
	if ((int32_t)V0 < 0)
	{
		V0 = (int32_t)V0 < 10;
		ZZ_CLOCKCYCLES(7,0x80029C58);
		goto ZZ_29AF8_160;
	}
	V0 = (int32_t)V0 < 10;
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(9,0x80029C68);
		goto ZZ_29AF8_170;
	}
	A0 = S0;
	ZZ_CLOCKCYCLES(11,0x80029CB0);
	goto ZZ_29AF8_1B8;
ZZ_29AF8_160:
	V0 = V1 - A0;
	V0 = (int32_t)V0 < 10;
	if (!V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(4,0x80029CB0);
		goto ZZ_29AF8_1B8;
	}
	A0 = S0;
	ZZ_CLOCKCYCLES(4,0x80029C68);
ZZ_29AF8_170:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 2240); //+ 0xFFFFF740
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = A0 - V1;
	if ((int32_t)V0 < 0)
	{
		V0 = (int32_t)V0 < 10;
		ZZ_CLOCKCYCLES(7,0x80029C94);
		goto ZZ_29AF8_19C;
	}
	V0 = (int32_t)V0 < 10;
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(9,0x80029CA4);
		goto ZZ_29AF8_1AC;
	}
	A0 = S0;
	ZZ_CLOCKCYCLES(11,0x80029CB0);
	goto ZZ_29AF8_1B8;
ZZ_29AF8_19C:
	V0 = V1 - A0;
	V0 = (int32_t)V0 < 10;
	if (!V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(4,0x80029CB0);
		goto ZZ_29AF8_1B8;
	}
	A0 = S0;
	ZZ_CLOCKCYCLES(4,0x80029CA4);
ZZ_29AF8_1AC:
	EMU_Write32(SP + 48,R0); //+ 0x30
	EMU_Write32(SP + 40,R0); //+ 0x28
	ZZ_CLOCKCYCLES(2,0x80029CAC);
ZZ_29AF8_1B4:
	A0 = S0;
	ZZ_CLOCKCYCLES(1,0x80029CB0);
ZZ_29AF8_1B8:
	A1 = S3;
	A2 = SP + 24;
	RA = 0x80029CC0; //ZZ_29AF8_1C8
	A3 = SP + 40;
	ZZ_CLOCKCYCLES(4,0x80029FA4);
	goto ZZ_29FA4;
ZZ_29AF8_1C8:
	V0 = EMU_ReadU32(GP + 340); //+ 0x154
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x80029DCC);
		goto ZZ_29AF8_2D4;
	}
	V0 = EMU_ReadU32(S1);
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x80029CF0);
		goto ZZ_29AF8_1F8;
	}
	V0 = EMU_ReadU32(S1 + 8); //+ 0x8
	if (!V0)
	{
		ZZ_CLOCKCYCLES(12,0x80029DCC);
		goto ZZ_29AF8_2D4;
	}
	ZZ_CLOCKCYCLES(12,0x80029CF0);
ZZ_29AF8_1F8:
	A0 = EMU_ReadU32(S2);
	V1 = EMU_ReadU32(SP + 24); //+ 0x18
	V0 = A0 - V1;
	if ((int32_t)V0 < 0)
	{
		V0 = (int32_t)V0 < 2;
		ZZ_CLOCKCYCLES(6,0x80029D18);
		goto ZZ_29AF8_220;
	}
	V0 = (int32_t)V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x80029DCC);
		goto ZZ_29AF8_2D4;
	}
	ZZ_CLOCKCYCLES(10,0x80029D28);
	goto ZZ_29AF8_230;
ZZ_29AF8_220:
	V0 = V1 - A0;
	V0 = (int32_t)V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80029DCC);
		goto ZZ_29AF8_2D4;
	}
	ZZ_CLOCKCYCLES(4,0x80029D28);
ZZ_29AF8_230:
	A0 = EMU_ReadU32(S2 + 4); //+ 0x4
	V1 = EMU_ReadU32(SP + 28); //+ 0x1C
	V0 = A0 - V1;
	if ((int32_t)V0 < 0)
	{
		V0 = (int32_t)V0 < 2;
		ZZ_CLOCKCYCLES(6,0x80029D50);
		goto ZZ_29AF8_258;
	}
	V0 = (int32_t)V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x80029DCC);
		goto ZZ_29AF8_2D4;
	}
	ZZ_CLOCKCYCLES(10,0x80029D60);
	goto ZZ_29AF8_268;
ZZ_29AF8_258:
	V0 = V1 - A0;
	V0 = (int32_t)V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80029DCC);
		goto ZZ_29AF8_2D4;
	}
	ZZ_CLOCKCYCLES(4,0x80029D60);
ZZ_29AF8_268:
	A0 = EMU_ReadU32(S2 + 8); //+ 0x8
	V1 = EMU_ReadU32(SP + 32); //+ 0x20
	V0 = A0 - V1;
	if ((int32_t)V0 < 0)
	{
		V0 = (int32_t)V0 < 2;
		ZZ_CLOCKCYCLES(6,0x80029D88);
		goto ZZ_29AF8_290;
	}
	V0 = (int32_t)V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x80029DCC);
		goto ZZ_29AF8_2D4;
	}
	ZZ_CLOCKCYCLES(10,0x80029D98);
	goto ZZ_29AF8_2A0;
ZZ_29AF8_290:
	V0 = V1 - A0;
	V0 = (int32_t)V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80029DCC);
		goto ZZ_29AF8_2D4;
	}
	ZZ_CLOCKCYCLES(4,0x80029D98);
ZZ_29AF8_2A0:
	V0 = EMU_ReadU32(S1);
	AT = 0x80060000;
	EMU_Write32(AT - 2248,V0); //+ 0xFFFFF738
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	AT = 0x80060000;
	EMU_Write32(AT - 2244,V0); //+ 0xFFFFF73C
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = 0x1;
	EMU_Write32(GP + 340,V0); //+ 0x154
	AT = 0x80060000;
	EMU_Write32(AT - 2240,V1); //+ 0xFFFFF740
	ZZ_CLOCKCYCLES(13,0x80029DD0);
	goto ZZ_29AF8_2D8;
ZZ_29AF8_2D4:
	EMU_Write32(GP + 340,R0); //+ 0x154
	ZZ_CLOCKCYCLES(1,0x80029DD0);
ZZ_29AF8_2D8:
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	EMU_Write32(S2,V0);
	V0 = EMU_ReadU32(SP + 28); //+ 0x1C
	EMU_Write32(S2 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 32); //+ 0x20
	EMU_Write32(S2 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V0 &= 0x400;
	if (!V0)
	{
		V0 = 0x30000;
		ZZ_CLOCKCYCLES(14,0x80029F84);
		goto ZZ_29AF8_48C;
	}
	V0 = 0x30000;
	A0 = EMU_ReadU32(S0 + 284); //+ 0x11C
	V0 |= 0xFFFF;
	V0 = V0 < A0;
	if (!V0)
	{
		V1 = 0x40000;
		ZZ_CLOCKCYCLES(19,0x80029E68);
		goto ZZ_29AF8_370;
	}
	V1 = 0x40000;
	V1 |= 0x24;
	V0 = V1 < A0;
	if (!V0)
	{
		V0 = A0 - V1;
		ZZ_CLOCKCYCLES(23,0x80029E3C);
		goto ZZ_29AF8_344;
	}
	V0 = A0 - V1;
	V0 <<= 8;
	EMU_Write32(SP + 56,V0); //+ 0x38
	A0 = 0x100;
	ZZ_CLOCKCYCLES(27,0x80029E58);
	goto ZZ_29AF8_360;
ZZ_29AF8_344:
	V1 = 0xFFFB0000;
	V1 |= 0xFFE3;
	V1 += A0;
	V0 = 0x100;
	V0 <<= V1;
	EMU_Write32(SP + 56,V0); //+ 0x38
	A0 = R0;
	ZZ_CLOCKCYCLES(7,0x80029E58);
ZZ_29AF8_360:
	RA = 0x80029E60; //ZZ_29AF8_368
	A1 = SP + 56;
	ZZ_CLOCKCYCLES(2,0x80026250);
	goto ZZ_26250;
ZZ_29AF8_368:
	ZZ_CLOCKCYCLES(2,0x80029F84);
	goto ZZ_29AF8_48C;
ZZ_29AF8_370:
	V1 = EMU_ReadU32(S0 + 284); //+ 0x11C
	V0 = 0x6400;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	V0 = 0x3000;
	if (V1 == V0)
	{
		V0 = V1 < 12289;
		ZZ_CLOCKCYCLES(6,0x80029F48);
		goto ZZ_29AF8_450;
	}
	V0 = V1 < 12289;
	if (!V0)
	{
		V0 = 0x900;
		ZZ_CLOCKCYCLES(8,0x80029EA0);
		goto ZZ_29AF8_3A8;
	}
	V0 = 0x900;
	if (V1 == V0)
	{
		V0 = 0x1F00;
		ZZ_CLOCKCYCLES(10,0x80029F2C);
		goto ZZ_29AF8_434;
	}
	V0 = 0x1F00;
	if (V1 == V0)
	{
		V0 = SP + 60;
		ZZ_CLOCKCYCLES(12,0x80029EBC);
		goto ZZ_29AF8_3C4;
	}
	V0 = SP + 60;
	ZZ_CLOCKCYCLES(14,0x80029F6C);
	goto ZZ_29AF8_474;
ZZ_29AF8_3A8:
	V0 = 0x3100;
	if (V1 == V0)
	{
		V0 = 0x4200;
		ZZ_CLOCKCYCLES(3,0x80029F48);
		goto ZZ_29AF8_450;
	}
	V0 = 0x4200;
	if (V1 == V0)
	{
		A0 = 0xFFFE0000;
		ZZ_CLOCKCYCLES(5,0x80029EF8);
		goto ZZ_29AF8_400;
	}
	A0 = 0xFFFE0000;
	V0 = SP + 60;
	ZZ_CLOCKCYCLES(7,0x80029F6C);
	goto ZZ_29AF8_474;
ZZ_29AF8_3C4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 30772); //+ 0x7834
	V1 = EMU_ReadU32(V0 + 8); //+ 0x8
	V0 = 0x23;
	if (V1 == V0)
	{
		V0 = 0xD;
		ZZ_CLOCKCYCLES(7,0x80029EE0);
		goto ZZ_29AF8_3E8;
	}
	V0 = 0xD;
	if (V1 != V0)
	{
		V0 = SP + 60;
		ZZ_CLOCKCYCLES(9,0x80029F6C);
		goto ZZ_29AF8_474;
	}
	V0 = SP + 60;
	ZZ_CLOCKCYCLES(9,0x80029EE0);
ZZ_29AF8_3E8:
	V0 = EMU_ReadU32(S3 + 4160); //+ 0x1040
	if (V0)
	{
		V0 = SP + 60;
		ZZ_CLOCKCYCLES(4,0x80029F84);
		goto ZZ_29AF8_48C;
	}
	V0 = SP + 60;
	ZZ_CLOCKCYCLES(6,0x80029F6C);
	goto ZZ_29AF8_474;
ZZ_29AF8_400:
	A1 = 0x80070000;
	A1 -= 12320;
	V0 = EMU_ReadU32(A1);
	V1 = EMU_ReadU32(S0 + 100); //+ 0x64
	A0 |= 0x7000;
	V0 += A0;
	V1 = (int32_t)V1 < (int32_t)V0;
	if (!V1)
	{
		V0 = 0x2100;
		ZZ_CLOCKCYCLES(9,0x80029F84);
		goto ZZ_29AF8_48C;
	}
	V0 = 0x2100;
	EMU_Write32(S0 + 284,V0); //+ 0x11C
	V0 = EMU_ReadU32(A1);
	EMU_Write32(SP + 60,V0); //+ 0x3C
	ZZ_CLOCKCYCLES(13,0x80029F68);
	goto ZZ_29AF8_470;
ZZ_29AF8_434:
	V0 = EMU_ReadU32(S0 + 168); //+ 0xA8
	V0 &= 0x1;
	if (V0)
	{
		V0 = SP + 60;
		ZZ_CLOCKCYCLES(5,0x80029F84);
		goto ZZ_29AF8_48C;
	}
	V0 = SP + 60;
	ZZ_CLOCKCYCLES(7,0x80029F6C);
	goto ZZ_29AF8_474;
ZZ_29AF8_450:
	EMU_Write32(SP + 16,R0); //+ 0x10
	A1 = EMU_ReadU32(S0 + 284); //+ 0x11C
	A0 = R0;
	A2 = R0;
	RA = 0x80029F60; //ZZ_29AF8_468
	A3 = R0;
	ZZ_CLOCKCYCLES(6,0x8001D360);
	goto ZZ_1D360;
ZZ_29AF8_468:
	ZZ_CLOCKCYCLES(2,0x80029F84);
	goto ZZ_29AF8_48C;
ZZ_29AF8_470:
	V0 = SP + 60;
	ZZ_CLOCKCYCLES(1,0x80029F6C);
ZZ_29AF8_474:
	EMU_Write32(SP + 16,V0); //+ 0x10
	A2 = EMU_ReadU32(S0 + 284); //+ 0x11C
	A0 = R0;
	A1 = S0;
	RA = 0x80029F84; //ZZ_29AF8_48C
	A3 = 0x1;
	ZZ_CLOCKCYCLES(6,0x8001CD48);
	goto ZZ_1CD48;
ZZ_29AF8_48C:
	RA = EMU_ReadU32(SP + 80); //+ 0x50
	S3 = EMU_ReadU32(SP + 76); //+ 0x4C
	S2 = EMU_ReadU32(SP + 72); //+ 0x48
	S1 = EMU_ReadU32(SP + 68); //+ 0x44
	S0 = EMU_ReadU32(SP + 64); //+ 0x40
	SP += 88;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8002F610,ZZ_2F53C_D4);
	ZZ_JUMPREGISTER(0x8001E164,ZZ_1D860_904);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80029AF8,0x80029B2C,ZZ_29AF8);
ZZ_MARK_TARGET(0x80029B2C,0x80029B6C,ZZ_29AF8_34);
ZZ_MARK_TARGET(0x80029B6C,0x80029B80,ZZ_29AF8_74);
ZZ_MARK_TARGET(0x80029B80,0x80029B9C,ZZ_29AF8_88);
ZZ_MARK_TARGET(0x80029B9C,0x80029BA0,ZZ_29AF8_A4);
ZZ_MARK_TARGET(0x80029BA0,0x80029C1C,ZZ_29AF8_A8);
ZZ_MARK_TARGET(0x80029C1C,0x80029C2C,ZZ_29AF8_124);
ZZ_MARK_TARGET(0x80029C2C,0x80029C58,ZZ_29AF8_134);
ZZ_MARK_TARGET(0x80029C58,0x80029C68,ZZ_29AF8_160);
ZZ_MARK_TARGET(0x80029C68,0x80029C94,ZZ_29AF8_170);
ZZ_MARK_TARGET(0x80029C94,0x80029CA4,ZZ_29AF8_19C);
ZZ_MARK_TARGET(0x80029CA4,0x80029CAC,ZZ_29AF8_1AC);
ZZ_MARK_TARGET(0x80029CAC,0x80029CB0,ZZ_29AF8_1B4);
ZZ_MARK_TARGET(0x80029CB0,0x80029CC0,ZZ_29AF8_1B8);
ZZ_MARK_TARGET(0x80029CC0,0x80029CF0,ZZ_29AF8_1C8);
ZZ_MARK_TARGET(0x80029CF0,0x80029D18,ZZ_29AF8_1F8);
ZZ_MARK_TARGET(0x80029D18,0x80029D28,ZZ_29AF8_220);
ZZ_MARK_TARGET(0x80029D28,0x80029D50,ZZ_29AF8_230);
ZZ_MARK_TARGET(0x80029D50,0x80029D60,ZZ_29AF8_258);
ZZ_MARK_TARGET(0x80029D60,0x80029D88,ZZ_29AF8_268);
ZZ_MARK_TARGET(0x80029D88,0x80029D98,ZZ_29AF8_290);
ZZ_MARK_TARGET(0x80029D98,0x80029DCC,ZZ_29AF8_2A0);
ZZ_MARK_TARGET(0x80029DCC,0x80029DD0,ZZ_29AF8_2D4);
ZZ_MARK_TARGET(0x80029DD0,0x80029E3C,ZZ_29AF8_2D8);
ZZ_MARK_TARGET(0x80029E3C,0x80029E58,ZZ_29AF8_344);
ZZ_MARK_TARGET(0x80029E58,0x80029E60,ZZ_29AF8_360);
ZZ_MARK_TARGET(0x80029E60,0x80029E68,ZZ_29AF8_368);
ZZ_MARK_TARGET(0x80029E68,0x80029EA0,ZZ_29AF8_370);
ZZ_MARK_TARGET(0x80029EA0,0x80029EBC,ZZ_29AF8_3A8);
ZZ_MARK_TARGET(0x80029EBC,0x80029EE0,ZZ_29AF8_3C4);
ZZ_MARK_TARGET(0x80029EE0,0x80029EF8,ZZ_29AF8_3E8);
ZZ_MARK_TARGET(0x80029EF8,0x80029F2C,ZZ_29AF8_400);
ZZ_MARK_TARGET(0x80029F2C,0x80029F48,ZZ_29AF8_434);
ZZ_MARK_TARGET(0x80029F48,0x80029F60,ZZ_29AF8_450);
ZZ_MARK_TARGET(0x80029F60,0x80029F68,ZZ_29AF8_468);
ZZ_MARK_TARGET(0x80029F68,0x80029F6C,ZZ_29AF8_470);
ZZ_MARK_TARGET(0x80029F6C,0x80029F84,ZZ_29AF8_474);
ZZ_MARK_TARGET(0x80029F84,0x80029FA4,ZZ_29AF8_48C);
