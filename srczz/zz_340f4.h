#ifdef ZZ_INCLUDE_CODE
ZZ_340F4:
	V0 = -819;
	EMU_Write16(GP + 388,V0); //+ 0x184
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80037FDC,ZZ_37930_6AC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800340F4,0x80034104,ZZ_340F4);
