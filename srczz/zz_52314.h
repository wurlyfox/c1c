#ifdef ZZ_INCLUDE_CODE
ZZ_52314:
	T8 = A0;
	A0 = A2;
	A2 = ~A2;
	V1 = R0;
	T2 = 15;
	A2 &= 0xFFFF;
	V0 = (int32_t)A2 >> T2;
	ZZ_CLOCKCYCLES(7,0x80052330);
ZZ_52314_1C:
	V0 &= 0x1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x80052344);
		goto ZZ_52314_30;
	}
	V1 = T2;
	ZZ_CLOCKCYCLES(5,0x80052350);
	goto ZZ_52314_3C;
ZZ_52314_30:
	T2 -= 1;
	if ((int32_t)T2 >= 0)
	{
		V0 = (int32_t)A2 >> T2;
		ZZ_CLOCKCYCLES(3,0x80052330);
		goto ZZ_52314_1C;
	}
	V0 = (int32_t)A2 >> T2;
	ZZ_CLOCKCYCLES(3,0x80052350);
ZZ_52314_3C:
	T7 = V1 - 12;
	V0 = 1;
	T6 = V0 << V1;
	T0 = 4096;
	T2 = R0;
	A2 = A0 & 0xFFFF;
	EMU_SMultiply(T6,T0);
	ZZ_CLOCKCYCLES(7,0x8005236C);
ZZ_52314_58:
	V0 = T0 << 6;
	V0 += T0;
	V0 <<= 4;
	V0 = V0 - T0;
	V0 <<= 2;
	T4 = LO;
	T0 = V0 - T0;
	T0 >>= 12;
	EMU_SMultiply(T6,T0);
	A0 = R0;
	T5 = T2 << 5;
	T3 = R0;
	V1 = LO;
	V0 = V1 - T4;
	T1 = V0 >> 5;
	A3 = T1;
	ZZ_CLOCKCYCLES(16,0x800523AC);
ZZ_52314_98:
	V0 = T4 + T3;
	V1 = T4 + A3;
	V0 >>= 12;
	V0 = A2 < V0;
	if (V0)
	{
		V1 >>= 12;
		ZZ_CLOCKCYCLES(6,0x800523D0);
		goto ZZ_52314_BC;
	}
	V1 >>= 12;
	V0 = A2 < V1;
	if (V0)
	{
		V0 = T5 + A0;
		ZZ_CLOCKCYCLES(9,0x800523F8);
		goto ZZ_52314_E4;
	}
	V0 = T5 + A0;
	ZZ_CLOCKCYCLES(9,0x800523D0);
ZZ_52314_BC:
	A3 += T1;
	A0 += 1;
	V0 = (int32_t)A0 < 32;
	if (V0)
	{
		T3 += T1;
		ZZ_CLOCKCYCLES(5,0x800523AC);
		goto ZZ_52314_98;
	}
	T3 += T1;
	T2 += 1;
	V0 = (int32_t)T2 < 48;
	if (V0)
	{
		EMU_SMultiply(T6,T0);
		ZZ_CLOCKCYCLES(9,0x8005236C);
		goto ZZ_52314_58;
	}
	EMU_SMultiply(T6,T0);
	V0 = 1536;
	ZZ_CLOCKCYCLES(10,0x800523F8);
ZZ_52314_E4:
	if ((int32_t)V0 >= 0)
	{
		V1 = V0;
		ZZ_CLOCKCYCLES(2,0x80052404);
		goto ZZ_52314_F0;
	}
	V1 = V0;
	V1 = V0 + 127;
	ZZ_CLOCKCYCLES(3,0x80052404);
ZZ_52314_F0:
	V1 = (int32_t)V1 >> 7;
	A0 = V1 << 7;
	A0 = V0 - A0;
	V0 = T8 & 0xFFFF;
	V0 += V1;
	V1 = T7 << 1;
	V1 += T7;
	V1 <<= 2;
	V0 += V1;
	V1 = A1 & 0xFFFF;
	V1 += A0;
	V0 <<= 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 |= V1;
	ZZ_CLOCKCYCLES_JR(14);
	ZZ_JUMPREGISTER(0x800526FC,ZZ_52440_2BC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80052314,0x80052330,ZZ_52314);
ZZ_MARK_TARGET(0x80052330,0x80052344,ZZ_52314_1C);
ZZ_MARK_TARGET(0x80052344,0x80052350,ZZ_52314_30);
ZZ_MARK_TARGET(0x80052350,0x8005236C,ZZ_52314_3C);
ZZ_MARK_TARGET(0x8005236C,0x800523AC,ZZ_52314_58);
ZZ_MARK_TARGET(0x800523AC,0x800523D0,ZZ_52314_98);
ZZ_MARK_TARGET(0x800523D0,0x800523F8,ZZ_52314_BC);
ZZ_MARK_TARGET(0x800523F8,0x80052404,ZZ_52314_E4);
ZZ_MARK_TARGET(0x80052404,0x8005243C,ZZ_52314_F0);
