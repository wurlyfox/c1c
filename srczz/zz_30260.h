#ifdef ZZ_INCLUDE_CODE
ZZ_30260:
	SP -= 40;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A0;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A1;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A2;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = A3;
	EMU_Write32(SP + 32,RA); //+ 0x20
	RA = 0x80030290; //ZZ_30260_30
	A0 = S1;
	ZZ_CLOCKCYCLES(12,0x8003D584);
	goto ZZ_3D584;
ZZ_30260_30:
	S0 = (int32_t)S0 >> 8;
	EMU_SMultiply(S0,V0);
	A0 = S1;
	T0 = LO;
	V0 = (int32_t)T0 >> 4;
	RA = 0x800302AC; //ZZ_30260_4C
	EMU_Write32(S2 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(7,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_30260_4C:
	EMU_SMultiply(S0,V0);
	S0 = LO;
	RA = 0x800302BC; //ZZ_30260_5C
	A0 = S3;
	ZZ_CLOCKCYCLES(4,0x8003D584);
	goto ZZ_3D584;
ZZ_30260_5C:
	S0 = (int32_t)S0 >> 12;
	EMU_SMultiply(S0,V0);
	A0 = S3;
	T0 = LO;
	V0 = (int32_t)T0 >> 4;
	RA = 0x800302D8; //ZZ_30260_78
	EMU_Write32(S2,V0);
	ZZ_CLOCKCYCLES(7,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_30260_78:
	EMU_SMultiply(S0,V0);
	T0 = LO;
	V0 = (int32_t)T0 >> 4;
	EMU_Write32(S2 + 8,V0); //+ 0x8
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x80022140,ZZ_21C64_4DC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80030260,0x80030290,ZZ_30260);
ZZ_MARK_TARGET(0x80030290,0x800302AC,ZZ_30260_30);
ZZ_MARK_TARGET(0x800302AC,0x800302BC,ZZ_30260_4C);
ZZ_MARK_TARGET(0x800302BC,0x800302D8,ZZ_30260_5C);
ZZ_MARK_TARGET(0x800302D8,0x80030308,ZZ_30260_78);
