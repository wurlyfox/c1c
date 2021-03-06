#ifdef ZZ_INCLUDE_CODE
ZZ_3E88C:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = 0x80050000;
	S0 += 14644;
	EMU_Write32(SP + 20,RA); //+ 0x14
	V0 = EMU_ReadU16(S0);
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(9,0x8003E954);
		goto ZZ_3E88C_C8;
	}
	V0 = R0;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 18880); //+ 0x49C0
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 18884); //+ 0x49C4
	A1 = 0x33330000;
	EMU_Write16(V0,R0);
	V0 = EMU_ReadU16(V0);
	A1 |= 0x3333;
	EMU_Write16(V1,V0);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 18888); //+ 0x49C8
	A0 = S0;
	EMU_Write32(V0,A1);
	RA = 0x8003E8EC; //ZZ_3E88C_60
	A1 = 0x41A;
	ZZ_CLOCKCYCLES(24,0x8003EDD8);
	goto ZZ_3EDD8;
ZZ_3E88C_60:
	RA = 0x8003E8F4; //ZZ_3E88C_68
	A0 = S0 + 56;
	ZZ_CLOCKCYCLES(2,0x8003EE04);
	goto ZZ_3EE04;
ZZ_3E88C_68:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8003E904);
		goto ZZ_3E88C_78;
	}
	RA = 0x8003E904; //ZZ_3E88C_78
	ZZ_CLOCKCYCLES(4,0x8003E968);
	goto ZZ_3E968;
ZZ_3E88C_78:
	S0 = 0x80050000;
	S0 += 14704;
	A0 = S0 - 4;
	V0 = S0 + 4060;
	RA = 0x8003E91C; //ZZ_3E88C_90
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(6,0x8003EE44);
	goto ZZ_3EE44;
ZZ_3E88C_90:
	V0 = 0x1;
	RA = 0x8003E928; //ZZ_3E88C_9C
	EMU_Write16(S0 - 60,V0); //+ 0xFFFFFFC4
	ZZ_CLOCKCYCLES(3,0x8003EE54);
	goto ZZ_3EE54;
ZZ_3E88C_9C:
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 18876); //+ 0x49BC
	RA = 0x8003E938; //ZZ_3E88C_AC
	EMU_Write32(V1 + 20,V0); //+ 0x14
	ZZ_CLOCKCYCLES(4,0x8003EF7C);
	goto ZZ_3EF7C;
ZZ_3E88C_AC:
	A0 = 0x80050000;
	A0 = EMU_ReadU32(A0 + 18876); //+ 0x49BC
	RA = 0x8003E948; //ZZ_3E88C_BC
	EMU_Write32(A0 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(4,0x8003EE14);
	goto ZZ_3EE14;
ZZ_3E88C_BC:
	RA = 0x8003E950; //ZZ_3E88C_C4
	S0 -= 60;
	ZZ_CLOCKCYCLES(2,0x8003E208);
	goto ZZ_3E208;
ZZ_3E88C_C4:
	V0 = S0;
	ZZ_CLOCKCYCLES(1,0x8003E954);
ZZ_3E88C_C8:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003E88C,0x8003E8EC,ZZ_3E88C);
ZZ_MARK_TARGET(0x8003E8EC,0x8003E8F4,ZZ_3E88C_60);
ZZ_MARK_TARGET(0x8003E8F4,0x8003E904,ZZ_3E88C_68);
ZZ_MARK_TARGET(0x8003E904,0x8003E91C,ZZ_3E88C_78);
ZZ_MARK_TARGET(0x8003E91C,0x8003E928,ZZ_3E88C_90);
ZZ_MARK_TARGET(0x8003E928,0x8003E938,ZZ_3E88C_9C);
ZZ_MARK_TARGET(0x8003E938,0x8003E948,ZZ_3E88C_AC);
ZZ_MARK_TARGET(0x8003E948,0x8003E950,ZZ_3E88C_BC);
ZZ_MARK_TARGET(0x8003E950,0x8003E954,ZZ_3E88C_C4);
ZZ_MARK_TARGET(0x8003E954,0x8003E968,ZZ_3E88C_C8);
