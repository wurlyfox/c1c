#ifdef ZZ_INCLUDE_CODE
ZZ_1EC34:
	SP -= 64;
	EMU_Write32(SP + 56,RA); //+ 0x38
	EMU_Write32(SP + 52,S1); //+ 0x34
	EMU_Write32(SP + 48,S0); //+ 0x30
	V0 = EMU_ReadU32(A1);
	S0 = A0;
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	if ((int32_t)V0 >= 0)
	{
		S1 = A2;
		ZZ_CLOCKCYCLES(9,0x8001EC5C);
		goto ZZ_1EC34_28;
	}
	S1 = A2;
	V0 += 15;
	ZZ_CLOCKCYCLES(10,0x8001EC5C);
ZZ_1EC34_28:
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(SP + 32,V0); //+ 0x20
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8001EC78);
		goto ZZ_1EC34_44;
	}
	V0 += 15;
	ZZ_CLOCKCYCLES(7,0x8001EC78);
ZZ_1EC34_44:
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(SP + 36,V0); //+ 0x24
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8001EC94);
		goto ZZ_1EC34_60;
	}
	V0 += 15;
	ZZ_CLOCKCYCLES(7,0x8001EC94);
ZZ_1EC34_60:
	V0 = (int32_t)V0 >> 4;
	A0 = SP + 32;
	A1 = V1;
	A2 = SP + 16;
	RA = 0x8001ECAC; //ZZ_1EC34_78
	EMU_Write32(SP + 40,V0); //+ 0x28
	ZZ_CLOCKCYCLES(6,0x800182B8);
	goto ZZ_182B8;
ZZ_1EC34_78:
	A0 = EMU_ReadU32(SP + 16); //+ 0x10
	V0 = EMU_ReadU32(SP + 20); //+ 0x14
	V1 = EMU_ReadU32(SP + 24); //+ 0x18
	A0 <<= 4;
	V0 <<= 4;
	V1 <<= 4;
	EMU_Write32(SP + 16,A0); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 24,V1); //+ 0x18
	V0 = EMU_ReadU32(S0 + 96); //+ 0x60
	A0 += V0;
	EMU_Write32(S1,A0);
	V0 = EMU_ReadU32(SP + 20); //+ 0x14
	V1 = EMU_ReadU32(S0 + 100); //+ 0x64
	V0 += V1;
	EMU_Write32(S1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 24); //+ 0x18
	V1 = EMU_ReadU32(S0 + 104); //+ 0x68
	V0 += V1;
	EMU_Write32(S1 + 8,V0); //+ 0x8
	RA = EMU_ReadU32(SP + 56); //+ 0x38
	S1 = EMU_ReadU32(SP + 52); //+ 0x34
	S0 = EMU_ReadU32(SP + 48); //+ 0x30
	SP += 64;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(29);
	ZZ_JUMPREGISTER(0x80038820,ZZ_38414_40C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001EC34,0x8001EC5C,ZZ_1EC34);
ZZ_MARK_TARGET(0x8001EC5C,0x8001EC78,ZZ_1EC34_28);
ZZ_MARK_TARGET(0x8001EC78,0x8001EC94,ZZ_1EC34_44);
ZZ_MARK_TARGET(0x8001EC94,0x8001ECAC,ZZ_1EC34_60);
ZZ_MARK_TARGET(0x8001ECAC,0x8001ED20,ZZ_1EC34_78);
