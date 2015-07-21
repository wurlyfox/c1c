#ifdef ZZ_INCLUDE_CODE
ZZ_260AC:
	SP -= 24;
	V0 = 0x80030000;
	V0 = EMU_ReadU32(V0 + 17696); //+ 0x4520
	A3 = A0;
	EMU_Write32(SP + 16,RA); //+ 0x10
	AT = 0x80050000;
	EMU_Write32(AT + 31088,V0); //+ 0x7970
	A2 = 0x80050000;
	A2 += 31080;
	A0 = 0x80050000;
	A0 += 31076;
	EMU_ReadLeft(A2 + 3,&V0); //+ 0x3
	EMU_ReadRight(A2,&V0);
	EMU_WriteLeft(A0 + 3,V0); //+ 0x3
	EMU_WriteRight(A0,V0);
	A2 = 0x80050000;
	A2 += 31084;
	EMU_ReadLeft(A3 + 47,&V0); //+ 0x2F
	EMU_ReadRight(A3 + 44,&V0); //+ 0x2C
	EMU_WriteLeft(A2 + 3,V0); //+ 0x3
	EMU_WriteRight(A2,V0);
	V0 = EMU_ReadU32(A3 + 28); //+ 0x1C
	A1 &= 0x4;
	AT = 0x80060000;
	EMU_Write32(AT + 6404,V0); //+ 0x1904
	if (A1)
	{
		ZZ_CLOCKCYCLES(29,0x80026128);
		goto ZZ_260AC_7C;
	}
	RA = 0x80026128; //ZZ_260AC_7C
	A0 = A3 + 36;
	ZZ_CLOCKCYCLES(31,0x800317DC);
	goto ZZ_317DC;
ZZ_260AC_7C:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80025FD4,ZZ_25A60_574);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800260AC,0x80026128,ZZ_260AC);
ZZ_MARK_TARGET(0x80026128,0x80026138,ZZ_260AC_7C);