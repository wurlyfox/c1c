#ifdef ZZ_INCLUDE_CODE
ZZ_5B240:
	T2 = 160;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 171;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xA0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
// CardInfo
ZZ_MARK_TARGET(0x8005B240,0x8005B24C,ZZ_5B240);
