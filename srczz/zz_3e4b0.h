#ifdef ZZ_INCLUDE_CODE
ZZ_3E4B0:
	T2 = 176;
	ZZ_JUMPREGISTER_BEGIN(T2);
	T1 = 20;
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0xB0,ZZ_FORCEEXIT);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E4B0,0x8003E4BC,ZZ_3E4B0);