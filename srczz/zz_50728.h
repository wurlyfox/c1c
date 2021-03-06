#ifdef ZZ_INCLUDE_CODE
ZZ_50728:
	A2 = A0;
	V0 = A2 & 0xFFFF;
	V0 = V0 < 16;
	if (!V0)
	{
		A3 = A1;
		ZZ_CLOCKCYCLES(5,0x80050778);
		goto ZZ_50728_50;
	}
	A3 = A1;
	V0 = A0 << 16;
	A0 = (int32_t)V0 >> 16;
	AT = 0x80060000;
	AT += A0;
	V1 = EMU_ReadU8(AT - 6792); //+ 0xFFFFE578
	V0 = 0x1;
	if (V1 != V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(13,0x800507E4);
		goto ZZ_50728_BC;
	}
	V0 = -1;
	V0 = 0x80060000;
	V0 = EMU_ReadS16(V0 - 12348); //+ 0xFFFFCFC4
	V1 = A1 << 16;
	A1 = (int32_t)V1 >> 16;
	V0 = (int32_t)A1 < (int32_t)V0;
	if (V0)
	{
		V0 = A0 << 2;
		ZZ_CLOCKCYCLES(20,0x80050780);
		goto ZZ_50728_58;
	}
	V0 = A0 << 2;
	ZZ_CLOCKCYCLES(20,0x80050778);
ZZ_50728_50:
	V0 = -1;
	ZZ_CLOCKCYCLES(2,0x800507E4);
	goto ZZ_50728_BC;
ZZ_50728_58:
	AT = 0x80050000;
	AT += V0;
	V1 = EMU_ReadU32(AT + 32432); //+ 0x7EB0
	AT = 0x80050000;
	AT += V0;
	A0 = EMU_ReadU32(AT + 32368); //+ 0x7E70
	AT = 0x80050000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 32504); //+ 0x7EF8
	AT = 0x80060000;
	EMU_Write8(AT - 6823,A2); //+ 0xFFFFE559
	AT = 0x80060000;
	EMU_Write8(AT - 6818,A3); //+ 0xFFFFE55E
	AT = 0x80060000;
	EMU_Write32(AT - 12324,V1); //+ 0xFFFFCFDC
	AT = 0x80060000;
	EMU_Write32(AT - 12340,A0); //+ 0xFFFFCFCC
	AT = 0x80060000;
	EMU_Write32(AT - 12316,V0); //+ 0xFFFFCFE4
	V0 = A1 << 4;
	V0 += A0;
	V1 = EMU_ReadU8(V0 + 8); //+ 0x8
	V0 = R0;
	AT = 0x80060000;
	EMU_Write8(AT - 6817,V1); //+ 0xFFFFE55F
	ZZ_CLOCKCYCLES(25,0x800507E4);
ZZ_50728_BC:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8004F8F4,ZZ_4F8AC_48);
	ZZ_JUMPREGISTER(0x8004D0C8,ZZ_4D080_48);
	ZZ_JUMPREGISTER(0x80050244,ZZ_501A8_9C);
	ZZ_JUMPREGISTER(0x8004D1CC,ZZ_4D184_48);
	ZZ_JUMPREGISTER(0x8004DE88,ZZ_4DDE4_A4);
	ZZ_JUMPREGISTER(0x8004D4E0,ZZ_4D498_48);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80050728,0x80050778,ZZ_50728);
ZZ_MARK_TARGET(0x80050778,0x80050780,ZZ_50728_50);
ZZ_MARK_TARGET(0x80050780,0x800507E4,ZZ_50728_58);
ZZ_MARK_TARGET(0x800507E4,0x800507EC,ZZ_50728_BC);
