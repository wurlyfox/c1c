#ifdef ZZ_INCLUDE_CODE
ZZ_3AED8:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	EMU_Write32(SP + 20,RA); //+ 0x14
	RA = 0x8003AEEC; //ZZ_3AED8_14
	S0 = A0;
	ZZ_CLOCKCYCLES(5,0x8003C3FC);
	goto ZZ_3C3FC;
ZZ_3AED8_14:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8003AF04);
		goto ZZ_3AED8_2C;
	}
	RA = 0x8003AEFC; //ZZ_3AED8_24
	A0 = 0x2;
	ZZ_CLOCKCYCLES(4,0x8003CAB0);
	goto ZZ_3CAB0;
ZZ_3AED8_24:
	RA = 0x8003AF04; //ZZ_3AED8_2C
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003CAF8);
	goto ZZ_3CAF8;
ZZ_3AED8_2C:
	A0 = EMU_ReadU32(S0);
	RA = 0x8003AF10; //ZZ_3AED8_38
	ZZ_CLOCKCYCLES(3,0x8003C900);
	goto ZZ_3C900;
ZZ_3AED8_38:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x8003C138,ZZ_3C038_100);
	ZZ_JUMPREGISTER(0x8003C184,ZZ_3C038_14C);
	ZZ_JUMPREGISTER(0x8003C1DC,ZZ_3C038_1A4);
	ZZ_JUMPREGISTER(0x8003C234,ZZ_3C038_1FC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003AED8,0x8003AEEC,ZZ_3AED8);
ZZ_MARK_TARGET(0x8003AEEC,0x8003AEFC,ZZ_3AED8_14);
ZZ_MARK_TARGET(0x8003AEFC,0x8003AF04,ZZ_3AED8_24);
ZZ_MARK_TARGET(0x8003AF04,0x8003AF10,ZZ_3AED8_2C);
ZZ_MARK_TARGET(0x8003AF10,0x8003AF24,ZZ_3AED8_38);