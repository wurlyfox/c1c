#ifdef ZZ_INCLUDE_CODE
ZZ_1FAA0:
	A1 = 0x80070000;
	A1 -= 27148;
	V1 = EMU_ReadU16(A1);
	if (!V1)
	{
		V0 = V1 >> 9;
		ZZ_CLOCKCYCLES(6,0x8001FAF4);
		goto ZZ_1FAA0_54;
	}
	V0 = V1 >> 9;
	A2 = 0x80070000;
	A2 -= 19364;
	ZZ_CLOCKCYCLES(8,0x8001FAC0);
ZZ_1FAA0_20:
	if (V0 != A0)
	{
		V1 &= 0x1FF;
		ZZ_CLOCKCYCLES(2,0x8001FAE0);
		goto ZZ_1FAA0_40;
	}
	V1 &= 0x1FF;
	V1 <<= 2;
	V1 += A2;
	V0 = EMU_ReadU32(V1);
	V0 |= 0x8;
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(8,0x8001FAE0);
ZZ_1FAA0_40:
	A1 += 2;
	V1 = EMU_ReadU16(A1);
	if (V1)
	{
		V0 = V1 >> 9;
		ZZ_CLOCKCYCLES(5,0x8001FAC0);
		goto ZZ_1FAA0_20;
	}
	V0 = V1 >> 9;
	ZZ_CLOCKCYCLES(5,0x8001FAF4);
ZZ_1FAA0_54:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8001FE88,ZZ_1FC0C_27C);
	ZZ_JUMPREGISTER(0x8002FCA4,ZZ_2F9D4_2D0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001FAA0,0x8001FAC0,ZZ_1FAA0);
ZZ_MARK_TARGET(0x8001FAC0,0x8001FAE0,ZZ_1FAA0_20);
ZZ_MARK_TARGET(0x8001FAE0,0x8001FAF4,ZZ_1FAA0_40);
ZZ_MARK_TARGET(0x8001FAF4,0x8001FAFC,ZZ_1FAA0_54);
