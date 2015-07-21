#ifdef ZZ_INCLUDE_CODE
ZZ_1FC4C:
	V0 = A1 & 0x800;
	if (!V0)
	{
		SP -= 16;
		ZZ_CLOCKCYCLES(3,0x8001FD8C);
		goto ZZ_1FC4C_140;
	}
	SP -= 16;
	V0 = A1 & 0x400;
	if (!V0)
	{
		V0 = A1 & 0x200;
		ZZ_CLOCKCYCLES(6,0x8001FCF0);
		goto ZZ_1FC4C_A4;
	}
	V0 = A1 & 0x200;
	if (!V0)
	{
		V1 = A1 & 0x1FF;
		ZZ_CLOCKCYCLES(8,0x8001FCC4);
		goto ZZ_1FC4C_78;
	}
	V1 = A1 & 0x1FF;
	V0 = 0x1F;
	if (V1 != V0)
	{
		A1 = V1;
		ZZ_CLOCKCYCLES(11,0x8001FCB0);
		goto ZZ_1FC4C_64;
	}
	A1 = V1;
	if (A2)
	{
		ZZ_CLOCKCYCLES(13,0x8001FC98);
		goto ZZ_1FC4C_4C;
	}
	V0 = EMU_ReadU32(A0 + 220); //+ 0xDC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(A0 + 220,V1); //+ 0xDC
	ZZ_CLOCKCYCLES(19,0x8001FCBC);
	goto ZZ_1FC4C_70;
ZZ_1FC4C_4C:
	V0 = EMU_ReadU32(A0 + 220); //+ 0xDC
	V1 = V0;
	V0 = V1 + 4;
	EMU_Write32(A0 + 220,V0); //+ 0xDC
	ZZ_CLOCKCYCLES(6,0x8001FCBC);
	goto ZZ_1FC4C_70;
ZZ_1FC4C_64:
	V0 = A1 << 2;
	V0 += 96;
	V1 = A0 + V0;
	ZZ_CLOCKCYCLES(3,0x8001FCBC);
ZZ_1FC4C_70:
	V0 = V1;
	ZZ_CLOCKCYCLES(2,0x8001FDB8);
	goto ZZ_1FC4C_16C;
ZZ_1FC4C_78:
	V0 = A1 >> 4;
	V0 &= 0x1C;
	V0 += A0;
	V1 = EMU_ReadU32(V0 + 96); //+ 0x60
	if (!V1)
	{
		V0 = A1 & 0x3F;
		ZZ_CLOCKCYCLES(7,0x8001FD14);
		goto ZZ_1FC4C_C8;
	}
	V0 = A1 & 0x3F;
	V0 <<= 2;
	V0 += 96;
	V0 += V1;
	ZZ_CLOCKCYCLES(11,0x8001FDB8);
	goto ZZ_1FC4C_16C;
ZZ_1FC4C_A4:
	if (!V0)
	{
		V0 = A1 & 0x100;
		ZZ_CLOCKCYCLES(2,0x8001FD64);
		goto ZZ_1FC4C_118;
	}
	V0 = A1 & 0x100;
	if (!V0)
	{
		V0 = A1 & 0x80;
		ZZ_CLOCKCYCLES(4,0x8001FD3C);
		goto ZZ_1FC4C_F0;
	}
	V0 = A1 & 0x80;
	if (!V0)
	{
		V0 = A1 << 25;
		ZZ_CLOCKCYCLES(6,0x8001FD2C);
		goto ZZ_1FC4C_E0;
	}
	V0 = A1 << 25;
	V0 = 0xBE0;
	if (A1 != V0)
	{
		V0 = 0xBF0;
		ZZ_CLOCKCYCLES(9,0x8001FD1C);
		goto ZZ_1FC4C_D0;
	}
	V0 = 0xBF0;
	ZZ_CLOCKCYCLES(9,0x8001FD14);
ZZ_1FC4C_C8:
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x8001FDB8);
	goto ZZ_1FC4C_16C;
ZZ_1FC4C_D0:
	if (A1 != V0)
	{
		ZZ_CLOCKCYCLES(2,0x8001FDB8);
		goto ZZ_1FC4C_16C;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(4,0x8001FDB8);
	goto ZZ_1FC4C_16C;
ZZ_1FC4C_E0:
	V1 = EMU_ReadU32(A0 + 228); //+ 0xE4
	V0 = (int32_t)V0 >> 23;
	V0 += V1;
	ZZ_CLOCKCYCLES(4,0x8001FDB8);
	goto ZZ_1FC4C_16C;
ZZ_1FC4C_F0:
	V1 = EMU_ReadU32(GP + 144); //+ 0x90
	A0 = EMU_ReadU32(GP + 140); //+ 0x8C
	V1 = V1 < 1;
	V0 = V1 << 2;
	V0 += A0;
	EMU_Write32(GP + 144,V1); //+ 0x90
	V1 = A1 << 24;
	V1 = (int32_t)V1 >> 20;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(10,0x8001FDB8);
	goto ZZ_1FC4C_16C;
ZZ_1FC4C_118:
	V1 = EMU_ReadU32(GP + 144); //+ 0x90
	A0 = EMU_ReadU32(GP + 140); //+ 0x8C
	V1 = V1 < 1;
	V0 = V1 << 2;
	V0 += A0;
	EMU_Write32(GP + 144,V1); //+ 0x90
	V1 = A1 << 23;
	V1 = (int32_t)V1 >> 15;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(10,0x8001FDB8);
	goto ZZ_1FC4C_16C;
ZZ_1FC4C_140:
	V0 = A1 & 0x400;
	if (!V0)
	{
		V1 = A1 & 0x3FF;
		ZZ_CLOCKCYCLES(3,0x8001FDA4);
		goto ZZ_1FC4C_158;
	}
	V1 = A1 & 0x3FF;
	V0 = EMU_ReadU32(A0 + 36); //+ 0x24
	ZZ_CLOCKCYCLES(6,0x8001FDA8);
	goto ZZ_1FC4C_15C;
ZZ_1FC4C_158:
	V0 = EMU_ReadU32(A0 + 32); //+ 0x20
	ZZ_CLOCKCYCLES(1,0x8001FDA8);
ZZ_1FC4C_15C:
	V0 = EMU_ReadU32(V0 + 24); //+ 0x18
	V1 <<= 2;
	V0 += V1;
	ZZ_CLOCKCYCLES(4,0x8001FDB8);
ZZ_1FC4C_16C:
	SP += 16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
  //ZZ_JUMPREGISTER(0x80023248,ZZ_201DC_306C);
	//ZZ_JUMPREGISTER(0x8002325C,ZZ_201DC_3080);
	//ZZ_JUMPREGISTER(0x80023818,ZZ_201DC_363C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001FC4C,0x8001FC98,ZZ_1FC4C);
ZZ_MARK_TARGET(0x8001FC98,0x8001FCB0,ZZ_1FC4C_4C);
ZZ_MARK_TARGET(0x8001FCB0,0x8001FCBC,ZZ_1FC4C_64);
ZZ_MARK_TARGET(0x8001FCBC,0x8001FCC4,ZZ_1FC4C_70);
ZZ_MARK_TARGET(0x8001FCC4,0x8001FCF0,ZZ_1FC4C_78);
ZZ_MARK_TARGET(0x8001FCF0,0x8001FD14,ZZ_1FC4C_A4);
ZZ_MARK_TARGET(0x8001FD14,0x8001FD1C,ZZ_1FC4C_C8);
ZZ_MARK_TARGET(0x8001FD1C,0x8001FD2C,ZZ_1FC4C_D0);
ZZ_MARK_TARGET(0x8001FD2C,0x8001FD3C,ZZ_1FC4C_E0);
ZZ_MARK_TARGET(0x8001FD3C,0x8001FD64,ZZ_1FC4C_F0);
ZZ_MARK_TARGET(0x8001FD64,0x8001FD8C,ZZ_1FC4C_118);
ZZ_MARK_TARGET(0x8001FD8C,0x8001FDA4,ZZ_1FC4C_140);
ZZ_MARK_TARGET(0x8001FDA4,0x8001FDA8,ZZ_1FC4C_158);
ZZ_MARK_TARGET(0x8001FDA8,0x8001FDB8,ZZ_1FC4C_15C);
ZZ_MARK_TARGET(0x8001FDB8,0x8001FDC4,ZZ_1FC4C_16C);