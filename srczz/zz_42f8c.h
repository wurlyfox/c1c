#ifdef ZZ_INCLUDE_CODE
ZZ_42F8C:
	A0 <<= 16;
	A1 <<= 16;
	GTE_SetRegister(56,A0);
	GTE_SetRegister(57,A1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80017844,ZZ_17790_B4);
	ZZ_JUMPREGISTER(0x80017F08,ZZ_17A14_4F4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80042F8C,0x80042FA4,ZZ_42F8C);
