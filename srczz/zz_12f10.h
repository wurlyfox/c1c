#ifdef ZZ_INCLUDE_CODE
ZZ_12F10:
	SP -= 64;
	V0 = A0 << 1;
	V0 += A0;
	V0 <<= 2;
	V0 = V0 - A0;
	V0 <<= 2;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 12372); //+ 0xFFFFCFAC
	V1 = 0x80060000;
	V1 -= 15020;
	EMU_Write32(SP + 40,S2); //+ 0x28
	S2 = V0 + V1;
	EMU_Write32(SP + 56,RA); //+ 0x38
	EMU_Write32(SP + 52,S5); //+ 0x34
	EMU_Write32(SP + 48,S4); //+ 0x30
	EMU_Write32(SP + 44,S3); //+ 0x2C
	EMU_Write32(SP + 36,S1); //+ 0x24
	if (A0 != S2)
	{
		EMU_Write32(SP + 32,S0); //+ 0x20
		ZZ_CLOCKCYCLES(19,0x80012F64);
		goto ZZ_12F10_54;
	}
	EMU_Write32(SP + 32,S0); //+ 0x20
	AT = 0x80060000;
	EMU_Write32(AT - 12372,R0); //+ 0xFFFFCFAC
	ZZ_CLOCKCYCLES(21,0x80012F64);
ZZ_12F10_54:
	A0 = EMU_ReadU32(S2);
	V0 = 0x1E;
	EMU_Write16(S2 + 4,V0); //+ 0x4
	V1 = EMU_ReadU16(A0 + 2); //+ 0x2
	V0 = 0x1;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 2;
		ZZ_CLOCKCYCLES(7,0x80013094);
		goto ZZ_12F10_184;
	}
	V0 = (int32_t)V1 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x80012F98);
		goto ZZ_12F10_88;
	}
	if (!V1)
	{
		ZZ_CLOCKCYCLES(11,0x80012FB4);
		goto ZZ_12F10_A4;
	}
	ZZ_CLOCKCYCLES(13,0x800132E8);
	goto ZZ_12F10_3D8;
ZZ_12F10_88:
	V0 = (int32_t)V1 < 5;
	if (!V0)
	{
		V0 = (int32_t)V1 < 3;
		ZZ_CLOCKCYCLES(3,0x800132E8);
		goto ZZ_12F10_3D8;
	}
	V0 = (int32_t)V1 < 3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001317C);
		goto ZZ_12F10_26C;
	}
	ZZ_CLOCKCYCLES(7,0x800132E8);
	goto ZZ_12F10_3D8;
ZZ_12F10_A4:
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 4); //+ 0x4
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 15056); //+ 0xFFFFC530
	V0 >>= 13;
	V0 &= 0x3FC;
	V0 += V1;
	V1 = EMU_ReadU32(A0 + 8); //+ 0x8
	S3 = EMU_ReadU32(V0);
	if (!V1)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(12,0x800132E8);
		goto ZZ_12F10_3D8;
	}
	S0 = R0;
	S1 = S3 + 4;
	ZZ_CLOCKCYCLES(13,0x80012FE8);
ZZ_12F10_D8:
	V0 = EMU_ReadU32(S2);
	V1 = S0 << 2;
	V1 += V0;
	A1 = EMU_ReadU32(V1 + 16); //+ 0x10
	V0 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(A1 + 4); //+ 0x4
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(9,0x80013020);
		goto ZZ_12F10_110;
	}
	ZZ_CLOCKCYCLES(9,0x8001300C);
ZZ_12F10_FC:
	S1 += 8;
	V0 = EMU_ReadU32(S1);
	if (V0 != V1)
	{
		S3 += 8;
		ZZ_CLOCKCYCLES(5,0x8001300C);
		goto ZZ_12F10_FC;
	}
	S3 += 8;
	ZZ_CLOCKCYCLES(5,0x80013020);
ZZ_12F10_110:
	EMU_Write32(S3,A1);
	V0 = EMU_ReadU16(S2 + 10); //+ 0xA
	V0 += 1;
	EMU_Write16(S2 + 10,V0); //+ 0xA
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 = V1 << 3;
	V0 = V0 - V1;
	V0 <<= 2;
	AT = 0x80050000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 5356); //+ 0x14EC
	if (!V0)
	{
		S0 += 1;
		ZZ_CLOCKCYCLES(16,0x80013068);
		goto ZZ_12F10_158;
	}
	S0 += 1;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80013068; //ZZ_12F10_158
	A0 = A1;
	ZZ_CLOCKCYCLES_JR(18);
	ZZ_JUMPREGISTER(0x8001767C,ZZ_1767C);
	ZZ_JUMPREGISTER(0x80025628,ZZ_25628);
	ZZ_JUMPREGISTER(0x800256DC,ZZ_256DC);
	ZZ_JUMPREGISTER_END();
ZZ_12F10_158:
	V0 = EMU_ReadU16(S2 + 10); //+ 0xA
	V1 = EMU_ReadU32(S2);
	V0 -= 1;
	EMU_Write16(S2 + 10,V0); //+ 0xA
	V0 = EMU_ReadU32(V1 + 8); //+ 0x8
	V0 = S0 < V0;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x800132E8);
		goto ZZ_12F10_3D8;
	}
	ZZ_CLOCKCYCLES(11,0x80012FE8);
	goto ZZ_12F10_D8;
ZZ_12F10_184:
	RA = 0x8001309C; //ZZ_12F10_18C
	ZZ_CLOCKCYCLES(2,0x8001439C);
	goto ZZ_1439C;
ZZ_12F10_18C:
	S0 = V0;
	V0 = -12;
	if (S0 != V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(4,0x800130C0);
		goto ZZ_12F10_1B0;
	}
	A0 = S0;
	V0 = EMU_ReadS16(S2 + 10); //+ 0xA
	if (!V0)
	{
		S0 = 0xF;
		ZZ_CLOCKCYCLES(8,0x80013150);
		goto ZZ_12F10_240;
	}
	S0 = 0xF;
	A0 = S0;
	ZZ_CLOCKCYCLES(9,0x800130C0);
ZZ_12F10_1B0:
	V0 = S0 << 1;
	V0 += S0;
	V0 <<= 2;
	V0 = V0 - S0;
	V0 <<= 2;
	V1 = 0x80060000;
	V1 -= 32608;
	if ((int32_t)S0 >= 0)
	{
		S1 = V0 + V1;
		ZZ_CLOCKCYCLES(9,0x800130E8);
		goto ZZ_12F10_1D8;
	}
	S1 = V0 + V1;
	A0 = S0 + 3;
	ZZ_CLOCKCYCLES(10,0x800130E8);
ZZ_12F10_1D8:
	V1 = (int32_t)A0 >> 2;
	V0 = V1 << 2;
	V0 = S0 - V0;
	V0 <<= 8;
	V1 <<= 7;
	EMU_Write16(GP + 36,V0); //+ 0x24
	EMU_Write16(GP + 38,V1); //+ 0x26
	A1 = EMU_ReadU32(S2);
	A0 = 0x80050000;
	A0 += 25632;
	RA = 0x80013118; //ZZ_12F10_208
	ZZ_CLOCKCYCLES(12,0x80040484);
	goto ZZ_40484;
ZZ_12F10_208:
	V0 = 0x14;
	EMU_Write16(S1 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(S2);
	V0 = EMU_ReadU32(V0 + 4); //+ 0x4
	EMU_Write32(S1 + 24,V0); //+ 0x18
	V0 = EMU_ReadU32(S2 + 20); //+ 0x14
	A0 = EMU_ReadU32(S1 + 24); //+ 0x18
	RA = 0x80013144; //ZZ_12F10_234
	EMU_Write32(S1 + 20,V0); //+ 0x14
	ZZ_CLOCKCYCLES(11,0x80015978);
	goto ZZ_15978;
ZZ_12F10_234:
	V1 = EMU_ReadU32(S1 + 28); //+ 0x1C
	EMU_Write32(S1 + 32,V0); //+ 0x20
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(3,0x80013150);
ZZ_12F10_240:
	V0 = S0 << 1;
	V1 = EMU_ReadU32(S2 + 20); //+ 0x14
	A0 = 0x1;
	EMU_Write16(S2 + 4,A0); //+ 0x4
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 12356); //+ 0xFFFFCFBC
	V1 = (int32_t)V1 >> 1;
	V1 <<= 2;
	V1 += A0;
	EMU_Write32(V1,S1);
	ZZ_CLOCKCYCLES(11,0x800132F4);
	goto ZZ_12F10_3E4;
ZZ_12F10_26C:
	A0 = EMU_ReadU32(S2);
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 4); //+ 0x4
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 15056); //+ 0xFFFFC530
	V0 >>= 13;
	V0 &= 0x3FC;
	V0 += V1;
	S3 = EMU_ReadU32(V0);
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	S4 = EMU_ReadU32(S2 + 36); //+ 0x24
	if (!V0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(15,0x800132B0);
		goto ZZ_12F10_3A0;
	}
	S0 = R0;
	S5 = 0x80050000;
	S5 += 29324;
	S1 = S3 + 4;
	V0 = S0 << 2;
	ZZ_CLOCKCYCLES(19,0x800131C8);
ZZ_12F10_2B8:
	V0 += A0;
	A1 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(S1);
	V1 = EMU_ReadU32(A1 + 4); //+ 0x4
	A2 = EMU_ReadU32(A1 + 16); //+ 0x10
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(7,0x800131F8);
		goto ZZ_12F10_2E8;
	}
	ZZ_CLOCKCYCLES(7,0x800131E4);
ZZ_12F10_2D4:
	S1 += 8;
	V0 = EMU_ReadU32(S1);
	if (V0 != V1)
	{
		S3 += 8;
		ZZ_CLOCKCYCLES(5,0x800131E4);
		goto ZZ_12F10_2D4;
	}
	S3 += 8;
	ZZ_CLOCKCYCLES(5,0x800131F8);
ZZ_12F10_2E8:
	if (S0)
	{
		A0 = 0x80000000;
		ZZ_CLOCKCYCLES(2,0x80013240);
		goto ZZ_12F10_330;
	}
	A0 = 0x80000000;
	V0 = EMU_ReadU32(S2);
	V1 = EMU_ReadU16(V0 + 2); //+ 0x2
	V0 = 0x4;
	if (V1 != V0)
	{
		V1 = 0x63960000;
		ZZ_CLOCKCYCLES(8,0x80013228);
		goto ZZ_12F10_318;
	}
	V1 = 0x63960000;
	V0 = EMU_ReadS16(S4 + 8); //+ 0x8
	V1 = EMU_ReadU32(S1);
	V0 <<= 2;
	ZZ_CLOCKCYCLES(12,0x80013234);
	goto ZZ_12F10_324;
ZZ_12F10_318:
	V0 = EMU_ReadS16(S4 + 8); //+ 0x8
	V1 |= 0x347F;
	V0 <<= 2;
	ZZ_CLOCKCYCLES(3,0x80013234);
ZZ_12F10_324:
	V0 += S5;
	EMU_Write32(V0,V1);
	A0 = 0x80000000;
	ZZ_CLOCKCYCLES(3,0x80013240);
ZZ_12F10_330:
	A0 |= 0x2;
	V0 = EMU_ReadU32(S2);
	V1 = EMU_ReadU32(S4 + 28); //+ 0x1C
	V0 = A2 - V0;
	V0 += V1;
	V0 <<= 2;
	V0 |= A0;
	EMU_Write32(S3,V0);
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V0 = V1 << 3;
	V0 = V0 - V1;
	V0 <<= 2;
	AT = 0x80050000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 5356); //+ 0x14EC
	if (!V0)
	{
		S0 += 1;
		ZZ_CLOCKCYCLES(19,0x80013294);
		goto ZZ_12F10_384;
	}
	S0 += 1;
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x80013294; //ZZ_12F10_384
	A0 = A1;
	ZZ_CLOCKCYCLES_JR(21);
	ZZ_JUMPREGISTER(0x8001767C,ZZ_1767C);
	ZZ_JUMPREGISTER(0x80025628,ZZ_25628);
	ZZ_JUMPREGISTER(0x800256DC,ZZ_256DC);
	ZZ_JUMPREGISTER_END();
ZZ_12F10_384:
	A0 = EMU_ReadU32(S2);
	V0 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 = S0 < V0;
	if (V0)
	{
		V0 = S0 << 2;
		ZZ_CLOCKCYCLES(7,0x800131C8);
		goto ZZ_12F10_2B8;
	}
	V0 = S0 << 2;
	ZZ_CLOCKCYCLES(7,0x800132B0);
ZZ_12F10_3A0:
	V0 = 0x14;
	EMU_Write16(S4 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(S2 + 20); //+ 0x14
	V1 = 0x1;
	EMU_Write16(S2 + 4,V1); //+ 0x4
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 12356); //+ 0xFFFFCFBC
	V0 = (int32_t)V0 >> 1;
	V0 <<= 2;
	V0 += V1;
	EMU_Write32(V0,S4);
	V0 = EMU_ReadU32(S4 + 28); //+ 0x1C
	ZZ_CLOCKCYCLES(14,0x800132F4);
	goto ZZ_12F10_3E4;
ZZ_12F10_3D8:
	V0 = EMU_ReadU32(S2);
	V1 = 0x14;
	EMU_Write16(S2 + 4,V1); //+ 0x4
	ZZ_CLOCKCYCLES(3,0x800132F4);
ZZ_12F10_3E4:
	RA = EMU_ReadU32(SP + 56); //+ 0x38
	S5 = EMU_ReadU32(SP + 52); //+ 0x34
	S4 = EMU_ReadU32(SP + 48); //+ 0x30
	S3 = EMU_ReadU32(SP + 44); //+ 0x2C
	S2 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 64;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x80014034,ZZ_13D48_2EC);
	ZZ_JUMPREGISTER(0x800141AC,ZZ_13D48_464);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80012F10,0x80012F64,ZZ_12F10);
ZZ_MARK_TARGET(0x80012F64,0x80012F98,ZZ_12F10_54);
ZZ_MARK_TARGET(0x80012F98,0x80012FB4,ZZ_12F10_88);
ZZ_MARK_TARGET(0x80012FB4,0x80012FE8,ZZ_12F10_A4);
ZZ_MARK_TARGET(0x80012FE8,0x8001300C,ZZ_12F10_D8);
ZZ_MARK_TARGET(0x8001300C,0x80013020,ZZ_12F10_FC);
ZZ_MARK_TARGET(0x80013020,0x80013068,ZZ_12F10_110);
ZZ_MARK_TARGET(0x80013068,0x80013094,ZZ_12F10_158);
ZZ_MARK_TARGET(0x80013094,0x8001309C,ZZ_12F10_184);
ZZ_MARK_TARGET(0x8001309C,0x800130C0,ZZ_12F10_18C);
ZZ_MARK_TARGET(0x800130C0,0x800130E8,ZZ_12F10_1B0);
ZZ_MARK_TARGET(0x800130E8,0x80013118,ZZ_12F10_1D8);
ZZ_MARK_TARGET(0x80013118,0x80013144,ZZ_12F10_208);
ZZ_MARK_TARGET(0x80013144,0x80013150,ZZ_12F10_234);
ZZ_MARK_TARGET(0x80013150,0x8001317C,ZZ_12F10_240);
ZZ_MARK_TARGET(0x8001317C,0x800131C8,ZZ_12F10_26C);
ZZ_MARK_TARGET(0x800131C8,0x800131E4,ZZ_12F10_2B8);
ZZ_MARK_TARGET(0x800131E4,0x800131F8,ZZ_12F10_2D4);
ZZ_MARK_TARGET(0x800131F8,0x80013228,ZZ_12F10_2E8);
ZZ_MARK_TARGET(0x80013228,0x80013234,ZZ_12F10_318);
ZZ_MARK_TARGET(0x80013234,0x80013240,ZZ_12F10_324);
ZZ_MARK_TARGET(0x80013240,0x80013294,ZZ_12F10_330);
ZZ_MARK_TARGET(0x80013294,0x800132B0,ZZ_12F10_384);
ZZ_MARK_TARGET(0x800132B0,0x800132E8,ZZ_12F10_3A0);
ZZ_MARK_TARGET(0x800132E8,0x800132F4,ZZ_12F10_3D8);
ZZ_MARK_TARGET(0x800132F4,0x8001331C,ZZ_12F10_3E4);
