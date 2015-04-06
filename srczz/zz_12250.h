#ifdef ZZ_INCLUDE_CODE
ZZ_12250:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	V1 = EMU_ReadU32(A0);
	V0 = V1 & 0x3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80012280);
		goto ZZ_12250_30;
	}
	A0 = EMU_ReadU32(A0 + 4); //+ 0x4
	RA = 0x80012278; //ZZ_12250_28
	ZZ_CLOCKCYCLES(10,0x80012010);
	goto ZZ_12010;
ZZ_12250_28:
	ZZ_CLOCKCYCLES(2,0x80012284);
	goto ZZ_12250_34;
ZZ_12250_30:
	V0 = EMU_ReadU32(V1 + 8); //+ 0x8
	ZZ_CLOCKCYCLES(1,0x80012284);
ZZ_12250_34:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800122DC,ZZ_12294_48);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80012250,0x80012278,ZZ_12250);
ZZ_MARK_TARGET(0x80012278,0x80012280,ZZ_12250_28);
ZZ_MARK_TARGET(0x80012280,0x80012284,ZZ_12250_30);
ZZ_MARK_TARGET(0x80012284,0x80012294,ZZ_12250_34);
