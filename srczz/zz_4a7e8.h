#ifdef ZZ_INCLUDE_CODE
ZZ_4A7E8:
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = A1 << 16;
	A3 = (int32_t)V0 >> 16;
	V0 = A3 << 1;
	V0 += A3;
	V0 <<= 2;
	V0 = V0 - A3;
	V0 <<= 2;
	V1 = A0 << 16;
	T0 = (int32_t)V1 >> 16;
	V1 = T0 << 2;
	AT = 0x80060000;
	AT += V1;
	V1 = EMU_ReadU32(AT + 1048); //+ 0x418
	V0 = V0 - A3;
	V0 <<= 2;
	S0 = V0 + V1;
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = V1 + 1;
	EMU_Write32(S0 + 4,V0); //+ 0x4
	V1 = EMU_ReadU8(V1);
	A2 &= 0xFF;
	V0 = 0x40;
	if (A2 == V0)
	{
		V0 = (int32_t)A2 < 65;
		ZZ_CLOCKCYCLES(28,0x8004A94C);
		goto ZZ_4A7E8_164;
	}
	V0 = (int32_t)A2 < 65;
	if (!V0)
	{
		V0 = 0x7;
		ZZ_CLOCKCYCLES(30,0x8004A8A4);
		goto ZZ_4A7E8_BC;
	}
	V0 = 0x7;
	if (A2 == V0)
	{
		V0 = (int32_t)A2 < 8;
		ZZ_CLOCKCYCLES(32,0x8004A91C);
		goto ZZ_4A7E8_134;
	}
	V0 = (int32_t)A2 < 8;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(34,0x8004A888);
		goto ZZ_4A7E8_A0;
	}
	if (!A2)
	{
		V0 = 0x6;
		ZZ_CLOCKCYCLES(36,0x8004A8F4);
		goto ZZ_4A7E8_10C;
	}
	V0 = 0x6;
	if (A2 == V0)
	{
		A0 <<= 16;
		ZZ_CLOCKCYCLES(38,0x8004A90C);
		goto ZZ_4A7E8_124;
	}
	A0 <<= 16;
	ZZ_CLOCKCYCLES(40,0x8004A9D8);
	goto ZZ_4A7E8_1F0;
ZZ_4A7E8_A0:
	V0 = 0xA;
	if (A2 == V0)
	{
		V0 = 0xB;
		ZZ_CLOCKCYCLES(3,0x8004A92C);
		goto ZZ_4A7E8_144;
	}
	V0 = 0xB;
	if (A2 == V0)
	{
		A0 <<= 16;
		ZZ_CLOCKCYCLES(5,0x8004A93C);
		goto ZZ_4A7E8_154;
	}
	A0 <<= 16;
	ZZ_CLOCKCYCLES(7,0x8004A9D8);
	goto ZZ_4A7E8_1F0;
ZZ_4A7E8_BC:
	V0 = 0x63;
	if (A2 == V0)
	{
		V0 = (int32_t)A2 < 100;
		ZZ_CLOCKCYCLES(3,0x8004A97C);
		goto ZZ_4A7E8_194;
	}
	V0 = (int32_t)A2 < 100;
	if (!V0)
	{
		V0 = 0x5B;
		ZZ_CLOCKCYCLES(5,0x8004A8D0);
		goto ZZ_4A7E8_E8;
	}
	V0 = 0x5B;
	if (A2 == V0)
	{
		V0 = 0x62;
		ZZ_CLOCKCYCLES(7,0x8004A95C);
		goto ZZ_4A7E8_174;
	}
	V0 = 0x62;
	if (A2 == V0)
	{
		A0 <<= 16;
		ZZ_CLOCKCYCLES(9,0x8004A96C);
		goto ZZ_4A7E8_184;
	}
	A0 <<= 16;
	ZZ_CLOCKCYCLES(11,0x8004A9D8);
	goto ZZ_4A7E8_1F0;
ZZ_4A7E8_E8:
	V0 = 0x65;
	if (A2 == V0)
	{
		V0 = (int32_t)A2 < 101;
		ZZ_CLOCKCYCLES(3,0x8004A99C);
		goto ZZ_4A7E8_1B4;
	}
	V0 = (int32_t)A2 < 101;
	if (V0)
	{
		V0 = 0x79;
		ZZ_CLOCKCYCLES(5,0x8004A98C);
		goto ZZ_4A7E8_1A4;
	}
	V0 = 0x79;
	if (A2 == V0)
	{
		A0 <<= 16;
		ZZ_CLOCKCYCLES(7,0x8004A9BC);
		goto ZZ_4A7E8_1D4;
	}
	A0 <<= 16;
	ZZ_CLOCKCYCLES(9,0x8004A9D8);
	goto ZZ_4A7E8_1F0;
ZZ_4A7E8_10C:
	EMU_Write16(S0 + 76,V1); //+ 0x4C
	A0 = T0;
	RA = 0x8004A904; //ZZ_4A7E8_11C
	A1 = A3;
	ZZ_CLOCKCYCLES(4,0x8004AEB8);
	goto ZZ_4AEB8;
ZZ_4A7E8_11C:
	EMU_Write32(S0 + 136,V0); //+ 0x88
	ZZ_CLOCKCYCLES(2,0x8004A9EC);
	goto ZZ_4A7E8_204;
ZZ_4A7E8_124:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31880); //+ 0xFFFF8378
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_134:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31876); //+ 0xFFFF837C
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_144:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31872); //+ 0xFFFF8380
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_154:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31868); //+ 0xFFFF8384
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_164:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31868); //+ 0xFFFF8384
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_174:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31848); //+ 0xFFFF8398
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_184:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31864); //+ 0xFFFF8388
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_194:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31860); //+ 0xFFFF838C
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_1A4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31856); //+ 0xFFFF8390
	A0 = T0;
	ZZ_CLOCKCYCLES(4,0x8004A9A8);
	goto ZZ_4A7E8_1C0;
ZZ_4A7E8_1B4:
	A0 = T0;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31852); //+ 0xFFFF8394
	ZZ_CLOCKCYCLES(3,0x8004A9A8);
ZZ_4A7E8_1C0:
	A1 = A3;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004A9B4; //ZZ_4A7E8_1CC
	A2 = V1;
	ZZ_CLOCKCYCLES_JR(3);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004A9AC)
	ZZ_JUMPREGISTER_END();
ZZ_4A7E8_1CC:
	ZZ_CLOCKCYCLES(2,0x8004A9EC);
	goto ZZ_4A7E8_204;
ZZ_4A7E8_1D4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 31844); //+ 0xFFFF839C
	A0 = T0;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004A9D0; //ZZ_4A7E8_1E8
	A1 = A3;
	ZZ_CLOCKCYCLES_JR(5);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004A9C8)
	ZZ_JUMPREGISTER_END();
ZZ_4A7E8_1E8:
	ZZ_CLOCKCYCLES(2,0x8004A9EC);
	goto ZZ_4A7E8_204;
ZZ_4A7E8_1F0:
	A0 = (int32_t)A0 >> 16;
	A1 <<= 16;
	RA = 0x8004A9E8; //ZZ_4A7E8_200
	A1 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(4,0x8004AEB8);
	goto ZZ_4AEB8;
ZZ_4A7E8_200:
	EMU_Write32(S0 + 136,V0); //+ 0x88
	ZZ_CLOCKCYCLES(1,0x8004A9EC);
ZZ_4A7E8_204:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004A7E8,0x8004A888,ZZ_4A7E8);
ZZ_MARK_TARGET(0x8004A888,0x8004A8A4,ZZ_4A7E8_A0);
ZZ_MARK_TARGET(0x8004A8A4,0x8004A8D0,ZZ_4A7E8_BC);
ZZ_MARK_TARGET(0x8004A8D0,0x8004A8F4,ZZ_4A7E8_E8);
ZZ_MARK_TARGET(0x8004A8F4,0x8004A904,ZZ_4A7E8_10C);
ZZ_MARK_TARGET(0x8004A904,0x8004A90C,ZZ_4A7E8_11C);
ZZ_MARK_TARGET(0x8004A90C,0x8004A91C,ZZ_4A7E8_124);
ZZ_MARK_TARGET(0x8004A91C,0x8004A92C,ZZ_4A7E8_134);
ZZ_MARK_TARGET(0x8004A92C,0x8004A93C,ZZ_4A7E8_144);
ZZ_MARK_TARGET(0x8004A93C,0x8004A94C,ZZ_4A7E8_154);
ZZ_MARK_TARGET(0x8004A94C,0x8004A95C,ZZ_4A7E8_164);
ZZ_MARK_TARGET(0x8004A95C,0x8004A96C,ZZ_4A7E8_174);
ZZ_MARK_TARGET(0x8004A96C,0x8004A97C,ZZ_4A7E8_184);
ZZ_MARK_TARGET(0x8004A97C,0x8004A98C,ZZ_4A7E8_194);
ZZ_MARK_TARGET(0x8004A98C,0x8004A99C,ZZ_4A7E8_1A4);
ZZ_MARK_TARGET(0x8004A99C,0x8004A9A8,ZZ_4A7E8_1B4);
ZZ_MARK_TARGET(0x8004A9A8,0x8004A9B4,ZZ_4A7E8_1C0);
ZZ_MARK_TARGET(0x8004A9B4,0x8004A9BC,ZZ_4A7E8_1CC);
ZZ_MARK_TARGET(0x8004A9BC,0x8004A9D0,ZZ_4A7E8_1D4);
ZZ_MARK_TARGET(0x8004A9D0,0x8004A9D8,ZZ_4A7E8_1E8);
ZZ_MARK_TARGET(0x8004A9D8,0x8004A9E8,ZZ_4A7E8_1F0);
ZZ_MARK_TARGET(0x8004A9E8,0x8004A9EC,ZZ_4A7E8_200);
ZZ_MARK_TARGET(0x8004A9EC,0x8004A9FC,ZZ_4A7E8_204);
