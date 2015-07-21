#ifdef ZZ_INCLUDE_CODE
ZZ_4B7D8:
	SP -= 64;
	EMU_Write32(SP + 56,RA); //+ 0x38
	V0 = 0x3;
	EMU_Write32(SP + 16,V0); //+ 0x10
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V0 = A0 << 7;
	V0 += A0;
	EMU_Write16(SP + 20,V0); //+ 0x14
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	V0 = A1 << 7;
	V0 += A1;
	EMU_Write16(SP + 22,V0); //+ 0x16
	RA = 0x8004B818; //ZZ_4B7D8_40
	A0 = SP + 16;
	ZZ_CLOCKCYCLES(16,0x80048B30);
	goto ZZ_48B30;
ZZ_4B7D8_40:
	RA = EMU_ReadU32(SP + 56); //+ 0x38
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 64;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8002FFA8,ZZ_2FDE0_1C8);
	ZZ_JUMPREGISTER(0x80030DD4,ZZ_30CC0_114);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B7D8,0x8004B818,ZZ_4B7D8);
ZZ_MARK_TARGET(0x8004B818,0x8004B828,ZZ_4B7D8_40);