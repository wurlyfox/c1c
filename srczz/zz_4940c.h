#ifdef ZZ_INCLUDE_CODE
ZZ_4940C:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 56;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004940C,0x80049418,ZZ_4940C);
