#ifdef ZZ_INCLUDE_CODE
ZZ_3F1F8:
	SP -= 8;
	if (!A1)
	{
		V0 = A1 - 1;
		ZZ_CLOCKCYCLES(3,0x8003F218);
		goto ZZ_3F1F8_20;
	}
	V0 = A1 - 1;
	V1 = -1;
	ZZ_CLOCKCYCLES(4,0x8003F208);
ZZ_3F1F8_10:
	EMU_Write32(A0,R0);
	V0 -= 1;
	if (V0 != V1)
	{
		A0 += 4;
		ZZ_CLOCKCYCLES(4,0x8003F208);
		goto ZZ_3F1F8_10;
	}
	A0 += 4;
	ZZ_CLOCKCYCLES(4,0x8003F218);
ZZ_3F1F8_20:
	SP += 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8003EF94,ZZ_3EF7C_18);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003F1F8,0x8003F208,ZZ_3F1F8);
ZZ_MARK_TARGET(0x8003F208,0x8003F218,ZZ_3F1F8_10);
ZZ_MARK_TARGET(0x8003F218,0x8003F224,ZZ_3F1F8_20);