#ifdef ZZ_INCLUDE_CODE
ZZ_42C68:
	T8 += S3;
	T8 = (int32_t)T8 >> 4;
	T9 = T8 & 0x20;
	if (!T9)
	{
		T8 += S4;
		ZZ_CLOCKCYCLES(5,0x80042C80);
		goto ZZ_42C68_18;
	}
	T8 += S4;
	T8 = EMU_CheckedSubtract(R0,T8);
	ZZ_CLOCKCYCLES(6,0x80042C80);
ZZ_42C68_18:
	T3 = 0x80060000;
	T3 -= 16568;
	T9 = T8 << 27;
	if ((int32_t)T9 < 0)
	{
		T9 >>= 20;
		ZZ_CLOCKCYCLES(5,0x80042CF4);
		goto ZZ_42C68_8C;
	}
	T9 >>= 20;
	T8 <<= 26;
	if ((int32_t)T8 < 0)
	{
		T8 = T3 - T9;
		ZZ_CLOCKCYCLES(8,0x80042CC8);
		goto ZZ_42C68_60;
	}
	T8 = T3 - T9;
	T8 = EMU_ReadS16(T8 + 2048); //+ 0x800
	T9 += T3;
	T9 = EMU_ReadS16(T9);
	T8 <<= 16;
	T8 = (int32_t)T8 >> S6;
	GP += T8;
	T9 <<= 16;
	T9 = (int32_t)T9 >> S6;
	ZZ_JUMPREGISTER_BEGIN(RA);
	S3 += T9;
	ZZ_CLOCKCYCLES_JR(18);
	ZZ_JUMPREGISTER(0x80042D80,ZZ_42C68_118);
	ZZ_JUMPREGISTER(0x80042E44,ZZ_42C68_1DC);
	ZZ_JUMPREGISTER(0x80042DA4,ZZ_42C68_13C);
	ZZ_JUMPREGISTER(0x80042E68,ZZ_42C68_200);
	ZZ_JUMPREGISTER(0x80042DC4,ZZ_42C68_15C);
	ZZ_JUMPREGISTER(0x80042E8C,ZZ_42C68_224);
	ZZ_JUMPREGISTER(0x80042EAC,ZZ_42C68_244);
	ZZ_JUMPREGISTER_END();
ZZ_42C68_60:
	T8 = T3 - T9;
	T8 = EMU_ReadS16(T8 + 2048); //+ 0x800
	T9 += T3;
	T9 = EMU_ReadS16(T9);
	T8 <<= 16;
	T8 = (int32_t)T8 >> S6;
	GP = GP - T8;
	T9 <<= 16;
	T9 = (int32_t)T9 >> S6;
	ZZ_JUMPREGISTER_BEGIN(RA);
	S3 = S3 - T9;
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80042D80,ZZ_42C68_118);
	ZZ_JUMPREGISTER(0x80042E44,ZZ_42C68_1DC);
	ZZ_JUMPREGISTER(0x80042DA4,ZZ_42C68_13C);
	ZZ_JUMPREGISTER(0x80042E68,ZZ_42C68_200);
	ZZ_JUMPREGISTER(0x80042DC4,ZZ_42C68_15C);
	ZZ_JUMPREGISTER(0x80042E8C,ZZ_42C68_224);
	ZZ_JUMPREGISTER(0x80042EAC,ZZ_42C68_244);
	ZZ_JUMPREGISTER_END();
ZZ_42C68_8C:
	T8 <<= 26;
	if ((int32_t)T8 < 0)
	{
		T8 = T3 - T9;
		ZZ_CLOCKCYCLES(3,0x80042D28);
		goto ZZ_42C68_C0;
	}
	T8 = T3 - T9;
	T3 += T9;
	T9 = EMU_ReadS16(T8 + 4096); //+ 0x1000
	T8 = EMU_ReadS16(T3 - 2048); //+ 0xFFFFF800
	T9 <<= 16;
	T9 = (int32_t)T9 >> S6;
	S3 += T9;
	T8 <<= 16;
	T8 = (int32_t)T8 >> S6;
	ZZ_JUMPREGISTER_BEGIN(RA);
	GP = GP - T8;
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80042D80,ZZ_42C68_118);
	ZZ_JUMPREGISTER(0x80042E44,ZZ_42C68_1DC);
	ZZ_JUMPREGISTER(0x80042DA4,ZZ_42C68_13C);
	ZZ_JUMPREGISTER(0x80042E68,ZZ_42C68_200);
	ZZ_JUMPREGISTER(0x80042DC4,ZZ_42C68_15C);
	ZZ_JUMPREGISTER(0x80042E8C,ZZ_42C68_224);
	ZZ_JUMPREGISTER(0x80042EAC,ZZ_42C68_244);
	ZZ_JUMPREGISTER_END();
ZZ_42C68_C0:
	T3 += T9;
	T9 = EMU_ReadS16(T8 + 4096); //+ 0x1000
	T8 = EMU_ReadS16(T3 - 2048); //+ 0xFFFFF800
	T9 <<= 16;
	T9 = (int32_t)T9 >> S6;
	S3 = S3 - T9;
	T8 <<= 16;
	T8 = (int32_t)T8 >> S6;
	ZZ_JUMPREGISTER_BEGIN(RA);
	GP += T8;
	ZZ_CLOCKCYCLES_JR(10);
	ZZ_JUMPREGISTER(0x80042D80,ZZ_42C68_118);
	ZZ_JUMPREGISTER(0x80042E44,ZZ_42C68_1DC);
	ZZ_JUMPREGISTER(0x80042DA4,ZZ_42C68_13C);
	ZZ_JUMPREGISTER(0x80042E68,ZZ_42C68_200);
	ZZ_JUMPREGISTER(0x80042DC4,ZZ_42C68_15C);
	ZZ_JUMPREGISTER(0x80042E8C,ZZ_42C68_224);
	ZZ_JUMPREGISTER(0x80042EAC,ZZ_42C68_244);
	ZZ_JUMPREGISTER_END();
ZZ_42C68_E8:
	S4 = EMU_ReadU32(V1 + 28); //+ 0x1C
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	S6 = EMU_ReadU32(V1 + 96); //+ 0x60
	T2 = EMU_ReadU32(V1 + 204); //+ 0xCC
	S4 = (int32_t)S4 >> T8;
	T8 = AT << 13;
	if ((int32_t)T8 >= 0)
	{
		EMU_Write32(V1 + 120,T3); //+ 0x78
		ZZ_CLOCKCYCLES(8,0x80042D88);
		goto ZZ_42C68_120;
	}
	EMU_Write32(V1 + 120,T3); //+ 0x78
	S3 = GTE_GetRegister(GTE_DREG_VXY0);
	GP = GTE_GetRegister(GTE_DREG_VZ0);
	RA = 0x80042D80; //ZZ_42C68_118
	T8 = GP + T2;
	ZZ_CLOCKCYCLES(12,0x80042C68);
	goto ZZ_42C68;
ZZ_42C68_118:
	GTE_SetRegister(GTE_DREG_VXY0,S3);
	GTE_SetRegister(GTE_DREG_VZ0,GP);
	ZZ_CLOCKCYCLES(2,0x80042D88);
ZZ_42C68_120:
	T8 = A3 << 13;
	if ((int32_t)T8 >= 0)
	{
		ZZ_CLOCKCYCLES(3,0x80042DAC);
		goto ZZ_42C68_144;
	}
	S3 = GTE_GetRegister(GTE_DREG_VXY1);
	GP = GTE_GetRegister(GTE_DREG_VZ1);
	RA = 0x80042DA4; //ZZ_42C68_13C
	T8 = GP + T2;
	ZZ_CLOCKCYCLES(7,0x80042C68);
	goto ZZ_42C68;
ZZ_42C68_13C:
	GTE_SetRegister(GTE_DREG_VXY1,S3);
	GTE_SetRegister(GTE_DREG_VZ1,GP);
	ZZ_CLOCKCYCLES(2,0x80042DAC);
ZZ_42C68_144:
	T8 = T0 << 13;
	if ((int32_t)T8 >= 0)
	{
		S3 = V0;
		ZZ_CLOCKCYCLES(3,0x80042DCC);
		goto ZZ_42C68_164;
	}
	S3 = V0;
	GP = A2;
	RA = 0x80042DC4; //ZZ_42C68_15C
	T8 = GP + T2;
	ZZ_CLOCKCYCLES(6,0x80042C68);
	goto ZZ_42C68;
ZZ_42C68_15C:
	GTE_SetRegister(GTE_DREG_VXY2,S3);
	GTE_SetRegister(GTE_DREG_VZ2,GP);
	ZZ_CLOCKCYCLES(2,0x80042DCC);
ZZ_42C68_164:
	T3 = EMU_ReadU32(V1 + 120); //+ 0x78
	S6 = EMU_ReadU32(V1 + 472); //+ 0x1D8
	T2 = EMU_ReadU32(V1 + 476); //+ 0x1DC
	ZZ_CLOCKCYCLES(4,0x800426B8);
	goto ZZ_420F4_5C4;
ZZ_42C68_174:
	T8 = EMU_ReadU32(V1 + 424); //+ 0x1A8
	if (!T8)
	{
		AT <<= 12;
		ZZ_CLOCKCYCLES(4,0x800427E0);
		goto ZZ_420F4_6EC;
	}
	AT <<= 12;
	if ((int32_t)AT >= 0)
	{
		A3 <<= 12;
		ZZ_CLOCKCYCLES(6,0x80042DF8);
		goto ZZ_42C68_190;
	}
	A3 <<= 12;
	T5 = T8;
	ZZ_CLOCKCYCLES(7,0x80042DF8);
ZZ_42C68_190:
	if ((int32_t)A3 >= 0)
	{
		T0 <<= 12;
		ZZ_CLOCKCYCLES(2,0x80042E04);
		goto ZZ_42C68_19C;
	}
	T0 <<= 12;
	T6 = T8;
	ZZ_CLOCKCYCLES(3,0x80042E04);
ZZ_42C68_19C:
	if ((int32_t)T0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x800427E0);
		goto ZZ_420F4_6EC;
	}
	T7 = T8;
	ZZ_CLOCKCYCLES(4,0x800427E0);
	goto ZZ_420F4_6EC;
ZZ_42C68_1AC:
	S4 = EMU_ReadU32(V1 + 28); //+ 0x1C
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	S6 = EMU_ReadU32(V1 + 96); //+ 0x60
	T2 = EMU_ReadU32(V1 + 204); //+ 0xCC
	S4 = (int32_t)S4 >> T8;
	T8 = AT << 13;
	if ((int32_t)T8 >= 0)
	{
		EMU_Write32(V1 + 120,T3); //+ 0x78
		ZZ_CLOCKCYCLES(8,0x80042E4C);
		goto ZZ_42C68_1E4;
	}
	EMU_Write32(V1 + 120,T3); //+ 0x78
	S3 = GTE_GetRegister(GTE_DREG_VXY0);
	GP = GTE_GetRegister(GTE_DREG_VZ0);
	RA = 0x80042E44; //ZZ_42C68_1DC
	T8 = GP + T2;
	ZZ_CLOCKCYCLES(12,0x80042C68);
	goto ZZ_42C68;
ZZ_42C68_1DC:
	GTE_SetRegister(GTE_DREG_VXY0,S3);
	GTE_SetRegister(GTE_DREG_VZ0,GP);
	ZZ_CLOCKCYCLES(2,0x80042E4C);
ZZ_42C68_1E4:
	T8 = A3 << 13;
	if ((int32_t)T8 >= 0)
	{
		ZZ_CLOCKCYCLES(3,0x80042E70);
		goto ZZ_42C68_208;
	}
	S3 = GTE_GetRegister(GTE_DREG_VXY1);
	GP = GTE_GetRegister(GTE_DREG_VZ1);
	RA = 0x80042E68; //ZZ_42C68_200
	T8 = GP + T2;
	ZZ_CLOCKCYCLES(7,0x80042C68);
	goto ZZ_42C68;
ZZ_42C68_200:
	GTE_SetRegister(GTE_DREG_VXY1,S3);
	GTE_SetRegister(GTE_DREG_VZ1,GP);
	ZZ_CLOCKCYCLES(2,0x80042E70);
ZZ_42C68_208:
	T8 = T0 << 13;
	if ((int32_t)T8 >= 0)
	{
		ZZ_CLOCKCYCLES(3,0x80042E94);
		goto ZZ_42C68_22C;
	}
	S3 = GTE_GetRegister(GTE_DREG_VXY2);
	GP = GTE_GetRegister(GTE_DREG_VZ2);
	RA = 0x80042E8C; //ZZ_42C68_224
	T8 = GP + T2;
	ZZ_CLOCKCYCLES(7,0x80042C68);
	goto ZZ_42C68;
ZZ_42C68_224:
	GTE_SetRegister(GTE_DREG_VXY2,S3);
	GTE_SetRegister(GTE_DREG_VZ2,GP);
	ZZ_CLOCKCYCLES(2,0x80042E94);
ZZ_42C68_22C:
	T8 = A0 << 13;
	if ((int32_t)T8 >= 0)
	{
		S3 = V0;
		ZZ_CLOCKCYCLES(3,0x80042EB4);
		goto ZZ_42C68_24C;
	}
	S3 = V0;
	GP = A2;
	RA = 0x80042EAC; //ZZ_42C68_244
	T8 = GP + T2;
	ZZ_CLOCKCYCLES(6,0x80042C68);
	goto ZZ_42C68;
ZZ_42C68_244:
	V0 = S3;
	A2 = GP;
	ZZ_CLOCKCYCLES(2,0x80042EB4);
ZZ_42C68_24C:
	T3 = EMU_ReadU32(V1 + 120); //+ 0x78
	S6 = EMU_ReadU32(V1 + 472); //+ 0x1D8
	T2 = EMU_ReadU32(V1 + 476); //+ 0x1DC
	ZZ_CLOCKCYCLES(4,0x80042938);
	goto ZZ_420F4_844;
ZZ_42C68_25C:
	T8 = EMU_ReadU32(V1 + 424); //+ 0x1A8
	if (!T8)
	{
		AT <<= 12;
		ZZ_CLOCKCYCLES(4,0x80042AB0);
		goto ZZ_420F4_9BC;
	}
	AT <<= 12;
	if ((int32_t)AT >= 0)
	{
		A3 <<= 12;
		ZZ_CLOCKCYCLES(6,0x80042EE0);
		goto ZZ_42C68_278;
	}
	A3 <<= 12;
	T5 = T8;
	ZZ_CLOCKCYCLES(7,0x80042EE0);
ZZ_42C68_278:
	if ((int32_t)A3 >= 0)
	{
		T0 <<= 12;
		ZZ_CLOCKCYCLES(2,0x80042EEC);
		goto ZZ_42C68_284;
	}
	T0 <<= 12;
	T6 = T8;
	ZZ_CLOCKCYCLES(3,0x80042EEC);
ZZ_42C68_284:
	if ((int32_t)T0 >= 0)
	{
		A0 <<= 12;
		ZZ_CLOCKCYCLES(2,0x80042EF8);
		goto ZZ_42C68_290;
	}
	A0 <<= 12;
	T7 = T8;
	ZZ_CLOCKCYCLES(3,0x80042EF8);
ZZ_42C68_290:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80042AB0);
		goto ZZ_420F4_9BC;
	}
	A1 = T8;
	ZZ_CLOCKCYCLES(4,0x80042AB0);
	goto ZZ_420F4_9BC;
ZZ_42C68_2A0:
	T8 = EMU_ReadU32(A2 + 56); //+ 0x38
	T9 = EMU_ReadU32(A2 + 60); //+ 0x3C
	A1 = T8 >> 16;
	A0 = T8 >> 8;
	A1 &= 0xFF0;
	A0 &= 0xFF0;
	T8 &= 0xFF0;
	EMU_Write32(V1 + 496,A1); //+ 0x1F0
	EMU_Write32(V1 + 500,A0); //+ 0x1F4
	EMU_Write32(V1 + 504,T8); //+ 0x1F8
	EMU_Write32(V1 + 144,T9); //+ 0x90
	T9 <<= 4;
	A0 = T9 >> 8;
	A1 = T9 >> 16;
	T9 &= 0xFF0;
	A0 &= 0xFF0;
	A1 &= 0xFF0;
	EMU_Write32(V1 + 520,T9); //+ 0x208
	EMU_Write32(V1 + 524,A0); //+ 0x20C
	EMU_Write32(V1 + 528,A1); //+ 0x210
	T8 = EMU_ReadU32(A2 + 168); //+ 0xA8
	A0 = EMU_ReadU32(A2 + 172); //+ 0xAC
	A1 = T8 >> 16;
	EMU_Write32(V1 + 532,A0); //+ 0x214
	A0 = T8 >> 8;
	A1 &= 0xFF0;
	A0 &= 0xFF0;
	T8 &= 0xFF0;
	EMU_Write32(V1 + 508,A1); //+ 0x1FC
	EMU_Write32(V1 + 512,A0); //+ 0x200
	EMU_Write32(V1 + 516,T8); //+ 0x204
	T8 = EMU_ReadU32(A2 + 64); //+ 0x40
	T9 = EMU_ReadU32(A2 + 68); //+ 0x44
	A0 = EMU_ReadU32(A2 + 72); //+ 0x48
	A1 = EMU_ReadU32(A2 + 76); //+ 0x4C
	EMU_Write32(V1 + 124,T8); //+ 0x7C
	EMU_Write32(V1 + 128,T9); //+ 0x80
	EMU_Write32(V1 + 136,A0); //+ 0x88
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(V1 + 140,A1); //+ 0x8C
	ZZ_CLOCKCYCLES_JR(40);
	ZZ_JUMPREGISTER(0x80042D80,ZZ_42C68_118);
	ZZ_JUMPREGISTER(0x80042E44,ZZ_42C68_1DC);
	ZZ_JUMPREGISTER(0x80042DA4,ZZ_42C68_13C);
	ZZ_JUMPREGISTER(0x80042E68,ZZ_42C68_200);
	ZZ_JUMPREGISTER(0x80042DC4,ZZ_42C68_15C);
	ZZ_JUMPREGISTER(0x80042E8C,ZZ_42C68_224);
	ZZ_JUMPREGISTER(0x80042EAC,ZZ_42C68_244);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80042C68,0x80042C80,ZZ_42C68);
ZZ_MARK_TARGET(0x80042C80,0x80042CC8,ZZ_42C68_18);
ZZ_MARK_TARGET(0x80042CC8,0x80042CF4,ZZ_42C68_60);
ZZ_MARK_TARGET(0x80042CF4,0x80042D28,ZZ_42C68_8C);
ZZ_MARK_TARGET(0x80042D28,0x80042D50,ZZ_42C68_C0);
ZZ_MARK_TARGET(0x80042D50,0x80042D80,ZZ_42C68_E8);
ZZ_MARK_TARGET(0x80042D80,0x80042D88,ZZ_42C68_118);
ZZ_MARK_TARGET(0x80042D88,0x80042DA4,ZZ_42C68_120);
ZZ_MARK_TARGET(0x80042DA4,0x80042DAC,ZZ_42C68_13C);
ZZ_MARK_TARGET(0x80042DAC,0x80042DC4,ZZ_42C68_144);
ZZ_MARK_TARGET(0x80042DC4,0x80042DCC,ZZ_42C68_15C);
ZZ_MARK_TARGET(0x80042DCC,0x80042DDC,ZZ_42C68_164);
ZZ_MARK_TARGET(0x80042DDC,0x80042DF8,ZZ_42C68_174);
ZZ_MARK_TARGET(0x80042DF8,0x80042E04,ZZ_42C68_190);
ZZ_MARK_TARGET(0x80042E04,0x80042E14,ZZ_42C68_19C);
ZZ_MARK_TARGET(0x80042E14,0x80042E44,ZZ_42C68_1AC);
ZZ_MARK_TARGET(0x80042E44,0x80042E4C,ZZ_42C68_1DC);
ZZ_MARK_TARGET(0x80042E4C,0x80042E68,ZZ_42C68_1E4);
ZZ_MARK_TARGET(0x80042E68,0x80042E70,ZZ_42C68_200);
ZZ_MARK_TARGET(0x80042E70,0x80042E8C,ZZ_42C68_208);
ZZ_MARK_TARGET(0x80042E8C,0x80042E94,ZZ_42C68_224);
ZZ_MARK_TARGET(0x80042E94,0x80042EAC,ZZ_42C68_22C);
ZZ_MARK_TARGET(0x80042EAC,0x80042EB4,ZZ_42C68_244);
ZZ_MARK_TARGET(0x80042EB4,0x80042EC4,ZZ_42C68_24C);
ZZ_MARK_TARGET(0x80042EC4,0x80042EE0,ZZ_42C68_25C);
ZZ_MARK_TARGET(0x80042EE0,0x80042EEC,ZZ_42C68_278);
ZZ_MARK_TARGET(0x80042EEC,0x80042EF8,ZZ_42C68_284);
ZZ_MARK_TARGET(0x80042EF8,0x80042F08,ZZ_42C68_290);
ZZ_MARK_TARGET(0x80042F08,0x80042FA8,ZZ_42C68_2A0);
