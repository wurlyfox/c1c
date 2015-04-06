#ifdef ZZ_INCLUDE_CODE
ZZ_35D34:
	V0 = 0x80040000;
	V0 = EMU_ReadU32(V0 - 16068); //+ 0xFFFFC13C
	SP -= 24;
	A0 = 0x80060000;
	A0 -= 2804;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x80035D54; //ZZ_35D34_20
	ZZ_CLOCKCYCLES(8,0x8004A014);
	goto ZZ_4A014;
ZZ_35D34_20:
	V1 = 0x80040000;
	V1 = EMU_ReadU32(V1 - 16068); //+ 0xFFFFC13C
	V1 = 0x1;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(5,0x80035D78);
		goto ZZ_35D34_44;
	}
	RA = 0x80035D70; //ZZ_35D34_3C
	A0 = 0x2;
	ZZ_CLOCKCYCLES(7,0x800363F0);
	goto ZZ_363F0;
ZZ_35D34_3C:
	A0 = 0x4;
	ZZ_CLOCKCYCLES(2,0x80035D88);
	goto ZZ_35D34_54;
ZZ_35D34_44:
	RA = 0x80035D80; //ZZ_35D34_4C
	ZZ_CLOCKCYCLES(2,0x80035DD8);
	goto ZZ_35DD8;
ZZ_35D34_4C:
	if (!V0)
	{
		A0 = 0x2;
		ZZ_CLOCKCYCLES(2,0x80035D98);
		goto ZZ_35D34_64;
	}
	A0 = 0x2;
	ZZ_CLOCKCYCLES(2,0x80035D88);
ZZ_35D34_54:
	RA = 0x80035D90; //ZZ_35D34_5C
	ZZ_CLOCKCYCLES(2,0x800363C8);
	goto ZZ_363C8;
ZZ_35D34_5C:
	RA = 0x80035D98; //ZZ_35D34_64
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x80036410);
	goto ZZ_36410;
ZZ_35D34_64:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800349CC,ZZ_348EC_E0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80035D34,0x80035D54,ZZ_35D34);
ZZ_MARK_TARGET(0x80035D54,0x80035D70,ZZ_35D34_20);
ZZ_MARK_TARGET(0x80035D70,0x80035D78,ZZ_35D34_3C);
ZZ_MARK_TARGET(0x80035D78,0x80035D80,ZZ_35D34_44);
ZZ_MARK_TARGET(0x80035D80,0x80035D88,ZZ_35D34_4C);
ZZ_MARK_TARGET(0x80035D88,0x80035D90,ZZ_35D34_54);
ZZ_MARK_TARGET(0x80035D90,0x80035D98,ZZ_35D34_5C);
ZZ_MARK_TARGET(0x80035D98,0x80035DA8,ZZ_35D34_64);
