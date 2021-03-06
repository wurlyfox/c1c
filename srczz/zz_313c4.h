#ifdef ZZ_INCLUDE_CODE
ZZ_313C4:
	V0 = EMU_ReadS16(GP + 608); //+ 0x260
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	V0 = (int32_t)V0 < 2;
	if (V0)
	{
		EMU_Write32(SP + 16,S0); //+ 0x10
		ZZ_CLOCKCYCLES(6,0x800314B0);
		goto ZZ_313C4_EC;
	}
	EMU_Write32(SP + 16,S0); //+ 0x10
	V1 = EMU_ReadU32(GP + 708); //+ 0x2C4
	V0 = 0x3;
	if (V1 != V0)
	{
		A0 = (int32_t)A0 >> 8;
		ZZ_CLOCKCYCLES(10,0x800314B0);
		goto ZZ_313C4_EC;
	}
	A0 = (int32_t)A0 >> 8;
	if ((int32_t)A0 <= 0)
	{
		A1 = 0x1;
		ZZ_CLOCKCYCLES(12,0x80031408);
		goto ZZ_313C4_44;
	}
	A1 = 0x1;
	V0 = (int32_t)A0 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(15,0x80031408);
		goto ZZ_313C4_44;
	}
	if (A0 == V1)
	{
		ZZ_CLOCKCYCLES(17,0x80031438);
		goto ZZ_313C4_74;
	}
	ZZ_CLOCKCYCLES(17,0x80031408);
ZZ_313C4_44:
	S0 = 0x80050000;
	S0 += 28368;
	A0 = S0;
	RA = 0x8003141C; //ZZ_313C4_58
	A2 = R0;
	ZZ_CLOCKCYCLES(5,0x80031A40);
	goto ZZ_31A40;
ZZ_313C4_58:
	A0 = S0 - 20;
	A1 = 0x3;
	RA = 0x8003142C; //ZZ_313C4_68
	A2 = R0;
	ZZ_CLOCKCYCLES(4,0x80031A40);
	goto ZZ_31A40;
ZZ_313C4_68:
	EMU_Write32(GP + 624,R0); //+ 0x270
	ZZ_CLOCKCYCLES(3,0x80031498);
	goto ZZ_313C4_D4;
ZZ_313C4_74:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6424); //+ 0x1918
	if (V0)
	{
		V0 = 0x3FFF;
		ZZ_CLOCKCYCLES(5,0x80031460);
		goto ZZ_313C4_9C;
	}
	V0 = 0x3FFF;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6420); //+ 0x1914
	if (!V0)
	{
		V0 = 0x3FFF;
		ZZ_CLOCKCYCLES(10,0x8003146C);
		goto ZZ_313C4_A8;
	}
	V0 = 0x3FFF;
	ZZ_CLOCKCYCLES(10,0x80031460);
ZZ_313C4_9C:
	EMU_Write32(GP + 624,V0); //+ 0x270
	ZZ_CLOCKCYCLES(3,0x80031470);
	goto ZZ_313C4_AC;
ZZ_313C4_A8:
	EMU_Write32(GP + 624,R0); //+ 0x270
	ZZ_CLOCKCYCLES(1,0x80031470);
ZZ_313C4_AC:
	S0 = 0x80050000;
	S0 += 28348;
	A0 = S0;
	A1 = 0x2;
	RA = 0x80031488; //ZZ_313C4_C4
	A2 = R0;
	ZZ_CLOCKCYCLES(6,0x80031A40);
	goto ZZ_31A40;
ZZ_313C4_C4:
	A0 = S0 + 20;
	A1 = R0;
	RA = 0x80031498; //ZZ_313C4_D4
	A2 = 0x1;
	ZZ_CLOCKCYCLES(4,0x80031A40);
	goto ZZ_31A40;
ZZ_313C4_D4:
	A0 = EMU_ReadS16(GP + 600); //+ 0x258
	A2 = EMU_ReadS16(GP + 624); //+ 0x270
	A1 = 0x80050000;
	A1 = EMU_ReadS16(A1 + 28368); //+ 0x6ED0
	RA = 0x800314B0; //ZZ_313C4_EC
	A3 = A2;
	ZZ_CLOCKCYCLES(6,0x8004CD58);
	goto ZZ_4CD58;
ZZ_313C4_EC:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	//ZZ_JUMPREGISTER(0x800227C4,ZZ_201DC_25E8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800313C4,0x80031408,ZZ_313C4);
ZZ_MARK_TARGET(0x80031408,0x8003141C,ZZ_313C4_44);
ZZ_MARK_TARGET(0x8003141C,0x8003142C,ZZ_313C4_58);
ZZ_MARK_TARGET(0x8003142C,0x80031438,ZZ_313C4_68);
ZZ_MARK_TARGET(0x80031438,0x80031460,ZZ_313C4_74);
ZZ_MARK_TARGET(0x80031460,0x8003146C,ZZ_313C4_9C);
ZZ_MARK_TARGET(0x8003146C,0x80031470,ZZ_313C4_A8);
ZZ_MARK_TARGET(0x80031470,0x80031488,ZZ_313C4_AC);
ZZ_MARK_TARGET(0x80031488,0x80031498,ZZ_313C4_C4);
ZZ_MARK_TARGET(0x80031498,0x800314B0,ZZ_313C4_D4);
ZZ_MARK_TARGET(0x800314B0,0x800314C4,ZZ_313C4_EC);
