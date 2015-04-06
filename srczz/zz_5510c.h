#ifdef ZZ_INCLUDE_CODE
ZZ_5510C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 3460); //+ 0xFFFFF27C
	SP -= 24;
	if (!V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(5,0x80055128);
		goto ZZ_5510C_1C;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80055128; //ZZ_5510C_1C
	ZZ_CLOCKCYCLES_JR(7);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,80055120)
	ZZ_JUMPREGISTER_END();
ZZ_5510C_1C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 3464); //+ 0xFFFFF278
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8005513C; //ZZ_5510C_30
	ZZ_CLOCKCYCLES_JR(5);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,80055134)
	ZZ_JUMPREGISTER_END();
ZZ_5510C_30:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005510C,0x80055128,ZZ_5510C);
ZZ_MARK_TARGET(0x80055128,0x8005513C,ZZ_5510C_1C);
ZZ_MARK_TARGET(0x8005513C,0x8005514C,ZZ_5510C_30);
