#ifdef ZZ_INCLUDE_CODE
ZZ_47EE4:
	V0 = 0xFF0000;
	V0 |= 0xFFFF;
	A1 &= V0;
	A3 = A1 >> 16;
	if (!A0)
	{
		A2 = A1;
		ZZ_CLOCKCYCLES(6,0x80047F2C);
		goto ZZ_47EE4_48;
	}
	A2 = A1;
	V0 = 0x1;
	if (A0 != V0)
	{
		ZZ_CLOCKCYCLES(9,0x80047F54);
		goto ZZ_47EE4_70;
	}
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22948); //+ 0x59A4
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22756); //+ 0x58E4
	V0 |= A1;
	EMU_Write16(V1 + 392,A2); //+ 0x188
	EMU_Write16(V1 + 394,A3); //+ 0x18A
	ZZ_CLOCKCYCLES(18,0x80047F4C);
	goto ZZ_47EE4_68;
ZZ_47EE4_48:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22756); //+ 0x58E4
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22948); //+ 0x59A4
	EMU_Write16(V0 + 396,A2); //+ 0x18C
	EMU_Write16(V0 + 398,A3); //+ 0x18E
	V0 = ~A1;
	V0 &= V1;
	ZZ_CLOCKCYCLES(8,0x80047F4C);
ZZ_47EE4_68:
	AT = 0x80050000;
	EMU_Write32(AT + 22948,V0); //+ 0x59A4
	ZZ_CLOCKCYCLES(2,0x80047F54);
ZZ_47EE4_70:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80030F18,ZZ_30CC0_258);
	ZZ_JUMPREGISTER(0x80030F74,ZZ_30CC0_2B4);
	ZZ_JUMPREGISTER(0x80030F58,ZZ_30CC0_298);
	ZZ_JUMPREGISTER(0x80031168,ZZ_30CC0_4A8);
	ZZ_JUMPREGISTER(0x800307F4,ZZ_304C8_32C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80047EE4,0x80047F2C,ZZ_47EE4);
ZZ_MARK_TARGET(0x80047F2C,0x80047F4C,ZZ_47EE4_48);
ZZ_MARK_TARGET(0x80047F4C,0x80047F54,ZZ_47EE4_68);
ZZ_MARK_TARGET(0x80047F54,0x80047F5C,ZZ_47EE4_70);
