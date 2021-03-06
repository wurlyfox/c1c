#ifdef ZZ_INCLUDE_CODE
ZZ_31BAC:
	SP -= 24;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 26384); //+ 0x6710
	V0 = 0x19;
	if (V1 != V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(6,0x80031BE4);
		goto ZZ_31BAC_38;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	A0 = 0x1;
	RA = 0x80031BD0; //ZZ_31BAC_24
	A1 = 0x35D8;
	ZZ_CLOCKCYCLES(9,0x80011D30);
	goto ZZ_11D30;
ZZ_31BAC_24:
	EMU_Write32(GP + 740,V0); //+ 0x2E4
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(3,0x80031BE8);
		goto ZZ_31BAC_3C;
	}
	V0 = R0;
	RA = 0x80031BE4; //ZZ_31BAC_38
	A0 = -1;
	ZZ_CLOCKCYCLES(5,0x8003D680);
	goto ZZ_3D680;
ZZ_31BAC_38:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x80031BE8);
ZZ_31BAC_3C:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80015E48,ZZ_15B58_2F0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80031BAC,0x80031BD0,ZZ_31BAC);
ZZ_MARK_TARGET(0x80031BD0,0x80031BE4,ZZ_31BAC_24);
ZZ_MARK_TARGET(0x80031BE4,0x80031BE8,ZZ_31BAC_38);
ZZ_MARK_TARGET(0x80031BE8,0x80031BF8,ZZ_31BAC_3C);
