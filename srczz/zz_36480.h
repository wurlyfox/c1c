#ifdef ZZ_INCLUDE_CODE
ZZ_36480:
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	V0 = EMU_ReadU32(V0);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800368DC,ZZ_368CC_10);
	ZZ_JUMPREGISTER(0x800368EC,ZZ_368CC_20);
	ZZ_JUMPREGISTER(0x80034928,ZZ_348EC_3C);
	ZZ_JUMPREGISTER(0x80034954,ZZ_348EC_68);
	ZZ_JUMPREGISTER(0x80034940,ZZ_348EC_54);
	ZZ_JUMPREGISTER(0x800349B4,ZZ_348EC_C8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036480,0x80036494,ZZ_36480);
