#ifdef ZZ_INCLUDE_CODE
ZZ_5B270:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 79;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
// ReadCardSector
ZZ_MARK_TARGET(0x8005B270,0x8005B27C,ZZ_5B270);
