#ifdef ZZ_INCLUDE_CODE
ZZ_2465C:
	SP -= 152;
	EMU_Write32(SP + 128,S4); //+ 0x80
	S4 = A0;
	EMU_Write32(SP + 132,S5); //+ 0x84
	S5 = A1;
	EMU_Write32(SP + 116,S1); //+ 0x74
	S1 = A2;
	EMU_Write32(SP + 136,S6); //+ 0x88
	S6 = A3;
	EMU_Write32(SP + 144,RA); //+ 0x90
	EMU_Write32(SP + 140,S7); //+ 0x8C
	EMU_Write32(SP + 124,S3); //+ 0x7C
	EMU_Write32(SP + 120,S2); //+ 0x78
	EMU_Write32(SP + 112,S0); //+ 0x70
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	S7 = EMU_ReadU32(SP + 168); //+ 0xA8
	RA = 0x800246A4; //ZZ_2465C_48
	A0 &= 0xFFF;
	ZZ_CLOCKCYCLES(18,0x8003905C);
	goto ZZ_3905C;
ZZ_2465C_48:
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	S0 = V0;
	RA = 0x800246B4; //ZZ_2465C_58
	A0 &= 0xFFF;
	ZZ_CLOCKCYCLES(4,0x800390D0);
	goto ZZ_390D0;
ZZ_2465C_58:
	V1 = S0;
	S2 = 0x1000;
	S0 = -S0;
	EMU_Write16(SP + 16,V0); //+ 0x10
	EMU_Write16(SP + 18,R0); //+ 0x12
	EMU_Write16(SP + 20,V1); //+ 0x14
	EMU_Write16(SP + 22,R0); //+ 0x16
	EMU_Write16(SP + 24,S2); //+ 0x18
	EMU_Write16(SP + 26,R0); //+ 0x1A
	EMU_Write16(SP + 28,S0); //+ 0x1C
	EMU_Write16(SP + 30,R0); //+ 0x1E
	EMU_Write16(SP + 32,V0); //+ 0x20
	A0 = EMU_ReadU32(S1);
	RA = 0x800246F0; //ZZ_2465C_94
	ZZ_CLOCKCYCLES(15,0x8003905C);
	goto ZZ_3905C;
ZZ_2465C_94:
	A0 = EMU_ReadU32(S1);
	RA = 0x800246FC; //ZZ_2465C_A0
	S0 = V0;
	ZZ_CLOCKCYCLES(3,0x800390D0);
	goto ZZ_390D0;
ZZ_2465C_A0:
	A0 = SP + 16;
	S3 = SP + 48;
	A1 = S3;
	V1 = -S0;
	EMU_Write16(SP + 48,S2); //+ 0x30
	EMU_Write16(SP + 50,R0); //+ 0x32
	EMU_Write16(SP + 52,R0); //+ 0x34
	EMU_Write16(SP + 54,R0); //+ 0x36
	EMU_Write16(SP + 56,V0); //+ 0x38
	EMU_Write16(SP + 58,V1); //+ 0x3A
	EMU_Write16(SP + 60,R0); //+ 0x3C
	EMU_Write16(SP + 62,S0); //+ 0x3E
	RA = 0x80024734; //ZZ_2465C_D8
	EMU_Write16(SP + 64,V0); //+ 0x40
	ZZ_CLOCKCYCLES(14,0x80042C2C);
	goto ZZ_42C2C;
ZZ_2465C_D8:
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 = EMU_ReadU32(S1 + 4); //+ 0x4
	A0 = A0 - V0;
	A0 &= 0xFFF;
	RA = 0x80024750; //ZZ_2465C_F4
	A0 = -A0;
	ZZ_CLOCKCYCLES(7,0x8003905C);
	goto ZZ_3905C;
ZZ_2465C_F4:
	A0 = EMU_ReadU32(S1 + 8); //+ 0x8
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	S0 = V0;
	A0 = A0 - V1;
	A0 &= 0xFFF;
	RA = 0x8002476C; //ZZ_2465C_110
	A0 = -A0;
	ZZ_CLOCKCYCLES(7,0x800390D0);
	goto ZZ_390D0;
ZZ_2465C_110:
	A0 = SP + 16;
	A1 = S3;
	V1 = S0;
	S0 = -S0;
	EMU_Write16(SP + 48,V0); //+ 0x30
	EMU_Write16(SP + 50,R0); //+ 0x32
	EMU_Write16(SP + 52,V1); //+ 0x34
	EMU_Write16(SP + 54,R0); //+ 0x36
	EMU_Write16(SP + 56,S2); //+ 0x38
	EMU_Write16(SP + 58,R0); //+ 0x3A
	EMU_Write16(SP + 60,S0); //+ 0x3C
	EMU_Write16(SP + 62,R0); //+ 0x3E
	RA = 0x800247A4; //ZZ_2465C_148
	EMU_Write16(SP + 64,V0); //+ 0x40
	ZZ_CLOCKCYCLES(14,0x80042C2C);
	goto ZZ_42C2C;
ZZ_2465C_148:
	if (!S6)
	{
		A0 = SP + 16;
		ZZ_CLOCKCYCLES(2,0x800247B4);
		goto ZZ_2465C_158;
	}
	A0 = SP + 16;
	RA = 0x800247B4; //ZZ_2465C_158
	A1 = S6;
	ZZ_CLOCKCYCLES(4,0x80042D6C);
	goto ZZ_42D6C;
ZZ_2465C_158:
	V0 = EMU_ReadU32(S4);
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(4,0x800247C8);
		goto ZZ_2465C_16C;
	}
	V0 += 15;
	ZZ_CLOCKCYCLES(5,0x800247C8);
ZZ_2465C_16C:
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(SP + 96,V0); //+ 0x60
	V0 = EMU_ReadU32(S4 + 4); //+ 0x4
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x800247E4);
		goto ZZ_2465C_188;
	}
	V0 += 15;
	ZZ_CLOCKCYCLES(7,0x800247E4);
ZZ_2465C_188:
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(SP + 100,V0); //+ 0x64
	V0 = EMU_ReadU32(S4 + 8); //+ 0x8
	if ((int32_t)V0 >= 0)
	{
		A0 = SP + 96;
		ZZ_CLOCKCYCLES(6,0x80024800);
		goto ZZ_2465C_1A4;
	}
	A0 = SP + 96;
	V0 += 15;
	ZZ_CLOCKCYCLES(7,0x80024800);
ZZ_2465C_1A4:
	A1 = SP + 16;
	V0 = (int32_t)V0 >> 4;
	A2 = SP + 80;
	RA = 0x80024814; //ZZ_2465C_1B8
	EMU_Write32(SP + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(5,0x80019144);
	goto ZZ_19144;
ZZ_2465C_1B8:
	A0 = EMU_ReadU32(SP + 80); //+ 0x50
	V0 = EMU_ReadU32(SP + 84); //+ 0x54
	V1 = EMU_ReadU32(SP + 88); //+ 0x58
	A0 <<= 4;
	V0 <<= 4;
	V1 <<= 4;
	EMU_Write32(SP + 80,A0); //+ 0x50
	EMU_Write32(SP + 84,V0); //+ 0x54
	EMU_Write32(SP + 88,V1); //+ 0x58
	V0 = EMU_ReadU32(S5);
	A0 += V0;
	EMU_Write32(S7,A0);
	V0 = EMU_ReadU32(SP + 84); //+ 0x54
	V1 = EMU_ReadU32(S5 + 4); //+ 0x4
	V0 += V1;
	EMU_Write32(S7 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 88); //+ 0x58
	V1 = EMU_ReadU32(S5 + 8); //+ 0x8
	V0 += V1;
	EMU_Write32(S7 + 8,V0); //+ 0x8
	RA = EMU_ReadU32(SP + 144); //+ 0x90
	S7 = EMU_ReadU32(SP + 140); //+ 0x8C
	S6 = EMU_ReadU32(SP + 136); //+ 0x88
	S5 = EMU_ReadU32(SP + 132); //+ 0x84
	S4 = EMU_ReadU32(SP + 128); //+ 0x80
	S3 = EMU_ReadU32(SP + 124); //+ 0x7C
	S2 = EMU_ReadU32(SP + 120); //+ 0x78
	S1 = EMU_ReadU32(SP + 116); //+ 0x74
	S0 = EMU_ReadU32(SP + 112); //+ 0x70
	SP += 152;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(35);
	ZZ_JUMPREGISTER(0x8001F040,ZZ_1EEA8_198);
	//ZZ_JUMPREGISTER(0x8002352C,ZZ_201DC_3350);
	//ZZ_JUMPREGISTER(0x8002368C,ZZ_201DC_34B0);
	ZZ_JUMPREGISTER(0x8002BC0C,ZZ_2BAB4_158);
	ZZ_JUMPREGISTER(0x8002BE64,ZZ_2BAB4_3B0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8002465C,0x800246A4,ZZ_2465C);
ZZ_MARK_TARGET(0x800246A4,0x800246B4,ZZ_2465C_48);
ZZ_MARK_TARGET(0x800246B4,0x800246F0,ZZ_2465C_58);
ZZ_MARK_TARGET(0x800246F0,0x800246FC,ZZ_2465C_94);
ZZ_MARK_TARGET(0x800246FC,0x80024734,ZZ_2465C_A0);
ZZ_MARK_TARGET(0x80024734,0x80024750,ZZ_2465C_D8);
ZZ_MARK_TARGET(0x80024750,0x8002476C,ZZ_2465C_F4);
ZZ_MARK_TARGET(0x8002476C,0x800247A4,ZZ_2465C_110);
ZZ_MARK_TARGET(0x800247A4,0x800247B4,ZZ_2465C_148);
ZZ_MARK_TARGET(0x800247B4,0x800247C8,ZZ_2465C_158);
ZZ_MARK_TARGET(0x800247C8,0x800247E4,ZZ_2465C_16C);
ZZ_MARK_TARGET(0x800247E4,0x80024800,ZZ_2465C_188);
ZZ_MARK_TARGET(0x80024800,0x80024814,ZZ_2465C_1A4);
ZZ_MARK_TARGET(0x80024814,0x800248A0,ZZ_2465C_1B8);
