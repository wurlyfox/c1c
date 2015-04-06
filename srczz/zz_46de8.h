#ifdef ZZ_INCLUDE_CODE
ZZ_46DE8:
	SP -= 56;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A1;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	EMU_Write32(SP + 32,S4); //+ 0x20
	S4 = A0;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = 3;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = S4 & 0xFF;
	V1 = 0x80060000;
	V1 -= 13860;
	EMU_Write32(SP + 36,S5); //+ 0x24
	S5 = 0x80060000;
	S5 = EMU_ReadU32(S5 - 13724); //+ 0xFFFFCA64
	V0 = S3 << 2;
	EMU_Write32(SP + 40,S6); //+ 0x28
	S6 = V0 + V1;
	EMU_Write32(SP + 44,S7); //+ 0x2C
	S7 = R0;
	EMU_Write32(SP + 48,RA); //+ 0x30
	ZZ_CLOCKCYCLES(22,0x80046E40);
ZZ_46DE8_58:
	AT = 0x80060000;
	EMU_Write32(AT - 13724,R0); //+ 0xFFFFCA64
	V0 = 1;
	if (S3 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x80046E7C);
		goto ZZ_46DE8_94;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 13708); //+ 0xFFFFCA74
	V0 &= 0x10;
	if (!V0)
	{
		A0 = 1;
		ZZ_CLOCKCYCLES(11,0x80046E7C);
		goto ZZ_46DE8_94;
	}
	A0 = 1;
	A1 = R0;
	A2 = R0;
	RA = 0x80046E7C; //ZZ_46DE8_94
	A3 = R0;
	ZZ_CLOCKCYCLES(15,0x80047E8C);
	goto ZZ_47E8C;
ZZ_46DE8_94:
	if (!S1)
	{
		ZZ_CLOCKCYCLES(2,0x80046EAC);
		goto ZZ_46DE8_C4;
	}
	V0 = EMU_ReadU32(S6);
	if (!V0)
	{
		A0 = 2;
		ZZ_CLOCKCYCLES(6,0x80046EAC);
		goto ZZ_46DE8_C4;
	}
	A0 = 2;
	A1 = S1;
	A2 = S2;
	RA = 0x80046EA4; //ZZ_46DE8_BC
	A3 = R0;
	ZZ_CLOCKCYCLES(10,0x80047E8C);
	goto ZZ_47E8C;
ZZ_46DE8_BC:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x80046ED0);
		goto ZZ_46DE8_E8;
	}
	ZZ_CLOCKCYCLES(2,0x80046EAC);
ZZ_46DE8_C4:
	AT = 0x80060000;
	EMU_Write32(AT - 13724,S5); //+ 0xFFFFCA64
	A0 = S4 & 0xFF;
	A1 = S1;
	A2 = S2;
	RA = 0x80046EC8; //ZZ_46DE8_E0
	A3 = R0;
	ZZ_CLOCKCYCLES(7,0x80047E8C);
	goto ZZ_47E8C;
ZZ_46DE8_E0:
	if (!V0)
	{
		V0 = S7 + 1;
		ZZ_CLOCKCYCLES(2,0x80046EF0);
		goto ZZ_46DE8_108;
	}
	V0 = S7 + 1;
	ZZ_CLOCKCYCLES(2,0x80046ED0);
ZZ_46DE8_E8:
	S0 -= 1;
	V0 = -1;
	if (S0 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x80046E40);
		goto ZZ_46DE8_58;
	}
	AT = 0x80060000;
	EMU_Write32(AT - 13724,S5); //+ 0xFFFFCA64
	S7 = -1;
	V0 = S7 + 1;
	ZZ_CLOCKCYCLES(8,0x80046EF0);
ZZ_46DE8_108:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S7 = EMU_ReadU32(SP + 44); //+ 0x2C
	S6 = EMU_ReadU32(SP + 40); //+ 0x28
	S5 = EMU_ReadU32(SP + 36); //+ 0x24
	S4 = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x800158E8,ZZ_158C4_24);
	ZZ_JUMPREGISTER(0x80012498,ZZ_123F0_A8);
	ZZ_JUMPREGISTER(0x800319C0,ZZ_3198C_34);
	ZZ_JUMPREGISTER(0x80049034,ZZ_48F5C_D8);
	ZZ_JUMPREGISTER(0x800490A4,ZZ_48F5C_148);
	ZZ_JUMPREGISTER(0x8004904C,ZZ_48F5C_F0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80046DE8,0x80046E40,ZZ_46DE8);
ZZ_MARK_TARGET(0x80046E40,0x80046E7C,ZZ_46DE8_58);
ZZ_MARK_TARGET(0x80046E7C,0x80046EA4,ZZ_46DE8_94);
ZZ_MARK_TARGET(0x80046EA4,0x80046EAC,ZZ_46DE8_BC);
ZZ_MARK_TARGET(0x80046EAC,0x80046EC8,ZZ_46DE8_C4);
ZZ_MARK_TARGET(0x80046EC8,0x80046ED0,ZZ_46DE8_E0);
ZZ_MARK_TARGET(0x80046ED0,0x80046EF0,ZZ_46DE8_E8);
ZZ_MARK_TARGET(0x80046EF0,0x80046F20,ZZ_46DE8_108);
