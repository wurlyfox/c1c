#ifdef ZZ_INCLUDE_CODE
ZZ_5B380:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 74;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005B380,0x8005B38C,ZZ_5B380);
