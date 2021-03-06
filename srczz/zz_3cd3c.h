#ifdef ZZ_INCLUDE_CODE
ZZ_3CD3C:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x8003CD4C; //ZZ_3CD3C_10
	ZZ_CLOCKCYCLES(4,0x80051464);
	goto ZZ_51464;
ZZ_3CD3C_10:
	V0 = R0;
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800166C0,ZZ_1668C_34);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003CD3C,0x8003CD4C,ZZ_3CD3C);
ZZ_MARK_TARGET(0x8003CD4C,0x8003CD60,ZZ_3CD3C_10);
