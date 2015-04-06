#ifdef ZZ_INCLUDE_CODE
ZZ_36648:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x80036658; //ZZ_36648_10
	ZZ_CLOCKCYCLES(4,0x8005B358);
	goto ZZ_5B358;
ZZ_36648_10:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	V0 = R0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800158F8,ZZ_158C4_34);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036648,0x80036658,ZZ_36648);
ZZ_MARK_TARGET(0x80036658,0x80036668,ZZ_36648_10);
