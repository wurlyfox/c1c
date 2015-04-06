#ifdef ZZ_INCLUDE_CODE
ZZ_36000:
	SP -= 160;
	V0 = A0;
	EMU_Write32(SP + 148,S1); //+ 0x94
	S1 = A1;
	A0 = SP + 16;
	A1 = V0;
	EMU_Write32(SP + 152,RA); //+ 0x98
	RA = 0x80036024; //ZZ_36000_24
	EMU_Write32(SP + 144,S0); //+ 0x90
	ZZ_CLOCKCYCLES(9,0x8004947C);
	goto ZZ_4947C;
ZZ_36000_24:
	A1 = 0x80060000;
	A1 -= 2788;
	RA = 0x80036034; //ZZ_36000_34
	A0 = SP + 16;
	ZZ_CLOCKCYCLES(4,0x8004944C);
	goto ZZ_4944C;
ZZ_36000_34:
	S0 = R0;
	A0 = SP + 16;
	RA = 0x80036044; //ZZ_36000_44
	A1 = S1;
	ZZ_CLOCKCYCLES(4,0x8004A024);
	goto ZZ_4A024;
ZZ_36000_44:
	if (S1 != V0)
	{
		V0 = S0;
		ZZ_CLOCKCYCLES(2,0x80036074);
		goto ZZ_36000_74;
	}
	V0 = S0;
	S0 += 1;
	ZZ_CLOCKCYCLES(3,0x80036050);
ZZ_36000_50:
	V0 = (int32_t)S0 < 16;
	if (!V0)
	{
		S1 += 40;
		ZZ_CLOCKCYCLES(3,0x80036070);
		goto ZZ_36000_70;
	}
	S1 += 40;
	RA = 0x80036064; //ZZ_36000_64
	A0 = S1;
	ZZ_CLOCKCYCLES(5,0x8004A034);
	goto ZZ_4A034;
ZZ_36000_64:
	if (S1 == V0)
	{
		S0 += 1;
		ZZ_CLOCKCYCLES(2,0x80036050);
		goto ZZ_36000_50;
	}
	S0 += 1;
	S0 -= 1;
	ZZ_CLOCKCYCLES(3,0x80036070);
ZZ_36000_70:
	V0 = S0;
	ZZ_CLOCKCYCLES(1,0x80036074);
ZZ_36000_74:
	RA = EMU_ReadU32(SP + 152); //+ 0x98
	S1 = EMU_ReadU32(SP + 148); //+ 0x94
	S0 = EMU_ReadU32(SP + 144); //+ 0x90
	SP += 160;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(6);
	ZZ_JUMPREGISTER(0x80034C70,ZZ_34BCC_A4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036000,0x80036024,ZZ_36000);
ZZ_MARK_TARGET(0x80036024,0x80036034,ZZ_36000_24);
ZZ_MARK_TARGET(0x80036034,0x80036044,ZZ_36000_34);
ZZ_MARK_TARGET(0x80036044,0x80036050,ZZ_36000_44);
ZZ_MARK_TARGET(0x80036050,0x80036064,ZZ_36000_50);
ZZ_MARK_TARGET(0x80036064,0x80036070,ZZ_36000_64);
ZZ_MARK_TARGET(0x80036070,0x80036074,ZZ_36000_70);
ZZ_MARK_TARGET(0x80036074,0x8003608C,ZZ_36000_74);
