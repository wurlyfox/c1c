#ifdef ZZ_INCLUDE_CODE
ZZ_4519C:
	SP -= 64;
	A0 = 0x80050000;
	A0 += 22656;
	EMU_Write32(SP + 56,RA); //+ 0x38
	EMU_Write32(SP + 52,S5); //+ 0x34
	EMU_Write32(SP + 48,S4); //+ 0x30
	EMU_Write32(SP + 44,S3); //+ 0x2C
	EMU_Write32(SP + 40,S2); //+ 0x28
	EMU_Write32(SP + 36,S1); //+ 0x24
	EMU_Write32(SP + 32,S0); //+ 0x20
	V1 = EMU_ReadU32(A0);
	AT = 0x80050000;
	EMU_Write32(AT + 21924,R0); //+ 0x55A4
	AT = 0x80050000;
	EMU_Write32(AT + 21920,R0); //+ 0x55A0
	V0 = V1 - 1;
	EMU_Write32(A0,V0);
	if ((int32_t)V1 <= 0)
	{
		ZZ_CLOCKCYCLES(19,0x800454DC);
		goto ZZ_4519C_340;
	}
	S5 = A0;
	S4 = 0x1;
	S3 = 0x7;
	S2 = S5 + 16;
	ZZ_CLOCKCYCLES(23,0x800451F8);
ZZ_4519C_5C:
	V0 = EMU_ReadU32(S5);
	V0 = (int32_t)V0 < 7;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8004536C);
		goto ZZ_4519C_1D0;
	}
	A0 = 0x80010000;
	A0 += 5664;
	RA = 0x8004521C; //ZZ_4519C_80
	S0 = R0;
	ZZ_CLOCKCYCLES(9,0x8003E6D4);
	goto ZZ_3E6D4;
ZZ_4519C_80:
	A2 = 0x80050000;
	A2 = EMU_ReadU8(A2 + 21948); //+ 0x55BC
	A1 = EMU_ReadU32(S5);
	A3 = 0x80050000;
	A3 = EMU_ReadU8(A3 + 21949); //+ 0x55BD
	V0 = 0x80050000;
	V0 = EMU_ReadU8(V0 + 21950); //+ 0x55BE
	A0 = 0x80010000;
	A0 += 5680;
	RA = 0x80045248; //ZZ_4519C_AC
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(11,0x8003D730);
	goto ZZ_3D730;
ZZ_4519C_AC:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22696); //+ 0x58A8
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 21944); //+ 0x55B8
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		A0 = 0x9;
		ZZ_CLOCKCYCLES(8,0x80045338);
		goto ZZ_4519C_19C;
	}
	A0 = 0x9;
	S1 = 0x80050000;
	S1 = EMU_ReadU32(S1 + 21920); //+ 0x55A0
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21936); //+ 0x55B0
	AT = 0x80050000;
	EMU_Write32(AT + 21920,R0); //+ 0x55A0
	V0 &= 0x10;
	if (!V0)
	{
		A0 = 0x16;
		ZZ_CLOCKCYCLES(17,0x800452D8);
		goto ZZ_4519C_13C;
	}
	A0 = 0x16;
	V0 = S0 & 0xFF;
	ZZ_CLOCKCYCLES(18,0x80045290);
ZZ_4519C_F4:
	if (V0)
	{
		S0 += 1;
		ZZ_CLOCKCYCLES(2,0x800452A8);
		goto ZZ_4519C_10C;
	}
	S0 += 1;
	A0 = 0x80010000;
	A0 += 5556;
	RA = 0x800452A8; //ZZ_4519C_10C
	ZZ_CLOCKCYCLES(6,0x8003E6D4);
	goto ZZ_3E6D4;
ZZ_4519C_10C:
	A0 = 0x1;
	A1 = R0;
	A2 = R0;
	RA = 0x800452BC; //ZZ_4519C_120
	A3 = R0;
	ZZ_CLOCKCYCLES(5,0x80044640);
	goto ZZ_44640;
ZZ_4519C_120:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21936); //+ 0x55B0
	V0 &= 0x10;
	if (V0)
	{
		V0 = S0 & 0xFF;
		ZZ_CLOCKCYCLES(6,0x80045290);
		goto ZZ_4519C_F4;
	}
	V0 = S0 & 0xFF;
	A0 = 0x16;
	ZZ_CLOCKCYCLES(7,0x800452D8);
ZZ_4519C_13C:
	A1 = 0x80050000;
	A1 += 22700;
	A2 = R0;
	RA = 0x800452EC; //ZZ_4519C_150
	A3 = R0;
	ZZ_CLOCKCYCLES(5,0x80044640);
	goto ZZ_44640;
ZZ_4519C_150:
	if (!V0)
	{
		A0 = 0x1;
		ZZ_CLOCKCYCLES(2,0x8004531C);
		goto ZZ_4519C_180;
	}
	A0 = 0x1;
	A1 = R0;
	A2 = R0;
	RA = 0x80045304; //ZZ_4519C_168
	A3 = R0;
	ZZ_CLOCKCYCLES(6,0x80044640);
	goto ZZ_44640;
ZZ_4519C_168:
	A0 = 0x80010000;
	A0 += 5572;
	RA = 0x80045314; //ZZ_4519C_178
	ZZ_CLOCKCYCLES(4,0x8003E6D4);
	goto ZZ_3E6D4;
ZZ_4519C_178:
	A0 = 0x16;
	ZZ_CLOCKCYCLES(2,0x800452D8);
	goto ZZ_4519C_13C;
ZZ_4519C_180:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 21944); //+ 0x55B8
	AT = 0x80050000;
	EMU_Write32(AT + 21920,S1); //+ 0x55A0
	AT = 0x80050000;
	EMU_Write32(AT + 22696,V0); //+ 0x58A8
	A0 = 0x9;
	ZZ_CLOCKCYCLES(7,0x80045338);
ZZ_4519C_19C:
	A1 = R0;
	A2 = R0;
	RA = 0x80045348; //ZZ_4519C_1AC
	A3 = R0;
	ZZ_CLOCKCYCLES(4,0x80044640);
	goto ZZ_44640;
ZZ_4519C_1AC:
	if (V0)
	{
		A0 = 0x2;
		ZZ_CLOCKCYCLES(2,0x800454BC);
		goto ZZ_4519C_320;
	}
	A0 = 0x2;
	A1 = 0x80050000;
	A1 += 21948;
	A2 = R0;
	RA = 0x80045364; //ZZ_4519C_1C8
	A3 = R0;
	ZZ_CLOCKCYCLES(7,0x80044640);
	goto ZZ_44640;
ZZ_4519C_1C8:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x800454BC);
		goto ZZ_4519C_320;
	}
	ZZ_CLOCKCYCLES(2,0x8004536C);
ZZ_4519C_1D0:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22628); //+ 0x5864
	EMU_Write8(V0,S4);
	ZZ_CLOCKCYCLES(6,0x800453B4);
	goto ZZ_4519C_218;
ZZ_4519C_1E8:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22628); //+ 0x5864
	EMU_Write8(V0,S4);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22640); //+ 0x5870
	EMU_Write8(V0,S3);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22636); //+ 0x586C
	EMU_Write8(V0,S3);
	ZZ_CLOCKCYCLES(12,0x800453B4);
ZZ_4519C_218:
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22640); //+ 0x5870
	V0 = EMU_ReadU8(V0);
	V0 &= 0x7;
	if (V0)
	{
		ZZ_CLOCKCYCLES(8,0x80045384);
		goto ZZ_4519C_1E8;
	}
	AT = 0x80050000;
	EMU_Write8(AT + 22654,R0); //+ 0x587E
	V1 = 0x80050000;
	V1 = EMU_ReadU8(V1 + 22654); //+ 0x587E
	V0 = 0x80050000;
	V0 += 22653;
	AT = 0x80050000;
	EMU_Write8(AT + 21952,R0); //+ 0x55C0
	EMU_Write8(V0,V1);
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22628); //+ 0x5864
	V0 = 0x2;
	AT = 0x80050000;
	EMU_Write8(AT + 22652,V0); //+ 0x587C
	EMU_Write8(V1,R0);
	V0 = 0x80050000;
	V0 = EMU_ReadU32(V0 + 22640); //+ 0x5870
	EMU_Write8(V0,R0);
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 22644); //+ 0x5874
	V0 = 0x1325;
	EMU_Write32(V1,V0);
	V0 = EMU_ReadU32(S2);
	V1 = 0x80050000;
	V1 = EMU_ReadU8(V1 + 21952); //+ 0x55C0
	EMU_Write8(SP + 24,V0); //+ 0x18
	V0 &= 0xFF;
	if (V0 == V1)
	{
		A0 = 0xE;
		ZZ_CLOCKCYCLES(38,0x80045464);
		goto ZZ_4519C_2C8;
	}
	A0 = 0xE;
	A1 = SP + 24;
	A2 = R0;
	RA = 0x8004545C; //ZZ_4519C_2C0
	A3 = R0;
	ZZ_CLOCKCYCLES(42,0x80044640);
	goto ZZ_44640;
ZZ_4519C_2C0:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x800454BC);
		goto ZZ_4519C_320;
	}
	ZZ_CLOCKCYCLES(2,0x80045464);
ZZ_4519C_2C8:
	A0 = 0x6;
	A1 = R0;
	A2 = R0;
	A3 = 0x1;
	V1 = EMU_ReadU32(S2 - 8); //+ 0xFFFFFFF8
	V0 = 0x80040000;
	V0 += 23556;
	AT = 0x80050000;
	EMU_Write32(AT + 21924,V0); //+ 0x55A4
	EMU_Write32(S2 - 4,V1); //+ 0xFFFFFFFC
	RA = 0x80045494; //ZZ_4519C_2F8
	ZZ_CLOCKCYCLES(12,0x80044640);
	goto ZZ_44640;
ZZ_4519C_2F8:
	V0 = EMU_ReadU32(S2 - 12); //+ 0xFFFFFFF4
	A0 = -1;
	EMU_Write32(S2 + 8,V0); //+ 0x8
	RA = 0x800454A8; //ZZ_4519C_30C
	ZZ_CLOCKCYCLES(5,0x8003E4F0);
	goto ZZ_3E4F0;
ZZ_4519C_30C:
	V0 += 480;
	EMU_Write32(S2 + 12,V0); //+ 0xC
	V0 = EMU_ReadU32(S2 + 8); //+ 0x8
	ZZ_CLOCKCYCLES(5,0x800454F0);
	goto ZZ_4519C_354;
ZZ_4519C_320:
	A0 = 0x80050000;
	A0 += 22656;
	V1 = EMU_ReadU32(A0);
	V0 = V1 - 1;
	EMU_Write32(A0,V0);
	if ((int32_t)V1 > 0)
	{
		ZZ_CLOCKCYCLES(8,0x800451F8);
		goto ZZ_4519C_5C;
	}
	ZZ_CLOCKCYCLES(8,0x800454DC);
ZZ_4519C_340:
	V0 = 0x80050000;
	V0 += 22680;
	V1 = -1;
	EMU_Write32(V0,V1);
	V0 = EMU_ReadU32(V0);
	ZZ_CLOCKCYCLES(5,0x800454F0);
ZZ_4519C_354:
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
	ZZ_JUMPREGISTER(0x800455F8,ZZ_45518_E0);
	ZZ_JUMPREGISTER(0x80045864,ZZ_45610_254);
	ZZ_JUMPREGISTER(0x80045CE0,ZZ_45C04_DC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004519C,0x800451F8,ZZ_4519C);
ZZ_MARK_TARGET(0x800451F8,0x8004521C,ZZ_4519C_5C);
ZZ_MARK_TARGET(0x8004521C,0x80045248,ZZ_4519C_80);
ZZ_MARK_TARGET(0x80045248,0x80045290,ZZ_4519C_AC);
ZZ_MARK_TARGET(0x80045290,0x800452A8,ZZ_4519C_F4);
ZZ_MARK_TARGET(0x800452A8,0x800452BC,ZZ_4519C_10C);
ZZ_MARK_TARGET(0x800452BC,0x800452D8,ZZ_4519C_120);
ZZ_MARK_TARGET(0x800452D8,0x800452EC,ZZ_4519C_13C);
ZZ_MARK_TARGET(0x800452EC,0x80045304,ZZ_4519C_150);
ZZ_MARK_TARGET(0x80045304,0x80045314,ZZ_4519C_168);
ZZ_MARK_TARGET(0x80045314,0x8004531C,ZZ_4519C_178);
ZZ_MARK_TARGET(0x8004531C,0x80045338,ZZ_4519C_180);
ZZ_MARK_TARGET(0x80045338,0x80045348,ZZ_4519C_19C);
ZZ_MARK_TARGET(0x80045348,0x80045364,ZZ_4519C_1AC);
ZZ_MARK_TARGET(0x80045364,0x8004536C,ZZ_4519C_1C8);
ZZ_MARK_TARGET(0x8004536C,0x80045384,ZZ_4519C_1D0);
ZZ_MARK_TARGET(0x80045384,0x800453B4,ZZ_4519C_1E8);
ZZ_MARK_TARGET(0x800453B4,0x8004545C,ZZ_4519C_218);
ZZ_MARK_TARGET(0x8004545C,0x80045464,ZZ_4519C_2C0);
ZZ_MARK_TARGET(0x80045464,0x80045494,ZZ_4519C_2C8);
ZZ_MARK_TARGET(0x80045494,0x800454A8,ZZ_4519C_2F8);
ZZ_MARK_TARGET(0x800454A8,0x800454BC,ZZ_4519C_30C);
ZZ_MARK_TARGET(0x800454BC,0x800454DC,ZZ_4519C_320);
ZZ_MARK_TARGET(0x800454DC,0x800454F0,ZZ_4519C_340);
ZZ_MARK_TARGET(0x800454F0,0x80045518,ZZ_4519C_354);