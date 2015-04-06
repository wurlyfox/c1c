#ifdef ZZ_INCLUDE_CODE
ZZ_5AB64:
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	A3 = A2;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	RA = 0x8005AB80; //ZZ_5AB64_1C
	A2 = 1;
	ZZ_CLOCKCYCLES(7,0x8005AB94);
	goto ZZ_5AB94;
ZZ_5AB64_1C:
	V0 <<= 16;
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	V0 = (int32_t)V0 >> 16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80034404,ZZ_34204_200);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005AB64,0x8005AB80,ZZ_5AB64);
ZZ_MARK_TARGET(0x8005AB80,0x8005AB94,ZZ_5AB64_1C);
