#ifdef ZZ_INCLUDE_CODE
ZZ_4945C:
	T2 = 160;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 23;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xA0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004945C,0x80049468,ZZ_4945C);
