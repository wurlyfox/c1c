#ifdef ZZ_INCLUDE_CODE
ZZ_5B3A0:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 76;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
// StopCard
ZZ_MARK_TARGET(0x8005B3A0,0x8005B3AC,ZZ_5B3A0);
