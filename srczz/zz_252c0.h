#ifdef ZZ_INCLUDE_CODE
ZZ_252C0:
	SP -= 32;
	EMU_Write32(SP + 24,RA); //+ 0x18
	T0 = A0;
	T2 = A1;
	T1 = A2;
	if ((int32_t)T1 <= 0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(7,0x80025304);
		goto ZZ_252C0_44;
	}
	A0 = R0;
	ZZ_CLOCKCYCLES(7,0x800252DC);
ZZ_252C0_1C:
	V1 = EMU_ReadU32(T0 + 220); //+ 0xDC
	A0 += 1;
	V0 = V1 + 4;
	EMU_Write32(T0 + 220,V0); //+ 0xDC
	V0 = EMU_ReadU32(A3);
	EMU_Write32(V1,V0);
	V0 = (int32_t)A0 < (int32_t)T1;
	if (V0)
	{
		A3 += 4;
		ZZ_CLOCKCYCLES(10,0x800252DC);
		goto ZZ_252C0_1C;
	}
	A3 += 4;
	ZZ_CLOCKCYCLES(10,0x80025304);
ZZ_252C0_44:
	V1 = EMU_ReadU32(T0 + 220); //+ 0xDC
	A1 = EMU_ReadU32(T0 + 220); //+ 0xDC
	A0 = EMU_ReadU32(T0 + 228); //+ 0xE4
	V0 = A1 + 4;
	EMU_Write32(T0 + 220,V0); //+ 0xDC
	V0 = 0xFFFF;
	A0 -= 96;
	A0 = A0 - T0;
	A0 <<= 16;
	EMU_Write32(T0 + 228,V1); //+ 0xE4
	EMU_Write32(A1,V0);
	A1 = EMU_ReadU32(T0 + 220); //+ 0xDC
	A2 = EMU_ReadU32(T0 + 224); //+ 0xE0
	V0 = A1 + 4;
	EMU_Write32(T0 + 220,V0); //+ 0xDC
	EMU_Write32(A1,A2);
	A1 = EMU_ReadU32(T0 + 220); //+ 0xDC
	A2 = R0;
	V0 = A1 + 4;
	EMU_Write32(T0 + 220,V0); //+ 0xDC
	V0 = T1 << 2;
	V1 = V1 - V0;
	V1 -= 96;
	V1 = V1 - T0;
	V1 |= A0;
	V0 = T2 & 0x7FFF;
	V0 <<= 2;
	EMU_Write32(A1,V1);
	V1 = EMU_ReadU32(T0 + 32); //+ 0x20
	A0 = T0;
	V1 = EMU_ReadU32(V1 + 20); //+ 0x14
	A1 = 0x3;
	V0 += V1;
	RA = 0x80025390; //ZZ_252C0_D0
	EMU_Write32(T0 + 224,V0); //+ 0xE0
	ZZ_CLOCKCYCLES(35,0x800201DC);
	goto ZZ_201DC;
ZZ_252C0_D0:
	RA = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8001BC48,ZZ_1BAB0_198);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800252C0,0x800252DC,ZZ_252C0);
ZZ_MARK_TARGET(0x800252DC,0x80025304,ZZ_252C0_1C);
ZZ_MARK_TARGET(0x80025304,0x80025390,ZZ_252C0_44);
ZZ_MARK_TARGET(0x80025390,0x800253A0,ZZ_252C0_D0);
