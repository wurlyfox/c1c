#ifdef ZZ_INCLUDE_CODE
ZZ_51590:
	if (!A0)
	{
		V0 = 1;
		ZZ_CLOCKCYCLES(2,0x800515A8);
		goto ZZ_51590_18;
	}
	V0 = 1;
	if (A0 != V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(4,0x800515AC);
		goto ZZ_51590_1C;
	}
	V0 = R0;
	V0 = 1;
	ZZ_CLOCKCYCLES(6,0x800515AC);
	goto ZZ_51590_1C;
ZZ_51590_18:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x800515AC);
ZZ_51590_1C:
	AT = 0x80060000;
	EMU_Write32(AT - 5400,A0); //+ 0xFFFFEAE8
	AT = 0x80060000;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(AT - 5500,V0); //+ 0xFFFFEA84
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80032840,ZZ_327B4_8C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80051590,0x800515A8,ZZ_51590);
ZZ_MARK_TARGET(0x800515A8,0x800515AC,ZZ_51590_18);
ZZ_MARK_TARGET(0x800515AC,0x800515C0,ZZ_51590_1C);
