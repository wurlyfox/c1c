#ifdef ZZ_INCLUDE_CODE
ZZ_34BCC:
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	SP -= 24;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = EMU_ReadU32(V0 + 24); //+ 0x18
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x80034C10);
		goto ZZ_34BCC_44;
	}
	RA = 0x80034BF4; //ZZ_34BCC_28
	ZZ_CLOCKCYCLES(10,0x80035EB4);
	goto ZZ_35EB4;
ZZ_34BCC_28:
	RA = 0x80034BFC; //ZZ_34BCC_30
	A0 = R0;
	ZZ_CLOCKCYCLES(2,0x8005B250);
	goto ZZ_5B250;
ZZ_34BCC_30:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80034D2C);
		goto ZZ_34BCC_160;
	}
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	EMU_Write32(V0 + 24,R0); //+ 0x18
	ZZ_CLOCKCYCLES(5,0x80034C10);
ZZ_34BCC_44:
	RA = 0x80034C18; //ZZ_34BCC_4C
	ZZ_CLOCKCYCLES(2,0x80035DFC);
	goto ZZ_35DFC;
ZZ_34BCC_4C:
	V1 = V0;
	V0 = 0x1;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 2;
		ZZ_CLOCKCYCLES(4,0x80034D08);
		goto ZZ_34BCC_13C;
	}
	V0 = (int32_t)V1 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(6,0x80034C40);
		goto ZZ_34BCC_74;
	}
	if (!V1)
	{
		ZZ_CLOCKCYCLES(8,0x80034C5C);
		goto ZZ_34BCC_90;
	}
	ZZ_CLOCKCYCLES(10,0x80034D2C);
	goto ZZ_34BCC_160;
ZZ_34BCC_74:
	V0 = 0x2;
	if (V1 == V0)
	{
		V0 = 0x3;
		ZZ_CLOCKCYCLES(3,0x80034CF0);
		goto ZZ_34BCC_124;
	}
	V0 = 0x3;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x80034D18);
		goto ZZ_34BCC_14C;
	}
	ZZ_CLOCKCYCLES(7,0x80034D2C);
	goto ZZ_34BCC_160;
ZZ_34BCC_90:
	A1 = EMU_ReadU32(GP + 232); //+ 0xE8
	A0 = 0x80060000;
	A0 -= 2804;
	RA = 0x80034C70; //ZZ_34BCC_A4
	A1 += 1180;
	ZZ_CLOCKCYCLES(5,0x80036000);
	goto ZZ_36000;
ZZ_34BCC_A4:
	A0 = EMU_ReadU32(GP + 232); //+ 0xE8
	S0 = V0;
	A1 = S0;
	RA = 0x80034C84; //ZZ_34BCC_B8
	A0 += 1180;
	ZZ_CLOCKCYCLES(5,0x8003608C);
	goto ZZ_3608C;
ZZ_34BCC_B8:
	if ((int32_t)S0 > 0)
	{
		ZZ_CLOCKCYCLES(2,0x80034CB0);
		goto ZZ_34BCC_E4;
	}
	V1 = EMU_ReadU32(GP + 232); //+ 0xE8
	V0 = EMU_ReadU32(V1 + 28); //+ 0x1C
	V0 += 1;
	EMU_Write32(V1 + 28,V0); //+ 0x1C
	V0 = (int32_t)V0 < 11;
	if (V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(11,0x80034D24);
		goto ZZ_34BCC_158;
	}
	A0 = 0x1;
	ZZ_CLOCKCYCLES(11,0x80034CB0);
ZZ_34BCC_E4:
	RA = 0x80034CB8; //ZZ_34BCC_EC
	A0 = 0x2;
	ZZ_CLOCKCYCLES(2,0x800363F0);
	goto ZZ_363F0;
ZZ_34BCC_EC:
	RA = 0x80034CC0; //ZZ_34BCC_F4
	ZZ_CLOCKCYCLES(2,0x80036394);
	goto ZZ_36394;
ZZ_34BCC_F4:
	RA = 0x80034CC8; //ZZ_34BCC_FC
	ZZ_CLOCKCYCLES(2,0x80036AE8);
	goto ZZ_36AE8;
ZZ_34BCC_FC:
	RA = 0x80034CD0; //ZZ_34BCC_104
	A0 = 0x5;
	ZZ_CLOCKCYCLES(2,0x80036410);
	goto ZZ_36410;
ZZ_34BCC_104:
	RA = 0x80034CD8; //ZZ_34BCC_10C
	A0 = 0x20;
	ZZ_CLOCKCYCLES(2,0x80035DC0);
	goto ZZ_35DC0;
ZZ_34BCC_10C:
	V0 = EMU_ReadU32(GP + 232); //+ 0xE8
	EMU_Write32(V0 + 8,R0); //+ 0x8
	EMU_Write32(V0 + 32,S0); //+ 0x20
	EMU_Write32(V0 + 36,R0); //+ 0x24
	ZZ_CLOCKCYCLES(6,0x80034D2C);
	goto ZZ_34BCC_160;
ZZ_34BCC_124:
	RA = 0x80034CF8; //ZZ_34BCC_12C
	ZZ_CLOCKCYCLES(2,0x80035DD8);
	goto ZZ_35DD8;
ZZ_34BCC_12C:
	if (V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x80034D18);
		goto ZZ_34BCC_14C;
	}
	A0 = 0x1;
	ZZ_CLOCKCYCLES(4,0x80034D24);
	goto ZZ_34BCC_158;
ZZ_34BCC_13C:
	RA = 0x80034D10; //ZZ_34BCC_144
	ZZ_CLOCKCYCLES(2,0x80035DD8);
	goto ZZ_35DD8;
ZZ_34BCC_144:
	if (!V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x80034D24);
		goto ZZ_34BCC_158;
	}
	A0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x80034D18);
ZZ_34BCC_14C:
	RA = 0x80034D20; //ZZ_34BCC_154
	A0 = 0x2;
	ZZ_CLOCKCYCLES(2,0x8003636C);
	goto ZZ_3636C;
ZZ_34BCC_154:
	A0 = R0;
	ZZ_CLOCKCYCLES(1,0x80034D24);
ZZ_34BCC_158:
	RA = 0x80034D2C; //ZZ_34BCC_160
	ZZ_CLOCKCYCLES(2,0x80036410);
	goto ZZ_36410;
ZZ_34BCC_160:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80034994,ZZ_348EC_A8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80034BCC,0x80034BF4,ZZ_34BCC);
ZZ_MARK_TARGET(0x80034BF4,0x80034BFC,ZZ_34BCC_28);
ZZ_MARK_TARGET(0x80034BFC,0x80034C10,ZZ_34BCC_30);
ZZ_MARK_TARGET(0x80034C10,0x80034C18,ZZ_34BCC_44);
ZZ_MARK_TARGET(0x80034C18,0x80034C40,ZZ_34BCC_4C);
ZZ_MARK_TARGET(0x80034C40,0x80034C5C,ZZ_34BCC_74);
ZZ_MARK_TARGET(0x80034C5C,0x80034C70,ZZ_34BCC_90);
ZZ_MARK_TARGET(0x80034C70,0x80034C84,ZZ_34BCC_A4);
ZZ_MARK_TARGET(0x80034C84,0x80034CB0,ZZ_34BCC_B8);
ZZ_MARK_TARGET(0x80034CB0,0x80034CB8,ZZ_34BCC_E4);
ZZ_MARK_TARGET(0x80034CB8,0x80034CC0,ZZ_34BCC_EC);
ZZ_MARK_TARGET(0x80034CC0,0x80034CC8,ZZ_34BCC_F4);
ZZ_MARK_TARGET(0x80034CC8,0x80034CD0,ZZ_34BCC_FC);
ZZ_MARK_TARGET(0x80034CD0,0x80034CD8,ZZ_34BCC_104);
ZZ_MARK_TARGET(0x80034CD8,0x80034CF0,ZZ_34BCC_10C);
ZZ_MARK_TARGET(0x80034CF0,0x80034CF8,ZZ_34BCC_124);
ZZ_MARK_TARGET(0x80034CF8,0x80034D08,ZZ_34BCC_12C);
ZZ_MARK_TARGET(0x80034D08,0x80034D10,ZZ_34BCC_13C);
ZZ_MARK_TARGET(0x80034D10,0x80034D18,ZZ_34BCC_144);
ZZ_MARK_TARGET(0x80034D18,0x80034D20,ZZ_34BCC_14C);
ZZ_MARK_TARGET(0x80034D20,0x80034D24,ZZ_34BCC_154);
ZZ_MARK_TARGET(0x80034D24,0x80034D2C,ZZ_34BCC_158);
ZZ_MARK_TARGET(0x80034D2C,0x80034D40,ZZ_34BCC_160);
