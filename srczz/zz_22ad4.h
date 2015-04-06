#ifdef ZZ_INCLUDE_CODE
ZZ_22AD4:
	SP -= 112;
	EMU_Write32(SP + 104,RA); //+ 0x68
	EMU_Write32(SP + 100,S3); //+ 0x64
	EMU_Write32(SP + 96,S2); //+ 0x60
	EMU_Write32(SP + 92,S1); //+ 0x5C
	EMU_Write32(SP + 88,S0); //+ 0x58
	V0 = EMU_ReadU32(A0);
	EMU_Write32(SP + 64,V0); //+ 0x40
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	A1 = 0x80060000;
	A1 += 2960;
	EMU_Write32(SP + 68,V0); //+ 0x44
	V1 = EMU_ReadU32(A0 + 8); //+ 0x8
	V0 = EMU_ReadU32(A1);
	if (V0)
	{
		EMU_Write32(SP + 72,V1); //+ 0x48
		ZZ_CLOCKCYCLES(18,0x80022B44);
		goto ZZ_22AD4_70;
	}
	EMU_Write32(SP + 72,V1); //+ 0x48
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2944); //+ 0xB80
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2948); //+ 0xB84
	V0 <<= 1;
	V1 = (int32_t)V1 < (int32_t)V0;
	if (!V1)
	{
		A0 = 0x2;
		ZZ_CLOCKCYCLES(26,0x80022B40);
		goto ZZ_22AD4_6C;
	}
	A0 = 0x2;
	A0 = 0x1;
	ZZ_CLOCKCYCLES(27,0x80022B40);
ZZ_22AD4_6C:
	EMU_Write32(A1,A0);
	ZZ_CLOCKCYCLES(1,0x80022B44);
ZZ_22AD4_70:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2932); //+ 0xB74
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 2936); //+ 0xB78
	A1 = 0x160;
	A3 = R0;
	V0 = 0x3;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = 0x100;
	EMU_Write32(SP + 16,R0); //+ 0x10
	RA = 0x80022B74; //ZZ_22AD4_A0
	EMU_Write32(SP + 24,V0); //+ 0x18
	ZZ_CLOCKCYCLES(12,0x800324E0);
	goto ZZ_324E0;
ZZ_22AD4_A0:
	V1 = V0 << 3;
	V1 += V0;
	A0 = V1 << 4;
	V1 += A0;
	V1 <<= 1;
	V1 += V0;
	A1 = (int32_t)V1 >> 8;
	if ((int32_t)A1 >= 0)
	{
		V1 = 0x1;
		ZZ_CLOCKCYCLES(9,0x80022BB8);
		goto ZZ_22AD4_E4;
	}
	V1 = 0x1;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2960); //+ 0xB90
	if (V0 != V1)
	{
		A1 = -A1;
		ZZ_CLOCKCYCLES(14,0x80022BB0);
		goto ZZ_22AD4_DC;
	}
	A1 = -A1;
	V1 = 0x2;
	ZZ_CLOCKCYCLES(15,0x80022BB0);
ZZ_22AD4_DC:
	AT = 0x80060000;
	EMU_Write32(AT + 2960,V1); //+ 0xB90
	ZZ_CLOCKCYCLES(2,0x80022BB8);
ZZ_22AD4_E4:
	S0 = 0x80060000;
	S0 += 2916;
	V0 = EMU_ReadU32(S0);
	V1 = EMU_ReadU32(S0 + 8); //+ 0x8
	A3 = 0x80060000;
	A3 = EMU_ReadU32(A3 + 2936); //+ 0xB78
	T0 = 0x80060000;
	T0 = EMU_ReadU32(T0 + 2960); //+ 0xB90
	A0 = SP + 32;
	S3 = SP + 80;
	A2 = S3;
	EMU_Write32(SP + 32,V0); //+ 0x20
	EMU_Write32(SP + 36,V1); //+ 0x24
	EMU_Write32(SP + 40,A3); //+ 0x28
	RA = 0x80022BF8; //ZZ_22AD4_124
	EMU_Write32(SP + 44,T0); //+ 0x2C
	ZZ_CLOCKCYCLES(16,0x800244DC);
	goto ZZ_244DC;
ZZ_22AD4_124:
	S2 = V0;
	if (!S2)
	{
		S1 = SP + 48;
		ZZ_CLOCKCYCLES(3,0x80022C88);
		goto ZZ_22AD4_1B4;
	}
	S1 = SP + 48;
	A0 = SP + 32;
	RA = 0x80022C10; //ZZ_22AD4_13C
	A1 = S1;
	ZZ_CLOCKCYCLES(6,0x800269D8);
	goto ZZ_269D8;
ZZ_22AD4_13C:
	if (!V0)
	{
		A1 = 0x29;
		ZZ_CLOCKCYCLES(2,0x80022C88);
		goto ZZ_22AD4_1B4;
	}
	A1 = 0x29;
	V0 = EMU_ReadU32(SP + 56); //+ 0x38
	V1 = EMU_ReadU32(SP + 60); //+ 0x3C
	S0 = 0x2;
	EMU_Write32(SP + 80,V0); //+ 0x50
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,S0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	A0 = EMU_ReadU32(SP + 52); //+ 0x34
	A2 = R0;
	AT = 0x80060000;
	EMU_Write32(AT + 2960,V1); //+ 0xB90
	RA = 0x80022C4C; //ZZ_22AD4_178
	A3 = R0;
	ZZ_CLOCKCYCLES(15,0x800324E0);
	goto ZZ_324E0;
ZZ_22AD4_178:
	if (V0 != S0)
	{
		A1 = S2;
		ZZ_CLOCKCYCLES(2,0x80022C68);
		goto ZZ_22AD4_194;
	}
	A1 = S2;
	A0 = S1;
	RA = 0x80022C60; //ZZ_22AD4_18C
	A2 = S3;
	ZZ_CLOCKCYCLES(5,0x800244DC);
	goto ZZ_244DC;
ZZ_22AD4_18C:
	ZZ_CLOCKCYCLES(2,0x80022C78);
	goto ZZ_22AD4_1A4;
ZZ_22AD4_194:
	A0 = EMU_ReadU32(SP + 52); //+ 0x34
	A1 = EMU_ReadU32(SP + 56); //+ 0x38
	RA = 0x80022C78; //ZZ_22AD4_1A4
	ZZ_CLOCKCYCLES(4,0x800232F8);
	goto ZZ_232F8;
ZZ_22AD4_1A4:
	A0 = EMU_ReadU32(SP + 48); //+ 0x30
	A1 = EMU_ReadU32(SP + 52); //+ 0x34
	ZZ_CLOCKCYCLES(4,0x80022C90);
	goto ZZ_22AD4_1BC;
ZZ_22AD4_1B4:
	A0 = EMU_ReadU32(S0);
	A1 = EMU_ReadU32(S0 + 8); //+ 0x8
	ZZ_CLOCKCYCLES(2,0x80022C90);
ZZ_22AD4_1BC:
	A2 = EMU_ReadU32(SP + 80); //+ 0x50
	RA = 0x80022C9C; //ZZ_22AD4_1C8
	A3 = R0;
	ZZ_CLOCKCYCLES(3,0x80020304);
	goto ZZ_20304;
ZZ_22AD4_1C8:
	S0 = SP + 64;
	RA = 0x80022CA8; //ZZ_22AD4_1D4
	A0 = S0;
	ZZ_CLOCKCYCLES(3,0x800226FC);
	goto ZZ_226FC;
ZZ_22AD4_1D4:
	RA = 0x80022CB0; //ZZ_22AD4_1DC
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x80023424);
	goto ZZ_23424;
ZZ_22AD4_1DC:
	RA = EMU_ReadU32(SP + 104); //+ 0x68
	S3 = EMU_ReadU32(SP + 100); //+ 0x64
	S2 = EMU_ReadU32(SP + 96); //+ 0x60
	S1 = EMU_ReadU32(SP + 92); //+ 0x5C
	S0 = EMU_ReadU32(SP + 88); //+ 0x58
	SP += 112;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x800270D4,ZZ_26F14_1C0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80022AD4,0x80022B40,ZZ_22AD4);
ZZ_MARK_TARGET(0x80022B40,0x80022B44,ZZ_22AD4_6C);
ZZ_MARK_TARGET(0x80022B44,0x80022B74,ZZ_22AD4_70);
ZZ_MARK_TARGET(0x80022B74,0x80022BB0,ZZ_22AD4_A0);
ZZ_MARK_TARGET(0x80022BB0,0x80022BB8,ZZ_22AD4_DC);
ZZ_MARK_TARGET(0x80022BB8,0x80022BF8,ZZ_22AD4_E4);
ZZ_MARK_TARGET(0x80022BF8,0x80022C10,ZZ_22AD4_124);
ZZ_MARK_TARGET(0x80022C10,0x80022C4C,ZZ_22AD4_13C);
ZZ_MARK_TARGET(0x80022C4C,0x80022C60,ZZ_22AD4_178);
ZZ_MARK_TARGET(0x80022C60,0x80022C68,ZZ_22AD4_18C);
ZZ_MARK_TARGET(0x80022C68,0x80022C78,ZZ_22AD4_194);
ZZ_MARK_TARGET(0x80022C78,0x80022C88,ZZ_22AD4_1A4);
ZZ_MARK_TARGET(0x80022C88,0x80022C90,ZZ_22AD4_1B4);
ZZ_MARK_TARGET(0x80022C90,0x80022C9C,ZZ_22AD4_1BC);
ZZ_MARK_TARGET(0x80022C9C,0x80022CA8,ZZ_22AD4_1C8);
ZZ_MARK_TARGET(0x80022CA8,0x80022CB0,ZZ_22AD4_1D4);
ZZ_MARK_TARGET(0x80022CB0,0x80022CD0,ZZ_22AD4_1DC);
