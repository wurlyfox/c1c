#ifdef ZZ_INCLUDE_CODE
ZZ_3E410:
	SP -= 24;
	V0 = -1;
	EMU_Write32(SP + 16,RA); //+ 0x10
	AT = 0x80060000;
	EMU_Write32(AT - 7364,A0); //+ 0xFFFFE33C
	AT = 0x80050000;
	EMU_Write32(AT + 28756,V0); //+ 0x7054
	RA = 0x8003E434; //ZZ_3E410_24
	ZZ_CLOCKCYCLES(9,0x8003E6F4);
	goto ZZ_3E6F4;
ZZ_3E410_24:
	A0 = 0x20000000;
	A1 = 0x80050000;
	A1 += 28756;
	RA = 0x8003E448; //ZZ_3E410_38
	A0 |= 0x1;
	ZZ_CLOCKCYCLES(5,0x8003E4C0);
	goto ZZ_3E4C0;
ZZ_3E410_38:
	RA = 0x8003E450; //ZZ_3E410_40
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8003E4E0);
	goto ZZ_3E4E0;
ZZ_3E410_40:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80016770,ZZ_16718_58);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E410,0x8003E434,ZZ_3E410);
ZZ_MARK_TARGET(0x8003E434,0x8003E448,ZZ_3E410_24);
ZZ_MARK_TARGET(0x8003E448,0x8003E450,ZZ_3E410_38);
ZZ_MARK_TARGET(0x8003E450,0x8003E460,ZZ_3E410_40);
