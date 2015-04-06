#ifdef ZZ_INCLUDE_CODE
ZZ_56AB8:
	V0 = A0 << 16;
	V1 = 0x80070000;
	V1 -= 15268;
	V0 = (int32_t)V0 >> 14;
	T0 = V0 + V1;
	V1 = A1 << 16;
	V1 = (int32_t)V1 >> 16;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 = V0 - V1;
	A2 = V0 << 4;
	V1 = EMU_ReadU32(T0);
	T1 = A0;
	A3 = V1 + A2;
	V0 = EMU_ReadU32(A3 + 168); //+ 0xA8
	V0 -= 1;
	if ((int32_t)V0 >= 0)
	{
		EMU_Write32(A3 + 168,V0); //+ 0xA8
		ZZ_CLOCKCYCLES(20,0x80056B30);
		goto ZZ_56AB8_78;
	}
	EMU_Write32(A3 + 168,V0); //+ 0xA8
	V1 = EMU_ReadU32(T0);
	V1 += A2;
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	A0 = -65;
	V0 &= A0;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	V1 = EMU_ReadU32(T0);
	V1 += A2;
	ZZ_CLOCKCYCLES(30,0x80056CC0);
	goto ZZ_56AB8_208;
ZZ_56AB8_78:
	A0 = EMU_ReadS16(A3 + 78); //+ 0x4E
	if ((int32_t)A0 <= 0)
	{
		ZZ_CLOCKCYCLES(4,0x80056BA4);
		goto ZZ_56AB8_EC;
	}
	EMU_SDivide(V0,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(7,0x80056B50);
		goto ZZ_56AB8_98;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(8,0x80056B50);
ZZ_56AB8_98:
	AT = -1;
	if (A0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x80056B68);
		goto ZZ_56AB8_B0;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x80056B68);
		goto ZZ_56AB8_B0;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x80056B68);
ZZ_56AB8_B0:
	V0 = HI;
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x80056CD0);
		goto ZZ_56AB8_218;
	}
	V1 = EMU_ReadU32(A3 + 148); //+ 0x94
	A0 = EMU_ReadU32(A3 + 172); //+ 0xAC
	V0 = A0 < V1;
	if (V0)
	{
		V0 = V1 - 1;
		ZZ_CLOCKCYCLES(10,0x80056B9C);
		goto ZZ_56AB8_E4;
	}
	V0 = V1 - 1;
	V0 = V1 < A0;
	if (!V0)
	{
		V0 = V1 + 1;
		ZZ_CLOCKCYCLES(13,0x80056BEC);
		goto ZZ_56AB8_134;
	}
	V0 = V1 + 1;
	ZZ_CLOCKCYCLES(13,0x80056B9C);
ZZ_56AB8_E4:
	EMU_Write32(A3 + 148,V0); //+ 0x94
	ZZ_CLOCKCYCLES(2,0x80056BEC);
	goto ZZ_56AB8_134;
ZZ_56AB8_EC:
	V1 = EMU_ReadU32(A3 + 148); //+ 0x94
	T0 = EMU_ReadU32(A3 + 172); //+ 0xAC
	V0 = T0 < V1;
	if (!V0)
	{
		V0 = V1 + A0;
		ZZ_CLOCKCYCLES(6,0x80056BC8);
		goto ZZ_56AB8_110;
	}
	V0 = V1 + A0;
	EMU_Write32(A3 + 148,V0); //+ 0x94
	V0 = V0 < T0;
	ZZ_CLOCKCYCLES(9,0x80056BE0);
	goto ZZ_56AB8_128;
ZZ_56AB8_110:
	V0 = V1 < T0;
	if (!V0)
	{
		V0 = V1 - A0;
		ZZ_CLOCKCYCLES(3,0x80056BEC);
		goto ZZ_56AB8_134;
	}
	V0 = V1 - A0;
	T0 = EMU_ReadU32(A3 + 172); //+ 0xAC
	EMU_Write32(A3 + 148,V0); //+ 0x94
	V0 = T0 < V0;
	ZZ_CLOCKCYCLES(6,0x80056BE0);
ZZ_56AB8_128:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x80056BEC);
		goto ZZ_56AB8_134;
	}
	EMU_Write32(A3 + 148,T0); //+ 0x94
	ZZ_CLOCKCYCLES(3,0x80056BEC);
ZZ_56AB8_134:
	V0 = EMU_ReadS16(A3 + 80); //+ 0x50
	V1 = EMU_ReadU32(A3 + 148); //+ 0x94
	EMU_SMultiply(V0,V1);
	A0 = 0x80070000;
	A0 = EMU_ReadU32(A0 - 19372); //+ 0xFFFFB454
	V0 = LO;
	V1 = V0 << 2;
	V1 += V0;
	V1 <<= 1;
	V0 = A0 << 4;
	V0 = V0 - A0;
	V0 <<= 2;
	EMU_UDivide(V1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(16,0x80056C30);
		goto ZZ_56AB8_178;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(17,0x80056C30);
ZZ_56AB8_178:
	V1 = LO;
	EMU_Write16(A3 + 84,V1); //+ 0x54
	V1 <<= 16;
	if ((int32_t)V1 > 0)
	{
		V0 = 1;
		ZZ_CLOCKCYCLES(6,0x80056C4C);
		goto ZZ_56AB8_194;
	}
	V0 = 1;
	EMU_Write16(A3 + 84,V0); //+ 0x54
	ZZ_CLOCKCYCLES(7,0x80056C4C);
ZZ_56AB8_194:
	V0 = EMU_ReadU32(A3 + 168); //+ 0xA8
	if (!V0)
	{
		A2 = T1 << 16;
		ZZ_CLOCKCYCLES(4,0x80056C70);
		goto ZZ_56AB8_1B8;
	}
	A2 = T1 << 16;
	V1 = EMU_ReadU32(A3 + 148); //+ 0x94
	V0 = EMU_ReadU32(A3 + 172); //+ 0xAC
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(9,0x80056CD0);
		goto ZZ_56AB8_218;
	}
	ZZ_CLOCKCYCLES(9,0x80056C70);
ZZ_56AB8_1B8:
	V0 = 0x80070000;
	V0 -= 15268;
	A2 = (int32_t)A2 >> 14;
	A2 += V0;
	V0 = A1 << 16;
	V0 = (int32_t)V0 >> 16;
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	V1 = V1 - V0;
	A1 = EMU_ReadU32(A2);
	V1 <<= 4;
	A1 += V1;
	V0 = EMU_ReadU32(A1 + 152); //+ 0x98
	A0 = -65;
	V0 &= A0;
	EMU_Write32(A1 + 152,V0); //+ 0x98
	V0 = EMU_ReadU32(A2);
	V1 += V0;
	ZZ_CLOCKCYCLES(20,0x80056CC0);
ZZ_56AB8_208:
	V0 = EMU_ReadU32(V1 + 152); //+ 0x98
	A0 = -129;
	V0 &= A0;
	EMU_Write32(V1 + 152,V0); //+ 0x98
	ZZ_CLOCKCYCLES(4,0x80056CD0);
ZZ_56AB8_218:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x800552EC,ZZ_5519C_150);
	ZZ_JUMPREGISTER(0x80055314,ZZ_5519C_178);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80056AB8,0x80056B30,ZZ_56AB8);
ZZ_MARK_TARGET(0x80056B30,0x80056B50,ZZ_56AB8_78);
ZZ_MARK_TARGET(0x80056B50,0x80056B68,ZZ_56AB8_98);
ZZ_MARK_TARGET(0x80056B68,0x80056B9C,ZZ_56AB8_B0);
ZZ_MARK_TARGET(0x80056B9C,0x80056BA4,ZZ_56AB8_E4);
ZZ_MARK_TARGET(0x80056BA4,0x80056BC8,ZZ_56AB8_EC);
ZZ_MARK_TARGET(0x80056BC8,0x80056BE0,ZZ_56AB8_110);
ZZ_MARK_TARGET(0x80056BE0,0x80056BEC,ZZ_56AB8_128);
ZZ_MARK_TARGET(0x80056BEC,0x80056C30,ZZ_56AB8_134);
ZZ_MARK_TARGET(0x80056C30,0x80056C4C,ZZ_56AB8_178);
ZZ_MARK_TARGET(0x80056C4C,0x80056C70,ZZ_56AB8_194);
ZZ_MARK_TARGET(0x80056C70,0x80056CC0,ZZ_56AB8_1B8);
ZZ_MARK_TARGET(0x80056CC0,0x80056CD0,ZZ_56AB8_208);
ZZ_MARK_TARGET(0x80056CD0,0x80056CD8,ZZ_56AB8_218);
