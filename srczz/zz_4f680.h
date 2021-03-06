#ifdef ZZ_INCLUDE_CODE
ZZ_4F680:
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = A0 << 16;
	V0 = (int32_t)V0 >> 16;
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	V1 += V0;
	T0 = A2;
	S0 = A0;
	A2 = EMU_ReadU32(SP + 40); //+ 0x28
	V0 = 0xFFC0;
	A0 = V1 << 2;
	A2 += V0;
	AT = 0x80050000;
	AT += A0;
	V0 = EMU_ReadS16(AT + 29370); //+ 0x72BA
	A1 <<= 16;
	A1 = (int32_t)A1 >> 16;
	if (V0 != A1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(22,0x8004F89C);
		goto ZZ_4F680_21C;
	}
	V0 = R0;
	AT = 0x80050000;
	AT += A0;
	V1 = EMU_ReadS16(AT + 29378); //+ 0x72C2
	V0 = T0 << 16;
	V0 = (int32_t)V0 >> 16;
	if (V1 != V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(29,0x8004F89C);
		goto ZZ_4F680_21C;
	}
	V0 = R0;
	AT = 0x80050000;
	AT += A0;
	V1 = EMU_ReadS16(AT + 29374); //+ 0x72BE
	V0 = A3 << 16;
	V0 = (int32_t)V0 >> 16;
	if (V1 != V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(36,0x8004F89C);
		goto ZZ_4F680_21C;
	}
	V0 = R0;
	AT = 0x80050000;
	AT += A0;
	V1 = EMU_ReadU16(AT + 29376); //+ 0x72C0
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 6817); //+ 0xFFFFE55F
	AT = 0x80050000;
	AT += A0;
	A0 = EMU_ReadU16(AT + 29368); //+ 0x72B8
	V0 <<= 4;
	A3 = V1 + V0;
	V0 = A2 << 16;
	A1 = (int32_t)V0 >> 16;
	if ((int32_t)A1 <= 0)
	{
		V0 = A3 & 0xFFFF;
		ZZ_CLOCKCYCLES(50,0x8004F7AC);
		goto ZZ_4F680_12C;
	}
	V0 = A3 & 0xFFFF;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12316); //+ 0xFFFFCFE4
	V0 <<= 5;
	V0 += V1;
	V0 = EMU_ReadU8(V0 + 13); //+ 0xD
	EMU_SMultiply(A1,V0);
	V0 = LO;
	V1 = 0x3F;
	EMU_SDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(63,0x8004F780);
		goto ZZ_4F680_100;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(64,0x8004F780);
ZZ_4F680_100:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x8004F798);
		goto ZZ_4F680_118;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x8004F798);
		goto ZZ_4F680_118;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x8004F798);
ZZ_4F680_118:
	V0 = LO;
	V1 = HI;
	A0 += V0;
	A1 = V1 << 1;
	ZZ_CLOCKCYCLES(5,0x8004F81C);
	goto ZZ_4F680_19C;
ZZ_4F680_12C:
	if ((int32_t)A1 >= 0)
	{
		V1 = A3 & 0xFFFF;
		ZZ_CLOCKCYCLES(2,0x8004F818);
		goto ZZ_4F680_198;
	}
	V1 = A3 & 0xFFFF;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 12316); //+ 0xFFFFCFE4
	V1 <<= 5;
	V1 += V0;
	V0 = EMU_ReadU8(V1 + 12); //+ 0xC
	EMU_SMultiply(A1,V0);
	V1 = LO;
	if ((int32_t)V1 >= 0)
	{
		V0 = V1;
		ZZ_CLOCKCYCLES(14,0x8004F7E8);
		goto ZZ_4F680_168;
	}
	V0 = V1;
	V0 = V1 + 63;
	ZZ_CLOCKCYCLES(15,0x8004F7E8);
ZZ_4F680_168:
	V0 = (int32_t)V0 >> 6;
	V0 += A0;
	A0 = V0 - 1;
	if ((int32_t)V1 >= 0)
	{
		V0 = V1;
		ZZ_CLOCKCYCLES(5,0x8004F800);
		goto ZZ_4F680_180;
	}
	V0 = V1;
	V0 = V1 + 63;
	ZZ_CLOCKCYCLES(6,0x8004F800);
ZZ_4F680_180:
	V0 = (int32_t)V0 >> 6;
	V0 <<= 6;
	V0 = V1 - V0;
	V0 <<= 1;
	A1 = V0 + 127;
	ZZ_CLOCKCYCLES(6,0x8004F81C);
	goto ZZ_4F680_19C;
ZZ_4F680_198:
	A1 = R0;
	ZZ_CLOCKCYCLES(1,0x8004F81C);
ZZ_4F680_19C:
	V1 = S0 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	V0 <<= 2;
	AT = 0x80050000;
	AT += V0;
	V0 = EMU_ReadU8(AT + 29376); //+ 0x72C0
	AT = 0x80060000;
	EMU_Write16(AT - 6798,S0); //+ 0xFFFFE572
	A0 &= 0xFFFF;
	AT = 0x80060000;
	EMU_Write8(AT - 6812,V0); //+ 0xFFFFE564
	RA = 0x8004F860; //ZZ_4F680_1E0
	A1 &= 0xFFFF;
	ZZ_CLOCKCYCLES(17,0x8004EADC);
	goto ZZ_4EADC;
ZZ_4F680_1E0:
	A0 = S0 << 16;
	A0 = (int32_t)A0 >> 16;
	V1 = A0 << 4;
	AT = 0x80060000;
	AT += V1;
	EMU_Write16(AT - 6772,V0); //+ 0xFFFFE58C
	AT = 0x80050000;
	AT += A0;
	V1 = EMU_ReadU8(AT + 30628); //+ 0x77A4
	V1 |= 0x4;
	AT = 0x80050000;
	AT += A0;
	EMU_Write8(AT + 30628,V1); //+ 0x77A4
	V0 = 0x1;
	ZZ_CLOCKCYCLES(15,0x8004F89C);
ZZ_4F680_21C:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8004F940,ZZ_4F8AC_94);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F680,0x8004F780,ZZ_4F680);
ZZ_MARK_TARGET(0x8004F780,0x8004F798,ZZ_4F680_100);
ZZ_MARK_TARGET(0x8004F798,0x8004F7AC,ZZ_4F680_118);
ZZ_MARK_TARGET(0x8004F7AC,0x8004F7E8,ZZ_4F680_12C);
ZZ_MARK_TARGET(0x8004F7E8,0x8004F800,ZZ_4F680_168);
ZZ_MARK_TARGET(0x8004F800,0x8004F818,ZZ_4F680_180);
ZZ_MARK_TARGET(0x8004F818,0x8004F81C,ZZ_4F680_198);
ZZ_MARK_TARGET(0x8004F81C,0x8004F860,ZZ_4F680_19C);
ZZ_MARK_TARGET(0x8004F860,0x8004F89C,ZZ_4F680_1E0);
ZZ_MARK_TARGET(0x8004F89C,0x8004F8AC,ZZ_4F680_21C);
