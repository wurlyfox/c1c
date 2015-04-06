#ifdef ZZ_INCLUDE_CODE
ZZ_18AF0:
	A2 = EMU_ReadU32(A0 + 68); //+ 0x44
	if (!A2)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(4,0x80018B80);
		goto ZZ_18AF0_90;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A2);
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x80018B1C);
		goto ZZ_18AF0_2C;
	}
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(11,0x80018B20);
	goto ZZ_18AF0_30;
ZZ_18AF0_2C:
	V1 = EMU_ReadU32(A2 + 76); //+ 0x4C
	ZZ_CLOCKCYCLES(1,0x80018B20);
ZZ_18AF0_30:
	if (V1 != A0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x80018B58);
		goto ZZ_18AF0_68;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A2);
	if (V1 != V0)
	{
		V1 = A2 + 76;
		ZZ_CLOCKCYCLES(7,0x80018B40);
		goto ZZ_18AF0_50;
	}
	V1 = A2 + 76;
	V1 = A2 + 4;
	ZZ_CLOCKCYCLES(8,0x80018B40);
ZZ_18AF0_50:
	V0 = EMU_ReadU32(A0 + 72); //+ 0x48
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(3,0x80018B80);
	goto ZZ_18AF0_90;
ZZ_18AF0_5C:
	if (!V1)
	{
		V0 = -24;
		ZZ_CLOCKCYCLES(2,0x80018BC4);
		goto ZZ_18AF0_D4;
	}
	V0 = -24;
	V1 = EMU_ReadU32(V1 + 72); //+ 0x48
	ZZ_CLOCKCYCLES(3,0x80018B58);
ZZ_18AF0_68:
	if (!V1)
	{
		V0 = -24;
		ZZ_CLOCKCYCLES(3,0x80018BC4);
		goto ZZ_18AF0_D4;
	}
	V0 = -24;
	V0 = EMU_ReadU32(V1 + 72); //+ 0x48
	if (V0 != A0)
	{
		ZZ_CLOCKCYCLES(7,0x80018B4C);
		goto ZZ_18AF0_5C;
	}
	V0 = EMU_ReadU32(A0 + 72); //+ 0x48
	EMU_Write32(V1 + 72,V0); //+ 0x48
	ZZ_CLOCKCYCLES(10,0x80018B80);
ZZ_18AF0_90:
	EMU_Write32(A0 + 68,A1); //+ 0x44
	V1 = EMU_ReadU32(A1);
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x80018BA0);
		goto ZZ_18AF0_B0;
	}
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	EMU_Write32(A0 + 72,V0); //+ 0x48
	ZZ_CLOCKCYCLES(8,0x80018BAC);
	goto ZZ_18AF0_BC;
ZZ_18AF0_B0:
	V0 = EMU_ReadU32(A1 + 76); //+ 0x4C
	EMU_Write32(A0 + 72,V0); //+ 0x48
	ZZ_CLOCKCYCLES(3,0x80018BAC);
ZZ_18AF0_BC:
	V1 = EMU_ReadU32(A1);
	V0 = 0x2;
	if (V1 != V0)
	{
		V1 = A1 + 76;
		ZZ_CLOCKCYCLES(4,0x80018BC0);
		goto ZZ_18AF0_D0;
	}
	V1 = A1 + 76;
	V1 = A1 + 4;
	ZZ_CLOCKCYCLES(5,0x80018BC0);
ZZ_18AF0_D0:
	EMU_Write32(V1,A0);
	ZZ_CLOCKCYCLES(1,0x80018BC4);
ZZ_18AF0_D4:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80019A34,ZZ_19928_10C);
	ZZ_JUMPREGISTER(0x80019E48,ZZ_19CF4_154);
	ZZ_JUMPREGISTER(0x80019DE4,ZZ_19CF4_F0);
	ZZ_JUMPREGISTER(0x80037FA4,ZZ_37930_674);
	ZZ_JUMPREGISTER(0x80019620,ZZ_191D4_44C);
	ZZ_JUMPREGISTER(0x8001973C,ZZ_191D4_568);
	ZZ_JUMPREGISTER(0x80019868,ZZ_191D4_694);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80018AF0,0x80018B1C,ZZ_18AF0);
ZZ_MARK_TARGET(0x80018B1C,0x80018B20,ZZ_18AF0_2C);
ZZ_MARK_TARGET(0x80018B20,0x80018B40,ZZ_18AF0_30);
ZZ_MARK_TARGET(0x80018B40,0x80018B4C,ZZ_18AF0_50);
ZZ_MARK_TARGET(0x80018B4C,0x80018B58,ZZ_18AF0_5C);
ZZ_MARK_TARGET(0x80018B58,0x80018B80,ZZ_18AF0_68);
ZZ_MARK_TARGET(0x80018B80,0x80018BA0,ZZ_18AF0_90);
ZZ_MARK_TARGET(0x80018BA0,0x80018BAC,ZZ_18AF0_B0);
ZZ_MARK_TARGET(0x80018BAC,0x80018BC0,ZZ_18AF0_BC);
ZZ_MARK_TARGET(0x80018BC0,0x80018BC4,ZZ_18AF0_D0);
ZZ_MARK_TARGET(0x80018BC4,0x80018BCC,ZZ_18AF0_D4);
