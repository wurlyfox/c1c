#ifdef ZZ_INCLUDE_CODE
ZZ_50C64:
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	V0 = A0 & 0xFFFF;
	V0 = V0 < 17;
	if (!V0)
	{
		EMU_Write32(SP + 16,S0); //+ 0x10
		ZZ_CLOCKCYCLES(6,0x80050CBC);
		goto ZZ_50C64_58;
	}
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = A0 << 16;
	S0 = (int32_t)V0 >> 16;
	AT = 0x80060000;
	AT += S0;
	V1 = EMU_ReadU8(AT - 6792); //+ 0xFFFFE578
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(14,0x80050CBC);
		goto ZZ_50C64_58;
	}
	RA = 0x80050CA4; //ZZ_50C64_40
	A0 = R0;
	ZZ_CLOCKCYCLES(16,0x8004DDA8);
	goto ZZ_4DDA8;
ZZ_50C64_40:
	V0 = 0x1;
	AT = 0x80060000;
	AT += S0;
	EMU_Write8(AT - 6792,V0); //+ 0xFFFFE578
	V0 = S0;
	ZZ_CLOCKCYCLES(6,0x80050CC0);
	goto ZZ_50C64_5C;
ZZ_50C64_58:
	V0 = -1;
	ZZ_CLOCKCYCLES(1,0x80050CC0);
ZZ_50C64_5C:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 24;
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800316AC,ZZ_314C4_1E8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80050C64,0x80050CA4,ZZ_50C64);
ZZ_MARK_TARGET(0x80050CA4,0x80050CBC,ZZ_50C64_40);
ZZ_MARK_TARGET(0x80050CBC,0x80050CC0,ZZ_50C64_58);
ZZ_MARK_TARGET(0x80050CC0,0x80050CD0,ZZ_50C64_5C);
