#ifdef ZZ_INCLUDE_CODE
ZZ_4A334:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x8004A344; //ZZ_4A334_10
	ZZ_CLOCKCYCLES(4,0x8004A50C);
	goto ZZ_4A50C;
ZZ_4A334_10:
	RA = 0x8004A34C; //ZZ_4A334_18
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8004A054);
	goto ZZ_4A054;
ZZ_4A334_18:
	RA = 0x8004A354; //ZZ_4A334_20
	ZZ_CLOCKCYCLES(2,0x8004A55C);
	goto ZZ_4A55C;
ZZ_4A334_20:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800159C4,ZZ_1594C_78);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A334,0x8004A344,ZZ_4A334);
ZZ_MARK_TARGET(0x8004A344,0x8004A34C,ZZ_4A334_10);
ZZ_MARK_TARGET(0x8004A34C,0x8004A354,ZZ_4A334_18);
ZZ_MARK_TARGET(0x8004A354,0x8004A364,ZZ_4A334_20);
