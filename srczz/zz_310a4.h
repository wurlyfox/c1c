#ifdef ZZ_INCLUDE_CODE
ZZ_310A4:
	A3 = EMU_ReadU32(A0);
	V1 = EMU_ReadU32(A1);
	V1 = (int32_t)A3 < (int32_t)V1;
	if (V1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(6,0x80031120);
		goto ZZ_310A4_7C;
	}
	V0 = R0;
	A2 = EMU_ReadU32(A0 + 4); //+ 0x4
	V1 = EMU_ReadU32(A1 + 4); //+ 0x4
	V1 = (int32_t)A2 < (int32_t)V1;
	if (V1)
	{
		ZZ_CLOCKCYCLES(12,0x80031120);
		goto ZZ_310A4_7C;
	}
	A0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V1 = (int32_t)A0 < (int32_t)V1;
	if (V1)
	{
		ZZ_CLOCKCYCLES(18,0x80031120);
		goto ZZ_310A4_7C;
	}
	V1 = EMU_ReadU32(A1 + 12); //+ 0xC
	V1 = (int32_t)A3 < (int32_t)V1;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(23,0x80031120);
		goto ZZ_310A4_7C;
	}
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	V1 = (int32_t)A2 < (int32_t)V1;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(28,0x80031120);
		goto ZZ_310A4_7C;
	}
	V0 = EMU_ReadU32(A1 + 20); //+ 0x14
	V0 = (int32_t)A0 < (int32_t)V0;
	ZZ_CLOCKCYCLES(31,0x80031120);
ZZ_310A4_7C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x800383BC,ZZ_37930_A8C);
	ZZ_JUMPREGISTER(0x8001D170,ZZ_1D014_15C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800310A4,0x80031120,ZZ_310A4);
ZZ_MARK_TARGET(0x80031120,0x80031128,ZZ_310A4_7C);
