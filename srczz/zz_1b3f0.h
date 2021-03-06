#ifdef ZZ_INCLUDE_CODE
ZZ_1B3F0:
	A1 = 0x80060000;
	A1 -= 7352;
	V0 = EMU_ReadU16(A1);
	if (!V0)
	{
		V0 >>= 9;
		ZZ_CLOCKCYCLES(6,0x8001B450);
		goto ZZ_1B3F0_60;
	}
	V0 >>= 9;
	A2 = 0x80060000;
	A2 -= 168;
	ZZ_CLOCKCYCLES(8,0x8001B410);
ZZ_1B3F0_20:
	if (V0 != A0)
	{
		ZZ_CLOCKCYCLES(2,0x8001B43C);
		goto ZZ_1B3F0_4C;
	}
	V0 = EMU_ReadU16(A1);
	V0 &= 0x1FF;
	V0 <<= 2;
	V0 += A2;
	V1 = EMU_ReadU32(V0);
	V1 |= 0x8;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(11,0x8001B43C);
ZZ_1B3F0_4C:
	A1 += 2;
	V0 = EMU_ReadU16(A1);
	if (V0)
	{
		V0 >>= 9;
		ZZ_CLOCKCYCLES(5,0x8001B410);
		goto ZZ_1B3F0_20;
	}
	V0 >>= 9;
	ZZ_CLOCKCYCLES(5,0x8001B450);
ZZ_1B3F0_60:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80025420,ZZ_253A0_80);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001B3F0,0x8001B410,ZZ_1B3F0);
ZZ_MARK_TARGET(0x8001B410,0x8001B43C,ZZ_1B3F0_20);
ZZ_MARK_TARGET(0x8001B43C,0x8001B450,ZZ_1B3F0_4C);
ZZ_MARK_TARGET(0x8001B450,0x8001B458,ZZ_1B3F0_60);
