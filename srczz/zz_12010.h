#ifdef ZZ_INCLUDE_CODE
ZZ_12010:
	A0 >>= 1;
	A0 &= 0x3F;
	AT = 0x80060000;
	AT += A0;
	V0 = EMU_ReadU8(AT - 19408); //+ 0xFFFFB430
	V1 = V0 - 65;
	V0 = V1 < 26;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(10,0x800120E0);
		goto ZZ_12010_D0;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 104); //+ 0x68
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(16);
	ZZ_JUMPREGISTER(0x80012090,ZZ_12010_80);
	ZZ_JUMPREGISTER(0x800120C8,ZZ_12010_B8);
	ZZ_JUMPREGISTER(0x80012088,ZZ_12010_78);
	ZZ_JUMPREGISTER(0x800120D0,ZZ_12010_C0);
	ZZ_JUMPREGISTER(0x800120E0,ZZ_12010_D0);
	ZZ_JUMPREGISTER(0x80012060,ZZ_12010_50);
	ZZ_JUMPREGISTER(0x800120A8,ZZ_12010_98);
	ZZ_JUMPREGISTER(0x80012078,ZZ_12010_68);
	ZZ_JUMPREGISTER(0x800120A0,ZZ_12010_90);
	ZZ_JUMPREGISTER(0x800120B0,ZZ_12010_A0);
	ZZ_JUMPREGISTER(0x80012098,ZZ_12010_88);
	ZZ_JUMPREGISTER(0x800120B8,ZZ_12010_A8);
	ZZ_JUMPREGISTER(0x80012058,ZZ_12010_48);
	ZZ_JUMPREGISTER(0x80012070,ZZ_12010_60);
	ZZ_JUMPREGISTER(0x800120C0,ZZ_12010_B0);
	ZZ_JUMPREGISTER(0x80012050,ZZ_12010_40);
	ZZ_JUMPREGISTER(0x80012068,ZZ_12010_58);
	ZZ_JUMPREGISTER(0x800120D8,ZZ_12010_C8);
	ZZ_JUMPREGISTER(0x80012080,ZZ_12010_70);
	ZZ_JUMPREGISTER_END();
ZZ_12010_40:
	V0 = 0x1;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_48:
	V0 = 0x4;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_50:
	V0 = 0x2;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_58:
	V0 = 0x3;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_60:
	V0 = 0x5;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_68:
	V0 = 0x6;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_70:
	V0 = 0x7;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_78:
	V0 = 0xB;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_80:
	V0 = 0xC;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_88:
	V0 = 0x14;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_90:
	V0 = 0xD;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_98:
	V0 = 0x10;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_A0:
	V0 = 0xE;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_A8:
	V0 = 0x11;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_B0:
	V0 = 0x12;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_B8:
	V0 = 0x13;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_C0:
	V0 = 0x15;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_C8:
	V0 = 0xF;
	ZZ_CLOCKCYCLES(2,0x800120E4);
	goto ZZ_12010_D4;
ZZ_12010_D0:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x800120E4);
ZZ_12010_D4:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80012278,ZZ_12250_28);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80012010,0x80012050,ZZ_12010);
ZZ_MARK_TARGET(0x80012050,0x80012058,ZZ_12010_40);
ZZ_MARK_TARGET(0x80012058,0x80012060,ZZ_12010_48);
ZZ_MARK_TARGET(0x80012060,0x80012068,ZZ_12010_50);
ZZ_MARK_TARGET(0x80012068,0x80012070,ZZ_12010_58);
ZZ_MARK_TARGET(0x80012070,0x80012078,ZZ_12010_60);
ZZ_MARK_TARGET(0x80012078,0x80012080,ZZ_12010_68);
ZZ_MARK_TARGET(0x80012080,0x80012088,ZZ_12010_70);
ZZ_MARK_TARGET(0x80012088,0x80012090,ZZ_12010_78);
ZZ_MARK_TARGET(0x80012090,0x80012098,ZZ_12010_80);
ZZ_MARK_TARGET(0x80012098,0x800120A0,ZZ_12010_88);
ZZ_MARK_TARGET(0x800120A0,0x800120A8,ZZ_12010_90);
ZZ_MARK_TARGET(0x800120A8,0x800120B0,ZZ_12010_98);
ZZ_MARK_TARGET(0x800120B0,0x800120B8,ZZ_12010_A0);
ZZ_MARK_TARGET(0x800120B8,0x800120C0,ZZ_12010_A8);
ZZ_MARK_TARGET(0x800120C0,0x800120C8,ZZ_12010_B0);
ZZ_MARK_TARGET(0x800120C8,0x800120D0,ZZ_12010_B8);
ZZ_MARK_TARGET(0x800120D0,0x800120D8,ZZ_12010_C0);
ZZ_MARK_TARGET(0x800120D8,0x800120E0,ZZ_12010_C8);
ZZ_MARK_TARGET(0x800120E0,0x800120E4,ZZ_12010_D0);
ZZ_MARK_TARGET(0x800120E4,0x800120EC,ZZ_12010_D4);
