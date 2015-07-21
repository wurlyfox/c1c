#ifdef ZZ_INCLUDE_CODE
ZZ_3E724:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 18876); //+ 0x49BC
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	V0 = EMU_ReadU32(V0 + 8); //+ 0x8
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8003E744; //ZZ_3E724_20
	ZZ_CLOCKCYCLES_JR(8);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8003E73C)
	ZZ_JUMPREGISTER_END();
ZZ_3E724_20:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800496E8,ZZ_49648_A0);
	ZZ_JUMPREGISTER(0x800496D0,ZZ_49648_88);
	ZZ_JUMPREGISTER(0x80044E7C,ZZ_44E1C_60);
	ZZ_JUMPREGISTER(0x80044F28,ZZ_44E8C_9C);
	ZZ_JUMPREGISTER(0x8004BABC,ZZ_4B8B8_204);
	ZZ_JUMPREGISTER(0x8004BB20,ZZ_4B8B8_268);
	ZZ_JUMPREGISTER(0x8004BB08,ZZ_4B8B8_250);
	ZZ_JUMPREGISTER(0x8004BADC,ZZ_4B8B8_224);
	ZZ_JUMPREGISTER(0x8003EE94,ZZ_3EE54_40);
	ZZ_JUMPREGISTER(0x8003EFB4,ZZ_3EF7C_38);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E724,0x8003E744,ZZ_3E724);
ZZ_MARK_TARGET(0x8003E744,0x8003E754,ZZ_3E724_20);