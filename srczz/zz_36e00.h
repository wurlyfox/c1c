#ifdef ZZ_INCLUDE_CODE
ZZ_36E00:
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	if (!V0)
	{
		EMU_Write32(SP + 16,S0); //+ 0x10
		ZZ_CLOCKCYCLES(5,0x80036E58);
		goto ZZ_36E00_58;
	}
	EMU_Write32(SP + 16,S0); //+ 0x10
	A1 = A0 << 2;
	A1 += A0;
	A1 <<= 2;
	A1 += A0;
	A1 <<= 3;
	A1 += A0;
	A1 <<= 2;
	A1 += V0;
	S0 = 0x80060000;
	S0 -= 14440;
	A0 = S0;
	RA = 0x80036E48; //ZZ_36E00_48
	A1 += 1792;
	ZZ_CLOCKCYCLES(18,0x8004947C);
	goto ZZ_4947C;
ZZ_36E00_48:
	AT = 0x80070000;
	EMU_Write32(AT - 12700,S0); //+ 0xFFFFCE64
	V0 = R0;
	ZZ_CLOCKCYCLES(4,0x80036E5C);
	goto ZZ_36E00_5C;
ZZ_36E00_58:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(1,0x80036E5C);
ZZ_36E00_5C:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80036AAC,ZZ_369C4_E8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036E00,0x80036E48,ZZ_36E00);
ZZ_MARK_TARGET(0x80036E48,0x80036E58,ZZ_36E00_48);
ZZ_MARK_TARGET(0x80036E58,0x80036E5C,ZZ_36E00_58);
ZZ_MARK_TARGET(0x80036E5C,0x80036E70,ZZ_36E00_5C);
