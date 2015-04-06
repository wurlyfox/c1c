#ifdef ZZ_INCLUDE_CODE
ZZ_514D0:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A1;
	V0 = 0x70000;
	V0 |= 0xEFF0;
	V0 = V0 < S0;
	if (!V0)
	{
		EMU_Write32(SP + 20,RA); //+ 0x14
		ZZ_CLOCKCYCLES(8,0x800514F8);
		goto ZZ_514D0_28;
	}
	EMU_Write32(SP + 20,RA); //+ 0x14
	S0 = 0x70000;
	S0 |= 0xEFF0;
	ZZ_CLOCKCYCLES(10,0x800514F8);
ZZ_514D0_28:
	RA = 0x80051500; //ZZ_514D0_30
	A1 = S0;
	ZZ_CLOCKCYCLES(2,0x8004FDB4);
	goto ZZ_4FDB4;
ZZ_514D0_30:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5472); //+ 0xFFFFEAA0
	if (V0)
	{
		V0 = S0;
		ZZ_CLOCKCYCLES(5,0x8005151C);
		goto ZZ_514D0_4C;
	}
	V0 = S0;
	AT = 0x80060000;
	EMU_Write32(AT - 5476,R0); //+ 0xFFFFEA9C
	ZZ_CLOCKCYCLES(7,0x8005151C);
ZZ_514D0_4C:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80013724,ZZ_13304_420);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800514D0,0x800514F8,ZZ_514D0);
ZZ_MARK_TARGET(0x800514F8,0x80051500,ZZ_514D0_28);
ZZ_MARK_TARGET(0x80051500,0x8005151C,ZZ_514D0_30);
ZZ_MARK_TARGET(0x8005151C,0x8005152C,ZZ_514D0_4C);
