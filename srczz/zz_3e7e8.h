#ifdef ZZ_INCLUDE_CODE
ZZ_3E7E8:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 18876); //+ 0x49BC
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8003E808; //ZZ_3E7E8_20
	ZZ_CLOCKCYCLES_JR(8);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8003E800)
	ZZ_JUMPREGISTER_END();
ZZ_3E7E8_20:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800166B8,ZZ_1668C_2C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E7E8,0x8003E808,ZZ_3E7E8);
ZZ_MARK_TARGET(0x8003E808,0x8003E818,ZZ_3E7E8_20);
