#ifdef ZZ_INCLUDE_CODE
ZZ_1AAD8:
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	EMU_Write32(GP + 696,R0); //+ 0x2B8
	RA = 0x8001AAF0; //ZZ_1AAD8_18
	A0 = 0xE280;
	ZZ_CLOCKCYCLES(6,0x80011A58);
	goto ZZ_11A58;
ZZ_1AAD8_18:
	A0 = 0x35C;
	S0 = 0x80060000;
	S0 += 3508;
	RA = 0x8001AB04; //ZZ_1AAD8_2C
	EMU_Write32(S0,V0);
	ZZ_CLOCKCYCLES(5,0x80011A58);
	goto ZZ_11A58;
ZZ_1AAD8_2C:
	V1 = EMU_ReadU32(S0);
	A1 = S0 - 4;
	if (!V1)
	{
		EMU_Write32(S0 - 4,V0); //+ 0xFFFFFFFC
		ZZ_CLOCKCYCLES(4,0x8001AB1C);
		goto ZZ_1AAD8_44;
	}
	EMU_Write32(S0 - 4,V0); //+ 0xFFFFFFFC
	if (V0)
	{
		A0 = R0;
		ZZ_CLOCKCYCLES(6,0x8001AB24);
		goto ZZ_1AAD8_4C;
	}
	A0 = R0;
	ZZ_CLOCKCYCLES(6,0x8001AB1C);
ZZ_1AAD8_44:
	V0 = -15;
	ZZ_CLOCKCYCLES(2,0x8001AC14);
	goto ZZ_1AAD8_13C;
ZZ_1AAD8_4C:
	A3 = S0;
	T0 = A1 + 72;
	A2 = 0x25C;
	A1 = R0;
	V0 = 0x2;
	AT = 0x80060000;
	EMU_Write32(AT + 3584,R0); //+ 0xE00
	AT = 0x80060000;
	EMU_Write32(AT + 3588,R0); //+ 0xE04
	AT = 0x80060000;
	EMU_Write32(AT + 3576,V0); //+ 0xDF8
	EMU_Write32(A3 + 72,V1); //+ 0x48
	ZZ_CLOCKCYCLES(12,0x8001AB54);
ZZ_1AAD8_7C:
	V0 = EMU_ReadU32(A3);
	V1 = A1 + V0;
	V0 = (int32_t)A0 < 95;
	EMU_Write32(V1,R0);
	EMU_Write32(V1 + 100,T0); //+ 0x64
	if (!V0)
	{
		EMU_Write32(V1 + 108,R0); //+ 0x6C
		ZZ_CLOCKCYCLES(8,0x8001AB88);
		goto ZZ_1AAD8_B0;
	}
	EMU_Write32(V1 + 108,R0); //+ 0x6C
	V0 = EMU_ReadU32(A3);
	V0 += A2;
	EMU_Write32(V1 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(13,0x8001AB8C);
	goto ZZ_1AAD8_B4;
ZZ_1AAD8_B0:
	EMU_Write32(V1 + 104,R0); //+ 0x68
	ZZ_CLOCKCYCLES(1,0x8001AB8C);
ZZ_1AAD8_B4:
	A2 += 604;
	A0 += 1;
	V0 = (int32_t)A0 < 96;
	if (V0)
	{
		A1 += 604;
		ZZ_CLOCKCYCLES(5,0x8001AB54);
		goto ZZ_1AAD8_7C;
	}
	A1 += 604;
	A0 = R0;
	A2 = 0x2;
	V0 = 0x80060000;
	V0 += 3512;
	A1 = V0 + 4;
	V1 = V0;
	ZZ_CLOCKCYCLES(11,0x8001ABB8);
ZZ_1AAD8_E0:
	EMU_Write32(V1,A2);
	EMU_Write32(A1,R0);
	A1 += 8;
	A0 += 1;
	V0 = (int32_t)A0 < 8;
	if (V0)
	{
		V1 += 8;
		ZZ_CLOCKCYCLES(7,0x8001ABB8);
		goto ZZ_1AAD8_E0;
	}
	V1 += 8;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3504); //+ 0xDB0
	EMU_Write32(V0,R0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3504); //+ 0xDB0
	EMU_Write32(V0 + 100,R0); //+ 0x64
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3504); //+ 0xDB0
	EMU_Write32(V0 + 108,R0); //+ 0x6C
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3504); //+ 0xDB0
	V0 = -255;
	EMU_Write32(V1 + 104,R0); //+ 0x68
	ZZ_CLOCKCYCLES(23,0x8001AC14);
ZZ_1AAD8_13C:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80015E48,ZZ_15B58_2F0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001AAD8,0x8001AAF0,ZZ_1AAD8);
ZZ_MARK_TARGET(0x8001AAF0,0x8001AB04,ZZ_1AAD8_18);
ZZ_MARK_TARGET(0x8001AB04,0x8001AB1C,ZZ_1AAD8_2C);
ZZ_MARK_TARGET(0x8001AB1C,0x8001AB24,ZZ_1AAD8_44);
ZZ_MARK_TARGET(0x8001AB24,0x8001AB54,ZZ_1AAD8_4C);
ZZ_MARK_TARGET(0x8001AB54,0x8001AB88,ZZ_1AAD8_7C);
ZZ_MARK_TARGET(0x8001AB88,0x8001AB8C,ZZ_1AAD8_B0);
ZZ_MARK_TARGET(0x8001AB8C,0x8001ABB8,ZZ_1AAD8_B4);
ZZ_MARK_TARGET(0x8001ABB8,0x8001AC14,ZZ_1AAD8_E0);
ZZ_MARK_TARGET(0x8001AC14,0x8001AC28,ZZ_1AAD8_13C);