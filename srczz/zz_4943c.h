#ifdef ZZ_INCLUDE_CODE
ZZ_4943C:
	T2 = 160;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 16;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xA0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004943C,0x80049448,ZZ_4943C);
