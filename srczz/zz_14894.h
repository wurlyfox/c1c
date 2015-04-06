#ifdef ZZ_INCLUDE_CODE
ZZ_14894:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 31720); //+ 0x7BE8
	SP -= 56;
	EMU_Write32(SP + 44,S3); //+ 0x2C
	S3 = A0;
	EMU_Write32(SP + 32,S0); //+ 0x20
	S0 = R0;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 40,S2); //+ 0x28
	if ((int32_t)V0 <= 0)
	{
		EMU_Write32(SP + 36,S1); //+ 0x24
		ZZ_CLOCKCYCLES(11,0x80014954);
		goto ZZ_14894_C0;
	}
	EMU_Write32(SP + 36,S1); //+ 0x24
	S2 = 0x1;
	S1 = R0;
	ZZ_CLOCKCYCLES(13,0x800148C8);
ZZ_14894_34:
	V0 = 0x80060000;
	V0 += 31724;
	A0 = S1 + V0;
	V0 = EMU_ReadS16(A0 + 4); //+ 0x4
	if (V0 == S2)
	{
		ZZ_CLOCKCYCLES(7,0x8001493C);
		goto ZZ_14894_A8;
	}
	V0 = EMU_ReadS8(A0 + 15); //+ 0xF
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x8001493C);
		goto ZZ_14894_A8;
	}
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	A1 = (int32_t)V0 >> 1;
	if ((int32_t)A1 >= 0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(16,0x8001490C);
		goto ZZ_14894_78;
	}
	V0 = A1;
	V0 = A1 + 31;
	ZZ_CLOCKCYCLES(17,0x8001490C);
ZZ_14894_78:
	V0 = (int32_t)V0 >> 5;
	V1 = V0 << 2;
	V1 += S3;
	V1 = EMU_ReadU32(V1);
	V0 <<= 5;
	V0 = A1 - V0;
	V0 = S2 << V0;
	V1 &= V0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(10,0x8001493C);
		goto ZZ_14894_A8;
	}
	RA = 0x8001493C; //ZZ_14894_A8
	ZZ_CLOCKCYCLES(12,0x80013FB4);
	goto ZZ_13FB4;
ZZ_14894_A8:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 31720); //+ 0x7BE8
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		S1 += 44;
		ZZ_CLOCKCYCLES(6,0x800148C8);
		goto ZZ_14894_34;
	}
	S1 += 44;
	ZZ_CLOCKCYCLES(6,0x80014954);
ZZ_14894_C0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 30792); //+ 0x7848
	if ((int32_t)V0 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(5,0x800149FC);
		goto ZZ_14894_168;
	}
	S0 = R0;
	S2 = 0x1;
	S1 = R0;
	ZZ_CLOCKCYCLES(7,0x80014970);
ZZ_14894_DC:
	V0 = 0x80060000;
	V0 += 30796;
	A0 = S1 + V0;
	V0 = EMU_ReadS16(A0 + 4); //+ 0x4
	if (V0 == S2)
	{
		ZZ_CLOCKCYCLES(7,0x800149E4);
		goto ZZ_14894_150;
	}
	V0 = EMU_ReadS8(A0 + 15); //+ 0xF
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x800149E4);
		goto ZZ_14894_150;
	}
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	A1 = (int32_t)V0 >> 1;
	if ((int32_t)A1 >= 0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(16,0x800149B4);
		goto ZZ_14894_120;
	}
	V0 = A1;
	V0 = A1 + 31;
	ZZ_CLOCKCYCLES(17,0x800149B4);
ZZ_14894_120:
	V0 = (int32_t)V0 >> 5;
	V1 = V0 << 2;
	V1 += S3;
	V1 = EMU_ReadU32(V1);
	V0 <<= 5;
	V0 = A1 - V0;
	V0 = S2 << V0;
	V1 &= V0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(10,0x800149E4);
		goto ZZ_14894_150;
	}
	RA = 0x800149E4; //ZZ_14894_150
	ZZ_CLOCKCYCLES(12,0x80013FB4);
	goto ZZ_13FB4;
ZZ_14894_150:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 30792); //+ 0x7848
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		S1 += 44;
		ZZ_CLOCKCYCLES(6,0x80014970);
		goto ZZ_14894_DC;
	}
	S1 += 44;
	ZZ_CLOCKCYCLES(6,0x800149FC);
ZZ_14894_168:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S3 = EMU_ReadU32(SP + 44); //+ 0x2C
	S2 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x8002FB98,ZZ_2F9D4_1C4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80014894,0x800148C8,ZZ_14894);
ZZ_MARK_TARGET(0x800148C8,0x8001490C,ZZ_14894_34);
ZZ_MARK_TARGET(0x8001490C,0x8001493C,ZZ_14894_78);
ZZ_MARK_TARGET(0x8001493C,0x80014954,ZZ_14894_A8);
ZZ_MARK_TARGET(0x80014954,0x80014970,ZZ_14894_C0);
ZZ_MARK_TARGET(0x80014970,0x800149B4,ZZ_14894_DC);
ZZ_MARK_TARGET(0x800149B4,0x800149E4,ZZ_14894_120);
ZZ_MARK_TARGET(0x800149E4,0x800149FC,ZZ_14894_150);
ZZ_MARK_TARGET(0x800149FC,0x80014A1C,ZZ_14894_168);
