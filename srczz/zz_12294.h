#ifdef ZZ_INCLUDE_CODE
ZZ_12294:
	SP -= 48;
	EMU_Write32(SP + 36,S3); //+ 0x24
	S3 = A0;
	EMU_Write32(SP + 44,RA); //+ 0x2C
	EMU_Write32(SP + 40,S4); //+ 0x28
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	EMU_Write32(SP + 24,S0); //+ 0x18
	A0 = EMU_ReadU32(S3 + 24); //+ 0x18
	V0 = EMU_ReadU32(A0 + 1028); //+ 0x404
	S4 = A1;
	S1 = R0;
	if ((int32_t)V0 <= 0)
	{
		S2 = R0;
		ZZ_CLOCKCYCLES(15,0x80012304);
		goto ZZ_12294_70;
	}
	S2 = R0;
	S0 = 0x520;
	ZZ_CLOCKCYCLES(16,0x800122D4);
ZZ_12294_40:
	RA = 0x800122DC; //ZZ_12294_48
	A0 += S0;
	ZZ_CLOCKCYCLES(2,0x80012250);
	goto ZZ_12250;
ZZ_12294_48:
	if (V0 != S4)
	{
		ZZ_CLOCKCYCLES(2,0x800122E8);
		goto ZZ_12294_54;
	}
	S2 += 1;
	ZZ_CLOCKCYCLES(3,0x800122E8);
ZZ_12294_54:
	A0 = EMU_ReadU32(S3 + 24); //+ 0x18
	V0 = EMU_ReadU32(A0 + 1028); //+ 0x404
	S1 += 1;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		S0 += 8;
		ZZ_CLOCKCYCLES(7,0x800122D4);
		goto ZZ_12294_40;
	}
	S0 += 8;
	ZZ_CLOCKCYCLES(7,0x80012304);
ZZ_12294_70:
	V0 = S2;
	RA = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x8003018C,ZZ_30164_28);
	ZZ_JUMPREGISTER(0x80015260,ZZ_14D6C_4F4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80012294,0x800122D4,ZZ_12294);
ZZ_MARK_TARGET(0x800122D4,0x800122DC,ZZ_12294_40);
ZZ_MARK_TARGET(0x800122DC,0x800122E8,ZZ_12294_48);
ZZ_MARK_TARGET(0x800122E8,0x80012304,ZZ_12294_54);
ZZ_MARK_TARGET(0x80012304,0x8001232C,ZZ_12294_70);
