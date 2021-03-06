#ifdef ZZ_INCLUDE_CODE
ZZ_3EF50:
	SP -= 8;
	if (!A1)
	{
		V0 = A1 - 1;
		ZZ_CLOCKCYCLES(3,0x8003EF70);
		goto ZZ_3EF50_20;
	}
	V0 = A1 - 1;
	V1 = -1;
	ZZ_CLOCKCYCLES(4,0x8003EF60);
ZZ_3EF50_10:
	EMU_Write32(A0,R0);
	V0 -= 1;
	if (V0 != V1)
	{
		A0 += 4;
		ZZ_CLOCKCYCLES(4,0x8003EF60);
		goto ZZ_3EF50_10;
	}
	A0 += 4;
	ZZ_CLOCKCYCLES(4,0x8003EF70);
ZZ_3EF50_20:
	SP += 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8003EE84,ZZ_3EE54_30);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003EF50,0x8003EF60,ZZ_3EF50);
ZZ_MARK_TARGET(0x8003EF60,0x8003EF70,ZZ_3EF50_10);
ZZ_MARK_TARGET(0x8003EF70,0x8003EF7C,ZZ_3EF50_20);
