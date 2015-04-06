#ifdef ZZ_INCLUDE_CODE
ZZ_54C08:
	A0 <<= 16;
	V0 = 0x80070000;
	V0 -= 15268;
	A0 = (int32_t)A0 >> 14;
	A0 += V0;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = A1 << 1;
	V0 += A1;
	V0 <<= 2;
	V0 = V0 - A1;
	V1 = EMU_ReadU32(A0);
	A2 = V0 << 4;
	V1 += A2;
	A1 = EMU_ReadU32(V1 + 152); //+ 0x98
	V0 = A1 & 0x204;
	if (V0)
	{
		V0 = A1 & 0x100;
		ZZ_CLOCKCYCLES(19,0x80054C9C);
		goto ZZ_54C08_94;
	}
	V0 = A1 & 0x100;
	if (V0)
	{
		V0 = -3;
		ZZ_CLOCKCYCLES(21,0x80054C9C);
		goto ZZ_54C08_94;
	}
	V0 = -3;
	V0 &= A1;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	V1 = EMU_ReadU32(A0);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	V0 |= 0x8;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	V1 = EMU_ReadU32(A0);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	V0 |= 0x1;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	ZZ_CLOCKCYCLES(37,0x80054C9C);
ZZ_54C08_94:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80054CE8,ZZ_54CCC_1C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80054C08,0x80054C9C,ZZ_54C08);
ZZ_MARK_TARGET(0x80054C9C,0x80054CA4,ZZ_54C08_94);
