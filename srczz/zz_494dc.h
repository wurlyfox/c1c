#ifdef ZZ_INCLUDE_CODE
ZZ_494DC:
	T2 = 160;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 63;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xA0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800494DC,0x800494E8,ZZ_494DC);
