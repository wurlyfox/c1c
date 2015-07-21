#ifdef ZZ_INCLUDE_CODE
ZZ_41FAC:
	V0 = 0x10000000;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 19264); //+ 0x4B40
	A0 |= V0;
	EMU_Write32(V1,A0);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 19260); //+ 0x4B3C
	V1 = 0xFF0000;
	V0 = EMU_ReadU32(V0);
	V1 |= 0xFFFF;
	ZZ_JUMPREGISTER_BEGIN(RA);
	V0 &= V1;
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x8004192C,ZZ_417CC_160);
	ZZ_JUMPREGISTER(0x80041940,ZZ_417CC_174);
	ZZ_JUMPREGISTER(0x80041958,ZZ_417CC_18C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80041FAC,0x80041FDC,ZZ_41FAC);