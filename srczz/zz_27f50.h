#ifdef ZZ_INCLUDE_CODE
ZZ_27F50:
	SP -= 176;
	V1 = A0;
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 26292); //+ 0x66B4
	A0 = A2;
	EMU_Write32(SP + 164,S1); //+ 0xA4
	S1 = A3;
	EMU_Write32(SP + 160,S0); //+ 0xA0
	S0 = A1 + 48;
	if (A1 != V0)
	{
		EMU_Write32(SP + 168,RA); //+ 0xA8
		ZZ_CLOCKCYCLES(11,0x80027F94);
		goto ZZ_27F50_44;
	}
	EMU_Write32(SP + 168,RA); //+ 0xA8
	V0 = EMU_ReadU32(A1 + 288); //+ 0x120
	V0 &= 0x20;
	if (!V0)
	{
		A1 = V1;
		ZZ_CLOCKCYCLES(16,0x80027F98);
		goto ZZ_27F50_48;
	}
	A1 = V1;
	A0 = 0x37;
	ZZ_CLOCKCYCLES(17,0x80027F94);
ZZ_27F50_44:
	A1 = V1;
	ZZ_CLOCKCYCLES(1,0x80027F98);
ZZ_27F50_48:
	RA = 0x80027FA0; //ZZ_27F50_50
	A2 = SP + 16;
	ZZ_CLOCKCYCLES(2,0x80027BC4);
	goto ZZ_27BC4;
ZZ_27F50_50:
	V0 = R0 < S1;
	V0 = -V0;
	A1 = V0 & 0x15E;
	if (!A1)
	{
		A2 = S0 + 18;
		ZZ_CLOCKCYCLES(5,0x80027FE4);
		goto ZZ_27F50_94;
	}
	A2 = S0 + 18;
	V1 = EMU_ReadS16(S0 + 18); //+ 0x12
	V0 = EMU_ReadS16(SP + 34); //+ 0x22
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(12,0x80027FE0);
		goto ZZ_27F50_90;
	}
	V0 = A0 + A1;
	V0 = -A1;
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(16,0x80027FE4);
		goto ZZ_27F50_94;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(16,0x80027FE0);
ZZ_27F50_90:
	EMU_Write16(SP + 34,V0); //+ 0x22
	ZZ_CLOCKCYCLES(1,0x80027FE4);
ZZ_27F50_94:
	V0 = EMU_ReadU16(SP + 34); //+ 0x22
	EMU_Write16(A2,V0);
	if (!A1)
	{
		A2 = S0 + 20;
		ZZ_CLOCKCYCLES(5,0x80028028);
		goto ZZ_27F50_D8;
	}
	A2 = S0 + 20;
	V1 = EMU_ReadS16(S0 + 20); //+ 0x14
	V0 = EMU_ReadS16(SP + 36); //+ 0x24
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(12,0x80028024);
		goto ZZ_27F50_D4;
	}
	V0 = A0 + A1;
	V0 = -A1;
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(16,0x80028028);
		goto ZZ_27F50_D8;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(16,0x80028024);
ZZ_27F50_D4:
	EMU_Write16(SP + 36,V0); //+ 0x24
	ZZ_CLOCKCYCLES(1,0x80028028);
ZZ_27F50_D8:
	V0 = EMU_ReadU16(SP + 36); //+ 0x24
	EMU_Write16(A2,V0);
	if (!A1)
	{
		A2 = S0 + 22;
		ZZ_CLOCKCYCLES(5,0x8002806C);
		goto ZZ_27F50_11C;
	}
	A2 = S0 + 22;
	V1 = EMU_ReadS16(S0 + 22); //+ 0x16
	V0 = EMU_ReadS16(SP + 38); //+ 0x26
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(12,0x80028068);
		goto ZZ_27F50_118;
	}
	V0 = A0 + A1;
	V0 = -A1;
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(16,0x8002806C);
		goto ZZ_27F50_11C;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(16,0x80028068);
ZZ_27F50_118:
	EMU_Write16(SP + 38,V0); //+ 0x26
	ZZ_CLOCKCYCLES(1,0x8002806C);
ZZ_27F50_11C:
	V0 = EMU_ReadU16(SP + 38); //+ 0x26
	EMU_Write16(A2,V0);
	if (!A1)
	{
		A2 = S0 + 42;
		ZZ_CLOCKCYCLES(5,0x800280B0);
		goto ZZ_27F50_160;
	}
	A2 = S0 + 42;
	V1 = EMU_ReadS16(S0 + 42); //+ 0x2A
	V0 = EMU_ReadS16(SP + 58); //+ 0x3A
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(12,0x800280AC);
		goto ZZ_27F50_15C;
	}
	V0 = A0 + A1;
	V0 = -A1;
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(16,0x800280B0);
		goto ZZ_27F50_160;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(16,0x800280AC);
ZZ_27F50_15C:
	EMU_Write16(SP + 58,V0); //+ 0x3A
	ZZ_CLOCKCYCLES(1,0x800280B0);
ZZ_27F50_160:
	V0 = EMU_ReadU16(SP + 58); //+ 0x3A
	EMU_Write16(A2,V0);
	if (!A1)
	{
		A2 = S0 + 44;
		ZZ_CLOCKCYCLES(5,0x800280F4);
		goto ZZ_27F50_1A4;
	}
	A2 = S0 + 44;
	V1 = EMU_ReadS16(S0 + 44); //+ 0x2C
	V0 = EMU_ReadS16(SP + 60); //+ 0x3C
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(12,0x800280F0);
		goto ZZ_27F50_1A0;
	}
	V0 = A0 + A1;
	V0 = -A1;
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(16,0x800280F4);
		goto ZZ_27F50_1A4;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(16,0x800280F0);
ZZ_27F50_1A0:
	EMU_Write16(SP + 60,V0); //+ 0x3C
	ZZ_CLOCKCYCLES(1,0x800280F4);
ZZ_27F50_1A4:
	V0 = EMU_ReadU16(SP + 60); //+ 0x3C
	EMU_Write16(A2,V0);
	if (!A1)
	{
		A2 = S0 + 46;
		ZZ_CLOCKCYCLES(5,0x80028138);
		goto ZZ_27F50_1E8;
	}
	A2 = S0 + 46;
	V1 = EMU_ReadS16(S0 + 46); //+ 0x2E
	V0 = EMU_ReadS16(SP + 62); //+ 0x3E
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(12,0x80028134);
		goto ZZ_27F50_1E4;
	}
	V0 = A0 + A1;
	V0 = -A1;
	V0 = (int32_t)V1 < (int32_t)V0;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(16,0x80028138);
		goto ZZ_27F50_1E8;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(16,0x80028134);
ZZ_27F50_1E4:
	EMU_Write16(SP + 62,V0); //+ 0x3E
	ZZ_CLOCKCYCLES(1,0x80028138);
ZZ_27F50_1E8:
	T4 = -A1;
	T2 = R0;
	T6 = S0;
	T5 = SP + 16;
	V0 = EMU_ReadU16(SP + 62); //+ 0x3E
	T3 = T5;
	EMU_Write16(A2,V0);
	ZZ_CLOCKCYCLES(7,0x80028154);
ZZ_27F50_204:
	if (!A1)
	{
		T0 = T2 + S0;
		ZZ_CLOCKCYCLES(2,0x8002818C);
		goto ZZ_27F50_23C;
	}
	T0 = T2 + S0;
	V1 = EMU_ReadS16(T6);
	V0 = EMU_ReadS16(T3);
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(9,0x80028184);
		goto ZZ_27F50_234;
	}
	V0 = A0 + A1;
	V0 = (int32_t)V1 < (int32_t)T4;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(12,0x8002818C);
		goto ZZ_27F50_23C;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(12,0x80028184);
ZZ_27F50_234:
	EMU_Write16(T3,V0);
	T0 = T2 + S0;
	ZZ_CLOCKCYCLES(2,0x8002818C);
ZZ_27F50_23C:
	T0 += 2;
	A2 = T2 + T5;
	V0 = EMU_ReadU16(T3);
	A2 += 2;
	if (!A1)
	{
		EMU_Write16(T6,V0);
		ZZ_CLOCKCYCLES(6,0x800281D0);
		goto ZZ_27F50_280;
	}
	EMU_Write16(T6,V0);
	V1 = EMU_ReadS16(T0);
	V0 = EMU_ReadS16(A2);
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(13,0x800281CC);
		goto ZZ_27F50_27C;
	}
	V0 = A0 + A1;
	V0 = (int32_t)V1 < (int32_t)T4;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(16,0x800281D0);
		goto ZZ_27F50_280;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(16,0x800281CC);
ZZ_27F50_27C:
	EMU_Write16(A2,V0);
	ZZ_CLOCKCYCLES(1,0x800281D0);
ZZ_27F50_280:
	T1 = T2 + S0;
	T1 += 4;
	A3 = T2 + T5;
	V0 = EMU_ReadU16(A2);
	A3 += 4;
	if (!A1)
	{
		EMU_Write16(T0,V0);
		ZZ_CLOCKCYCLES(7,0x80028218);
		goto ZZ_27F50_2C8;
	}
	EMU_Write16(T0,V0);
	V1 = EMU_ReadS16(T1);
	V0 = EMU_ReadS16(A3);
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(14,0x80028214);
		goto ZZ_27F50_2C4;
	}
	V0 = A0 + A1;
	V0 = (int32_t)V1 < (int32_t)T4;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(17,0x80028218);
		goto ZZ_27F50_2C8;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(17,0x80028214);
ZZ_27F50_2C4:
	EMU_Write16(A3,V0);
	ZZ_CLOCKCYCLES(1,0x80028218);
ZZ_27F50_2C8:
	T0 = T2 + S0;
	T0 += 24;
	A2 = T2 + T5;
	V0 = EMU_ReadU16(A3);
	A2 += 24;
	if (!A1)
	{
		EMU_Write16(T1,V0);
		ZZ_CLOCKCYCLES(7,0x80028260);
		goto ZZ_27F50_310;
	}
	EMU_Write16(T1,V0);
	V1 = EMU_ReadS16(T0);
	V0 = EMU_ReadS16(A2);
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(14,0x8002825C);
		goto ZZ_27F50_30C;
	}
	V0 = A0 + A1;
	V0 = (int32_t)V1 < (int32_t)T4;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(17,0x80028260);
		goto ZZ_27F50_310;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(17,0x8002825C);
ZZ_27F50_30C:
	EMU_Write16(A2,V0);
	ZZ_CLOCKCYCLES(1,0x80028260);
ZZ_27F50_310:
	T1 = T2 + S0;
	T1 += 26;
	A3 = T2 + T5;
	V0 = EMU_ReadU16(A2);
	A3 += 26;
	if (!A1)
	{
		EMU_Write16(T0,V0);
		ZZ_CLOCKCYCLES(7,0x800282A8);
		goto ZZ_27F50_358;
	}
	EMU_Write16(T0,V0);
	V1 = EMU_ReadS16(T1);
	V0 = EMU_ReadS16(A3);
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(14,0x800282A4);
		goto ZZ_27F50_354;
	}
	V0 = A0 + A1;
	V0 = (int32_t)V1 < (int32_t)T4;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(17,0x800282A8);
		goto ZZ_27F50_358;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(17,0x800282A4);
ZZ_27F50_354:
	EMU_Write16(A3,V0);
	ZZ_CLOCKCYCLES(1,0x800282A8);
ZZ_27F50_358:
	T0 = T2 + S0;
	T0 += 28;
	A2 = T2 + T5;
	V0 = EMU_ReadU16(A3);
	A2 += 28;
	if (!A1)
	{
		EMU_Write16(T1,V0);
		ZZ_CLOCKCYCLES(7,0x800282F0);
		goto ZZ_27F50_3A0;
	}
	EMU_Write16(T1,V0);
	V1 = EMU_ReadS16(T0);
	V0 = EMU_ReadS16(A2);
	A0 = V1;
	V1 = V0 - V1;
	V0 = (int32_t)A1 < (int32_t)V1;
	if (V0)
	{
		V0 = A0 + A1;
		ZZ_CLOCKCYCLES(14,0x800282EC);
		goto ZZ_27F50_39C;
	}
	V0 = A0 + A1;
	V0 = (int32_t)V1 < (int32_t)T4;
	if (!V0)
	{
		V0 = A0 - A1;
		ZZ_CLOCKCYCLES(17,0x800282F0);
		goto ZZ_27F50_3A0;
	}
	V0 = A0 - A1;
	ZZ_CLOCKCYCLES(17,0x800282EC);
ZZ_27F50_39C:
	EMU_Write16(A2,V0);
	ZZ_CLOCKCYCLES(1,0x800282F0);
ZZ_27F50_3A0:
	T2 += 6;
	T6 += 6;
	V0 = EMU_ReadU16(A2);
	EMU_Write16(T0,V0);
	V0 = S0 + 18;
	V0 = (int32_t)T6 < (int32_t)V0;
	if (V0)
	{
		T3 += 6;
		ZZ_CLOCKCYCLES(9,0x80028154);
		goto ZZ_27F50_204;
	}
	T3 += 6;
	RA = EMU_ReadU32(SP + 168); //+ 0xA8
	S1 = EMU_ReadU32(SP + 164); //+ 0xA4
	S0 = EMU_ReadU32(SP + 160); //+ 0xA0
	SP += 176;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(15);
	ZZ_JUMPREGISTER(0x800294A0,ZZ_2940C_94);
	ZZ_JUMPREGISTER(0x800293D4,ZZ_28E3C_598);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80027F50,0x80027F94,ZZ_27F50);
ZZ_MARK_TARGET(0x80027F94,0x80027F98,ZZ_27F50_44);
ZZ_MARK_TARGET(0x80027F98,0x80027FA0,ZZ_27F50_48);
ZZ_MARK_TARGET(0x80027FA0,0x80027FE0,ZZ_27F50_50);
ZZ_MARK_TARGET(0x80027FE0,0x80027FE4,ZZ_27F50_90);
ZZ_MARK_TARGET(0x80027FE4,0x80028024,ZZ_27F50_94);
ZZ_MARK_TARGET(0x80028024,0x80028028,ZZ_27F50_D4);
ZZ_MARK_TARGET(0x80028028,0x80028068,ZZ_27F50_D8);
ZZ_MARK_TARGET(0x80028068,0x8002806C,ZZ_27F50_118);
ZZ_MARK_TARGET(0x8002806C,0x800280AC,ZZ_27F50_11C);
ZZ_MARK_TARGET(0x800280AC,0x800280B0,ZZ_27F50_15C);
ZZ_MARK_TARGET(0x800280B0,0x800280F0,ZZ_27F50_160);
ZZ_MARK_TARGET(0x800280F0,0x800280F4,ZZ_27F50_1A0);
ZZ_MARK_TARGET(0x800280F4,0x80028134,ZZ_27F50_1A4);
ZZ_MARK_TARGET(0x80028134,0x80028138,ZZ_27F50_1E4);
ZZ_MARK_TARGET(0x80028138,0x80028154,ZZ_27F50_1E8);
ZZ_MARK_TARGET(0x80028154,0x80028184,ZZ_27F50_204);
ZZ_MARK_TARGET(0x80028184,0x8002818C,ZZ_27F50_234);
ZZ_MARK_TARGET(0x8002818C,0x800281CC,ZZ_27F50_23C);
ZZ_MARK_TARGET(0x800281CC,0x800281D0,ZZ_27F50_27C);
ZZ_MARK_TARGET(0x800281D0,0x80028214,ZZ_27F50_280);
ZZ_MARK_TARGET(0x80028214,0x80028218,ZZ_27F50_2C4);
ZZ_MARK_TARGET(0x80028218,0x8002825C,ZZ_27F50_2C8);
ZZ_MARK_TARGET(0x8002825C,0x80028260,ZZ_27F50_30C);
ZZ_MARK_TARGET(0x80028260,0x800282A4,ZZ_27F50_310);
ZZ_MARK_TARGET(0x800282A4,0x800282A8,ZZ_27F50_354);
ZZ_MARK_TARGET(0x800282A8,0x800282EC,ZZ_27F50_358);
ZZ_MARK_TARGET(0x800282EC,0x800282F0,ZZ_27F50_39C);
ZZ_MARK_TARGET(0x800282F0,0x8002832C,ZZ_27F50_3A0);
