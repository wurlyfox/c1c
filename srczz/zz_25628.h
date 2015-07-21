#ifdef ZZ_INCLUDE_CODE
ZZ_25628:
	V1 = EMU_ReadU32(A0 + 16); //+ 0x10
	SP -= 16;
	V0 = EMU_ReadU32(V1 + 520); //+ 0x208
	if ((int32_t)V0 <= 0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(6,0x8002567C);
		goto ZZ_25628_54;
	}
	A1 = R0;
	ZZ_CLOCKCYCLES(6,0x80025640);
ZZ_25628_18:
	V0 = EMU_ReadU32(V1 + 516); //+ 0x204
	V0 += A1;
	V0 <<= 2;
	V0 += A0;
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	EMU_Write32(V0 + 4,A0); //+ 0x4
	V1 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V1 + 520); //+ 0x208
	A1 += 1;
	V0 = (int32_t)A1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(15,0x80025640);
		goto ZZ_25628_18;
	}
	ZZ_CLOCKCYCLES(15,0x8002567C);
ZZ_25628_54:
	V0 = EMU_ReadU32(V1 + 524); //+ 0x20C
	if ((int32_t)V0 <= 0)
	{
		A1 = R0;
		ZZ_CLOCKCYCLES(4,0x800256CC);
		goto ZZ_25628_A4;
	}
	A1 = R0;
	ZZ_CLOCKCYCLES(4,0x8002568C);
ZZ_25628_64:
	V0 = EMU_ReadU32(V1 + 516); //+ 0x204
	V1 = EMU_ReadU32(V1 + 520); //+ 0x208
	V0 += A1;
	V0 += V1;
	V0 <<= 2;
	V0 += A0;
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	EMU_Write32(V0,A0);
	V1 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V1 + 524); //+ 0x20C
	A1 += 1;
	V0 = (int32_t)A1 < (int32_t)V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(16,0x8002568C);
		goto ZZ_25628_64;
	}
	ZZ_CLOCKCYCLES(16,0x800256CC);
ZZ_25628_A4:
	V0 = -255;
	SP += 16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80013068,ZZ_12F10_158);
	ZZ_JUMPREGISTER(0x80013294,ZZ_12F10_384);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80025628,0x80025640,ZZ_25628);
ZZ_MARK_TARGET(0x80025640,0x8002567C,ZZ_25628_18);
ZZ_MARK_TARGET(0x8002567C,0x8002568C,ZZ_25628_54);
ZZ_MARK_TARGET(0x8002568C,0x800256CC,ZZ_25628_64);
ZZ_MARK_TARGET(0x800256CC,0x800256DC,ZZ_25628_A4);