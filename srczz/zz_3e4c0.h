#ifdef ZZ_INCLUDE_CODE
ZZ_3E4C0:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 21;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E4C0,0x8003E4CC,ZZ_3E4C0);