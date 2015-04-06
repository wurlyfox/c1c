#ifdef ZZ_INCLUDE_CODE
ZZ_36D24:
	SP -= 8;
	A2 = 0x12340000;
	A2 |= 0x5678;
	if (!A1)
	{
		V1 = A1 - 1;
		ZZ_CLOCKCYCLES(5,0x80036D50);
		goto ZZ_36D24_2C;
	}
	V1 = A1 - 1;
	A1 = -1;
	ZZ_CLOCKCYCLES(6,0x80036D3C);
ZZ_36D24_18:
	V0 = EMU_ReadU32(A0);
	A0 += 4;
	V1 -= 1;
	if (V1 != A1)
	{
		A2 += V0;
		ZZ_CLOCKCYCLES(5,0x80036D3C);
		goto ZZ_36D24_18;
	}
	A2 += V0;
	ZZ_CLOCKCYCLES(5,0x80036D50);
ZZ_36D24_2C:
	V0 = A2;
	SP += 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80036C58,ZZ_36C10_48);
	ZZ_JUMPREGISTER(0x80036CD0,ZZ_36C8C_44);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036D24,0x80036D3C,ZZ_36D24);
ZZ_MARK_TARGET(0x80036D3C,0x80036D50,ZZ_36D24_18);
ZZ_MARK_TARGET(0x80036D50,0x80036D60,ZZ_36D24_2C);
