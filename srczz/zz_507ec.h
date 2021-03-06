#ifdef ZZ_INCLUDE_CODE
ZZ_507EC:
	V1 = A0 & 0xFF;
	V0 = V1 < 25;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80050804);
		goto ZZ_507EC_18;
	}
	if (V1)
	{
		ZZ_CLOCKCYCLES(6,0x8005080C);
		goto ZZ_507EC_20;
	}
	ZZ_CLOCKCYCLES(6,0x80050804);
ZZ_507EC_18:
	V0 = 0xFF;
	ZZ_CLOCKCYCLES(2,0x80050860);
	goto ZZ_507EC_74;
ZZ_507EC_20:
	AT = 0x80060000;
	EMU_Write8(AT - 7360,A0); //+ 0xFFFFE340
	A0 = 0x80060000;
	A0 = EMU_ReadU8(A0 - 7360); //+ 0xFFFFE340
	V0 = (int32_t)A0 < 24;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x80050858);
		goto ZZ_507EC_6C;
	}
	A1 = 0x1;
	ZZ_CLOCKCYCLES(9,0x80050830);
ZZ_507EC_44:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 25204); //+ 0x6274
	V1 = A1 << A0;
	A0 += 1;
	V1 |= V0;
	AT = 0x80050000;
	EMU_Write32(AT + 25204,V1); //+ 0x6274
	V0 = (int32_t)A0 < 24;
	if (V0)
	{
		ZZ_CLOCKCYCLES(10,0x80050830);
		goto ZZ_507EC_44;
	}
	ZZ_CLOCKCYCLES(10,0x80050858);
ZZ_507EC_6C:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 7360); //+ 0xFFFFE340
	ZZ_CLOCKCYCLES(2,0x80050860);
ZZ_507EC_74:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80031398,ZZ_31244_154);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800507EC,0x80050804,ZZ_507EC);
ZZ_MARK_TARGET(0x80050804,0x8005080C,ZZ_507EC_18);
ZZ_MARK_TARGET(0x8005080C,0x80050830,ZZ_507EC_20);
ZZ_MARK_TARGET(0x80050830,0x80050858,ZZ_507EC_44);
ZZ_MARK_TARGET(0x80050858,0x80050860,ZZ_507EC_6C);
ZZ_MARK_TARGET(0x80050860,0x80050868,ZZ_507EC_74);
