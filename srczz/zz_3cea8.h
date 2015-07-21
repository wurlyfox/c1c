#ifdef ZZ_INCLUDE_CODE
ZZ_3CEA8:
	A0 = EMU_ReadU32(GP + 360); //+ 0x168
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	V0 >>= 4;
	V0 &= 0x1;
	EMU_Write32(GP + 364,V0); //+ 0x16C
	if (!A0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(10,0x8003CEE0);
		goto ZZ_3CEA8_38;
	}
	V0 = R0;
	RA = 0x8003CED8; //ZZ_3CEA8_30
	ZZ_CLOCKCYCLES(12,0x80011C8C);
	goto ZZ_11C8C;
ZZ_3CEA8_30:
	EMU_Write32(GP + 360,R0); //+ 0x168
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003CEE0);
ZZ_3CEA8_38:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80016DAC,ZZ_16D14_98);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003CEA8,0x8003CED8,ZZ_3CEA8);
ZZ_MARK_TARGET(0x8003CED8,0x8003CEE0,ZZ_3CEA8_30);
ZZ_MARK_TARGET(0x8003CEE0,0x8003CEF0,ZZ_3CEA8_38);