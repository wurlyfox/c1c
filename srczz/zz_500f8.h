#ifdef ZZ_INCLUDE_CODE
ZZ_500F8:
	T1 = A0;
	V1 = 0x80060000;
	V1 -= 6824;
	V0 = EMU_ReadU8(V1);
	A3 = R0;
	if (!V0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(7,0x800501A0);
		goto ZZ_500F8_A8;
	}
	A2 = R0;
	T0 = V1 + 7;
	T2 = V1;
	ZZ_CLOCKCYCLES(9,0x8005011C);
ZZ_500F8_24:
	V0 = EMU_ReadU8(T0);
	V1 = A2 & 0xFF;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 12316); //+ 0xFFFFCFE4
	V0 <<= 4;
	V0 += V1;
	V0 <<= 5;
	A0 += V0;
	V0 = EMU_ReadU8(A0 + 6); //+ 0x6
	V1 = EMU_ReadU8(T0 - 5); //+ 0xFFFFFFFB
	V0 = V1 < V0;
	if (V0)
	{
		ZZ_CLOCKCYCLES(14,0x80050188);
		goto ZZ_500F8_90;
	}
	V0 = EMU_ReadU8(A0 + 7); //+ 0x7
	V0 = V0 < V1;
	if (V0)
	{
		V0 = A3 & 0xFF;
		ZZ_CLOCKCYCLES(19,0x80050188);
		goto ZZ_500F8_90;
	}
	V0 = A3 & 0xFF;
	V1 = A3;
	A3 += 1;
	V0 += A1;
	A0 = EMU_ReadU8(A0 + 22); //+ 0x16
	V1 &= 0xFF;
	V1 += T1;
	EMU_Write8(V0,A0);
	EMU_Write8(V1,A2);
	ZZ_CLOCKCYCLES(27,0x80050188);
ZZ_500F8_90:
	V1 = EMU_ReadU8(T2);
	A2 += 1;
	V0 = A2 & 0xFF;
	V0 = V0 < V1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x8005011C);
		goto ZZ_500F8_24;
	}
	ZZ_CLOCKCYCLES(6,0x800501A0);
ZZ_500F8_A8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 = A3 & 0xFF;
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8004DFC4,ZZ_4DDE4_1E0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800500F8,0x8005011C,ZZ_500F8);
ZZ_MARK_TARGET(0x8005011C,0x80050188,ZZ_500F8_24);
ZZ_MARK_TARGET(0x80050188,0x800501A0,ZZ_500F8_90);
ZZ_MARK_TARGET(0x800501A0,0x800501A8,ZZ_500F8_A8);