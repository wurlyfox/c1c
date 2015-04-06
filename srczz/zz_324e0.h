#ifdef ZZ_INCLUDE_CODE
ZZ_324E0:
	SP -= 72;
	V1 = EMU_ReadU32(SP + 88); //+ 0x58
	T0 = EMU_ReadU32(SP + 92); //+ 0x5C
	V0 = SP + 40;
	EMU_Write32(SP + 64,S0); //+ 0x40
	S0 = 0x1;
	EMU_Write32(SP + 24,V0); //+ 0x18
	V0 = SP + 56;
	EMU_Write32(SP + 68,RA); //+ 0x44
	EMU_Write32(SP + 28,S0); //+ 0x1C
	EMU_Write32(SP + 32,V0); //+ 0x20
	EMU_Write32(SP + 16,V1); //+ 0x10
	RA = 0x80032518; //ZZ_324E0_38
	EMU_Write32(SP + 20,T0); //+ 0x14
	ZZ_CLOCKCYCLES(14,0x80031DF4);
	goto ZZ_31DF4;
ZZ_324E0_38:
	A0 = V0;
	if (A0)
	{
		ZZ_CLOCKCYCLES(3,0x80032530);
		goto ZZ_324E0_50;
	}
	V0 = EMU_ReadU32(SP + 96); //+ 0x60
	ZZ_CLOCKCYCLES(6,0x800325B8);
	goto ZZ_324E0_D8;
ZZ_324E0_50:
	V0 = EMU_ReadU32(SP + 56); //+ 0x38
	V0 = EMU_ReadU8(V0 + 4); //+ 0x4
	V1 = V0 & 0x1F;
	V0 = 0x2;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 3;
		ZZ_CLOCKCYCLES(8,0x8003259C);
		goto ZZ_324E0_BC;
	}
	V0 = (int32_t)V1 < 3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(10,0x80032568);
		goto ZZ_324E0_88;
	}
	if (V1 == S0)
	{
		ZZ_CLOCKCYCLES(12,0x80032584);
		goto ZZ_324E0_A4;
	}
	ZZ_CLOCKCYCLES(14,0x800325B4);
	goto ZZ_324E0_D4;
ZZ_324E0_88:
	V0 = 0x11;
	if (V1 == V0)
	{
		V0 = 0x12;
		ZZ_CLOCKCYCLES(3,0x80032590);
		goto ZZ_324E0_B0;
	}
	V0 = 0x12;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(5,0x800325A8);
		goto ZZ_324E0_C8;
	}
	ZZ_CLOCKCYCLES(7,0x800325B4);
	goto ZZ_324E0_D4;
ZZ_324E0_A4:
	V0 = EMU_ReadU8(A0);
	ZZ_CLOCKCYCLES(3,0x800325B8);
	goto ZZ_324E0_D8;
ZZ_324E0_B0:
	V0 = EMU_ReadS8(A0);
	ZZ_CLOCKCYCLES(3,0x800325B8);
	goto ZZ_324E0_D8;
ZZ_324E0_BC:
	V0 = EMU_ReadU16(A0);
	ZZ_CLOCKCYCLES(3,0x800325B8);
	goto ZZ_324E0_D8;
ZZ_324E0_C8:
	V0 = EMU_ReadS16(A0);
	ZZ_CLOCKCYCLES(3,0x800325B8);
	goto ZZ_324E0_D8;
ZZ_324E0_D4:
	V0 = EMU_ReadU32(A0);
	ZZ_CLOCKCYCLES(1,0x800325B8);
ZZ_324E0_D8:
	RA = EMU_ReadU32(SP + 68); //+ 0x44
	S0 = EMU_ReadU32(SP + 64); //+ 0x40
	SP += 72;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800377D8,ZZ_376E0_F8);
	ZZ_JUMPREGISTER(0x80037904,ZZ_37804_100);
	ZZ_JUMPREGISTER(0x80029764,ZZ_29728_3C);
	ZZ_JUMPREGISTER(0x800224E0,ZZ_22480_60);
	ZZ_JUMPREGISTER(0x800204A4,ZZ_20304_1A0);
	ZZ_JUMPREGISTER(0x80022B74,ZZ_22AD4_A0);
	ZZ_JUMPREGISTER(0x80023268,ZZ_231CC_9C);
	ZZ_JUMPREGISTER(0x80024028,ZZ_23FF0_38);
	ZZ_JUMPREGISTER(0x8002464C,ZZ_245B0_9C);
	ZZ_JUMPREGISTER(0x80024948,ZZ_248CC_7C);
	ZZ_JUMPREGISTER(0x80023DF4,ZZ_23D78_7C);
	ZZ_JUMPREGISTER(0x80022C4C,ZZ_22AD4_178);
	ZZ_JUMPREGISTER(0x80024210,ZZ_240D4_13C);
	ZZ_JUMPREGISTER(0x80023E18,ZZ_23D78_A0);
	ZZ_JUMPREGISTER(0x80019260,ZZ_191D4_8C);
	ZZ_JUMPREGISTER(0x800209D8,ZZ_20304_6D4);
	ZZ_JUMPREGISTER(0x80019284,ZZ_191D4_B0);
	ZZ_JUMPREGISTER(0x800192E8,ZZ_191D4_114);
	ZZ_JUMPREGISTER(0x800192A8,ZZ_191D4_D4);
	ZZ_JUMPREGISTER(0x80024768,ZZ_245B0_1B8);
	ZZ_JUMPREGISTER(0x80024B18,ZZ_248CC_24C);
	ZZ_JUMPREGISTER(0x80019414,ZZ_191D4_240);
	ZZ_JUMPREGISTER(0x8002F82C,ZZ_2F658_1D4);
	ZZ_JUMPREGISTER(0x80019434,ZZ_191D4_260);
	ZZ_JUMPREGISTER(0x800194CC,ZZ_191D4_2F8);
	ZZ_JUMPREGISTER(0x80019474,ZZ_191D4_2A0);
	ZZ_JUMPREGISTER(0x8002F880,ZZ_2F658_228);
	ZZ_JUMPREGISTER(0x80019494,ZZ_191D4_2C0);
	ZZ_JUMPREGISTER(0x80019514,ZZ_191D4_340);
	ZZ_JUMPREGISTER(0x80019538,ZZ_191D4_364);
	ZZ_JUMPREGISTER(0x8001955C,ZZ_191D4_388);
	ZZ_JUMPREGISTER(0x800181C8,ZZ_17CE8_4E0);
	ZZ_JUMPREGISTER(0x8001964C,ZZ_191D4_478);
	ZZ_JUMPREGISTER(0x80018404,ZZ_183B8_4C);
	ZZ_JUMPREGISTER(0x800196DC,ZZ_191D4_508);
	ZZ_JUMPREGISTER(0x80019700,ZZ_191D4_52C);
	ZZ_JUMPREGISTER(0x80019760,ZZ_191D4_58C);
	ZZ_JUMPREGISTER(0x80019790,ZZ_191D4_5BC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800324E0,0x80032518,ZZ_324E0);
ZZ_MARK_TARGET(0x80032518,0x80032530,ZZ_324E0_38);
ZZ_MARK_TARGET(0x80032530,0x80032568,ZZ_324E0_50);
ZZ_MARK_TARGET(0x80032568,0x80032584,ZZ_324E0_88);
ZZ_MARK_TARGET(0x80032584,0x80032590,ZZ_324E0_A4);
ZZ_MARK_TARGET(0x80032590,0x8003259C,ZZ_324E0_B0);
ZZ_MARK_TARGET(0x8003259C,0x800325A8,ZZ_324E0_BC);
ZZ_MARK_TARGET(0x800325A8,0x800325B4,ZZ_324E0_C8);
ZZ_MARK_TARGET(0x800325B4,0x800325B8,ZZ_324E0_D4);
ZZ_MARK_TARGET(0x800325B8,0x800325CC,ZZ_324E0_D8);
