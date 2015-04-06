#ifdef ZZ_INCLUDE_CODE
ZZ_5AA94:
	SP -= 24;
	V0 = A0 & 0xFFFF;
	V0 = V0 < 17;
	EMU_Write32(SP + 20,RA); //+ 0x14
	if (!V0)
	{
		EMU_Write32(SP + 16,S0); //+ 0x10
		ZZ_CLOCKCYCLES(6,0x8005AAEC);
		goto ZZ_5AA94_58;
	}
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = A0 << 16;
	S0 = (int32_t)V0 >> 16;
	AT = 0x80070000;
	AT += S0;
	V1 = EMU_ReadU8(AT - 26596); //+ 0xFFFF981C
	V0 = 2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(14,0x8005AAEC);
		goto ZZ_5AA94_58;
	}
	RA = 0x8005AAD4; //ZZ_5AA94_40
	A0 = R0;
	ZZ_CLOCKCYCLES(16,0x80057A6C);
	goto ZZ_57A6C;
ZZ_5AA94_40:
	V0 = 1;
	AT = 0x80070000;
	AT += S0;
	EMU_Write8(AT - 26596,V0); //+ 0xFFFF981C
	V0 = S0;
	ZZ_CLOCKCYCLES(6,0x8005AAF0);
	goto ZZ_5AA94_5C;
ZZ_5AA94_58:
	V0 = -1;
	ZZ_CLOCKCYCLES(1,0x8005AAF0);
ZZ_5AA94_5C:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80034428,ZZ_34204_224);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005AA94,0x8005AAD4,ZZ_5AA94);
ZZ_MARK_TARGET(0x8005AAD4,0x8005AAEC,ZZ_5AA94_40);
ZZ_MARK_TARGET(0x8005AAEC,0x8005AAF0,ZZ_5AA94_58);
ZZ_MARK_TARGET(0x8005AAF0,0x8005AB04,ZZ_5AA94_5C);
