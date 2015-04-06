#ifdef ZZ_INCLUDE_CODE
ZZ_230E8:
	SP -= 40;
	EMU_Write32(SP + 32,RA); //+ 0x20
	V0 = EMU_ReadU32(A0);
	EMU_Write32(SP + 16,V0); //+ 0x10
	V0 = EMU_ReadU32(A0 + 4); //+ 0x4
	EMU_Write32(SP + 20,V0); //+ 0x14
	V1 = EMU_ReadU32(A0 + 8); //+ 0x8
	A0 = 0x80060000;
	A0 -= 17357;
	V0 = EMU_ReadS8(A0);
	if (!V0)
	{
		EMU_Write32(SP + 24,V1); //+ 0x18
		ZZ_CLOCKCYCLES(15,0x80023194);
		goto ZZ_230E8_AC;
	}
	EMU_Write32(SP + 24,V1); //+ 0x18
	A0 += 317;
	A1 = 0x1;
	RA = 0x80023134; //ZZ_230E8_4C
	A2 = R0;
	ZZ_CLOCKCYCLES(19,0x80014364);
	goto ZZ_14364;
ZZ_230E8_4C:
	V1 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 17036); //+ 0xFFFFBD74
	A1 = EMU_ReadU32(V1 + 388); //+ 0x184
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 - 17032); //+ 0xFFFFBD78
	V1 = A0 << 1;
	V1 += A0;
	V1 += A1;
	V1 <<= 2;
	V1 += V0;
	A1 = EMU_ReadU32(V1 + 16); //+ 0x10
	A3 = R0;
	RA = 0x80023170; //ZZ_230E8_88
	A0 = V0;
	ZZ_CLOCKCYCLES(15,0x80020304);
	goto ZZ_20304;
ZZ_230E8_88:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 2524); //+ 0xFFFFF624
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2916); //+ 0xB64
	V0 = 0x5;
	AT = 0x80060000;
	EMU_Write8(AT - 17364,V0); //+ 0xFFFFBC2C
	EMU_Write32(A0 + 24,V1); //+ 0x18
	ZZ_CLOCKCYCLES(9,0x800231BC);
	goto ZZ_230E8_D4;
ZZ_230E8_AC:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2916); //+ 0xB64
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 2924); //+ 0xB6C
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 2936); //+ 0xB78
	RA = 0x800231B4; //ZZ_230E8_CC
	A3 = R0;
	ZZ_CLOCKCYCLES(8,0x80020304);
	goto ZZ_20304;
ZZ_230E8_CC:
	RA = 0x800231BC; //ZZ_230E8_D4
	A0 = SP + 16;
	ZZ_CLOCKCYCLES(2,0x80023424);
	goto ZZ_23424;
ZZ_230E8_D4:
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80027060,ZZ_26F14_14C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800230E8,0x80023134,ZZ_230E8);
ZZ_MARK_TARGET(0x80023134,0x80023170,ZZ_230E8_4C);
ZZ_MARK_TARGET(0x80023170,0x80023194,ZZ_230E8_88);
ZZ_MARK_TARGET(0x80023194,0x800231B4,ZZ_230E8_AC);
ZZ_MARK_TARGET(0x800231B4,0x800231BC,ZZ_230E8_CC);
ZZ_MARK_TARGET(0x800231BC,0x800231CC,ZZ_230E8_D4);
