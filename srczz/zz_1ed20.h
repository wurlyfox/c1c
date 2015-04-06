#ifdef ZZ_INCLUDE_CODE
ZZ_1ED20:
	SP -= 104;
	EMU_Write32(SP + 92,S3); //+ 0x5C
	S3 = A0;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2720); //+ 0xAA0
	EMU_Write32(SP + 96,S4); //+ 0x60
	S4 = A1;
	EMU_Write32(SP + 100,RA); //+ 0x64
	EMU_Write32(SP + 88,S2); //+ 0x58
	EMU_Write32(SP + 84,S1); //+ 0x54
	EMU_Write32(SP + 80,S0); //+ 0x50
	RA = 0x8001ED54; //ZZ_1ED20_34
	A0 = -A0;
	ZZ_CLOCKCYCLES(13,0x8003D584);
	goto ZZ_3D584;
ZZ_1ED20_34:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2720); //+ 0xAA0
	S0 = V0;
	RA = 0x8001ED68; //ZZ_1ED20_48
	A0 = -A0;
	ZZ_CLOCKCYCLES(5,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_1ED20_48:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2988); //+ 0xBAC
	V1 = -S0;
	S1 = 0x1000;
	EMU_Write16(SP + 16,V0); //+ 0x10
	EMU_Write16(SP + 18,V1); //+ 0x12
	EMU_Write16(SP + 20,R0); //+ 0x14
	EMU_Write16(SP + 22,S0); //+ 0x16
	EMU_Write16(SP + 24,V0); //+ 0x18
	EMU_Write16(SP + 26,R0); //+ 0x1A
	EMU_Write16(SP + 28,R0); //+ 0x1C
	EMU_Write16(SP + 30,R0); //+ 0x1E
	EMU_Write16(SP + 32,S1); //+ 0x20
	RA = 0x8001EDA4; //ZZ_1ED20_84
	A0 = -A0;
	ZZ_CLOCKCYCLES(15,0x8003D584);
	goto ZZ_3D584;
ZZ_1ED20_84:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2988); //+ 0xBAC
	S0 = V0;
	RA = 0x8001EDB8; //ZZ_1ED20_98
	A0 = -A0;
	ZZ_CLOCKCYCLES(5,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_1ED20_98:
	A0 = SP + 16;
	S2 = SP + 48;
	A1 = S2;
	V1 = S0;
	S0 = -S0;
	EMU_Write16(SP + 48,V0); //+ 0x30
	EMU_Write16(SP + 50,R0); //+ 0x32
	EMU_Write16(SP + 52,V1); //+ 0x34
	EMU_Write16(SP + 54,R0); //+ 0x36
	EMU_Write16(SP + 56,S1); //+ 0x38
	EMU_Write16(SP + 58,R0); //+ 0x3A
	EMU_Write16(SP + 60,S0); //+ 0x3C
	EMU_Write16(SP + 62,R0); //+ 0x3E
	RA = 0x8001EDF4; //ZZ_1ED20_D4
	EMU_Write16(SP + 64,V0); //+ 0x40
	ZZ_CLOCKCYCLES(15,0x8004EF50);
	goto ZZ_4EF50;
ZZ_1ED20_D4:
	V0 = EMU_ReadU16(SP + 16); //+ 0x10
	V1 = EMU_ReadU16(SP + 22); //+ 0x16
	A2 = EMU_ReadU16(SP + 28); //+ 0x1C
	A3 = EMU_ReadU16(SP + 18); //+ 0x12
	T0 = EMU_ReadU16(SP + 24); //+ 0x18
	T1 = EMU_ReadU16(SP + 30); //+ 0x1E
	T2 = EMU_ReadU16(SP + 20); //+ 0x14
	T3 = EMU_ReadU16(SP + 26); //+ 0x1A
	T4 = EMU_ReadU16(SP + 32); //+ 0x20
	A0 = S3;
	A1 = S2;
	EMU_Write16(SP + 52,A2); //+ 0x34
	A2 = S4;
	EMU_Write16(SP + 48,V0); //+ 0x30
	EMU_Write16(SP + 50,V1); //+ 0x32
	EMU_Write16(SP + 54,A3); //+ 0x36
	EMU_Write16(SP + 56,T0); //+ 0x38
	EMU_Write16(SP + 58,T1); //+ 0x3A
	EMU_Write16(SP + 60,T2); //+ 0x3C
	EMU_Write16(SP + 62,T3); //+ 0x3E
	RA = 0x8001EE4C; //ZZ_1ED20_12C
	EMU_Write16(SP + 64,T4); //+ 0x40
	ZZ_CLOCKCYCLES(22,0x800182B8);
	goto ZZ_182B8;
ZZ_1ED20_12C:
	V0 = -255;
	RA = EMU_ReadU32(SP + 100); //+ 0x64
	S4 = EMU_ReadU32(SP + 96); //+ 0x60
	S3 = EMU_ReadU32(SP + 92); //+ 0x5C
	S2 = EMU_ReadU32(SP + 88); //+ 0x58
	S1 = EMU_ReadU32(SP + 84); //+ 0x54
	S0 = EMU_ReadU32(SP + 80); //+ 0x50
	SP += 104;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x8003B0AC,ZZ_3AC50_45C);
	ZZ_JUMPREGISTER(0x8001D6B4,ZZ_1D4E0_1D4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001ED20,0x8001ED54,ZZ_1ED20);
ZZ_MARK_TARGET(0x8001ED54,0x8001ED68,ZZ_1ED20_34);
ZZ_MARK_TARGET(0x8001ED68,0x8001EDA4,ZZ_1ED20_48);
ZZ_MARK_TARGET(0x8001EDA4,0x8001EDB8,ZZ_1ED20_84);
ZZ_MARK_TARGET(0x8001EDB8,0x8001EDF4,ZZ_1ED20_98);
ZZ_MARK_TARGET(0x8001EDF4,0x8001EE4C,ZZ_1ED20_D4);
ZZ_MARK_TARGET(0x8001EE4C,0x8001EE74,ZZ_1ED20_12C);
