#ifdef ZZ_INCLUDE_CODE
ZZ_1BCC8:
	SP -= 48;
	EMU_Write32(SP + 32,S2); //+ 0x20
	S2 = A0;
	EMU_Write32(SP + 40,RA); //+ 0x28
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 28,S1); //+ 0x1C
	if (!S2)
	{
		EMU_Write32(SP + 24,S0); //+ 0x18
		ZZ_CLOCKCYCLES(8,0x8001C6A4);
		goto ZZ_1BCC8_9DC;
	}
	EMU_Write32(SP + 24,S0); //+ 0x18
	V1 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = 0x7;
	if (V1 == V0)
	{
		S3 = R0;
		ZZ_CLOCKCYCLES(12,0x8001BD0C);
		goto ZZ_1BCC8_44;
	}
	S3 = R0;
	V0 = 0x11;
	if (V1 == V0)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(15,0x8001BD38);
		goto ZZ_1BCC8_70;
	}
	V0 = A1 << 2;
	ZZ_CLOCKCYCLES(17,0x8001BD40);
	goto ZZ_1BCC8_78;
ZZ_1BCC8_44:
	V0 = EMU_ReadU32(S2 + 16); //+ 0x10
	V1 = EMU_ReadU32(V0 + 516); //+ 0x204
	V0 = EMU_ReadU32(V0 + 520); //+ 0x208
	V1 += A1;
	V1 += V0;
	V1 <<= 2;
	V1 += S2;
	S1 = EMU_ReadU32(V1 + 16); //+ 0x10
	ZZ_CLOCKCYCLES(11,0x8001BD40);
	goto ZZ_1BCC8_78;
ZZ_1BCC8_70:
	V0 += S2;
	S1 = EMU_ReadU32(V0 + 24); //+ 0x18
	ZZ_CLOCKCYCLES(2,0x8001BD40);
ZZ_1BCC8_78:
	V1 = EMU_ReadU8(S1 + 6); //+ 0x6
	V0 = 0x3;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001BDB0);
		goto ZZ_1BCC8_E8;
	}
	V1 = EMU_ReadU8(S1 + 18); //+ 0x12
	if (!V1)
	{
		ZZ_CLOCKCYCLES(9,0x8001BDA0);
		goto ZZ_1BCC8_D8;
	}
	V0 = EMU_ReadU16(S1 + 8); //+ 0x8
	if (!V0)
	{
		V0 = V0 < 5;
		ZZ_CLOCKCYCLES(13,0x8001BD7C);
		goto ZZ_1BCC8_B4;
	}
	V0 = V0 < 5;
	if (V0)
	{
		ZZ_CLOCKCYCLES(15,0x8001BDA0);
		goto ZZ_1BCC8_D8;
	}
	ZZ_CLOCKCYCLES(15,0x8001BD7C);
ZZ_1BCC8_B4:
	V0 = 0x2C;
	if (V1 == V0)
	{
		V0 = 0x30;
		ZZ_CLOCKCYCLES(3,0x8001BD90);
		goto ZZ_1BCC8_C8;
	}
	V0 = 0x30;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001BDB0);
		goto ZZ_1BCC8_E8;
	}
	ZZ_CLOCKCYCLES(5,0x8001BD90);
ZZ_1BCC8_C8:
	V0 = EMU_ReadU8(S1 + 19); //+ 0x13
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001BDB0);
		goto ZZ_1BCC8_E8;
	}
	ZZ_CLOCKCYCLES(4,0x8001BDA0);
ZZ_1BCC8_D8:
	V0 = EMU_ReadU32(GP + 696); //+ 0x2B8
	if (V0)
	{
		V0 = -14;
		ZZ_CLOCKCYCLES(4,0x8001C6A8);
		goto ZZ_1BCC8_9E0;
	}
	V0 = -14;
	ZZ_CLOCKCYCLES(4,0x8001BDB0);
ZZ_1BCC8_E8:
	V1 = EMU_ReadU8(S1 + 18); //+ 0x12
	V0 = 0x22;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001BE70);
		goto ZZ_1BCC8_1A8;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6756); //+ 0x1A64
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x8001BE4C);
		goto ZZ_1BCC8_184;
	}
	A0 = EMU_ReadS16(S1 + 20); //+ 0x14
	A1 = EMU_ReadS16(V0 + 20); //+ 0x14
	RA = 0x8001BDE4; //ZZ_1BCC8_11C
	ZZ_CLOCKCYCLES(13,0x8002F840);
	goto ZZ_2F840;
ZZ_1BCC8_11C:
	V0 = (int32_t)V0 < 10;
	if (!V0)
	{
		V0 = 0x10000;
		ZZ_CLOCKCYCLES(3,0x8001BE50);
		goto ZZ_1BCC8_188;
	}
	V0 = 0x10000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6756); //+ 0x1A64
	A0 = EMU_ReadS16(S1 + 24); //+ 0x18
	A1 = EMU_ReadS16(V0 + 24); //+ 0x18
	RA = 0x8001BE08; //ZZ_1BCC8_140
	ZZ_CLOCKCYCLES(9,0x8002F840);
	goto ZZ_2F840;
ZZ_1BCC8_140:
	V0 = (int32_t)V0 < 10;
	if (!V0)
	{
		V0 = 0x10000;
		ZZ_CLOCKCYCLES(3,0x8001BE50);
		goto ZZ_1BCC8_188;
	}
	V0 = 0x10000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 6756); //+ 0x1A64
	A1 = EMU_ReadS16(V0 + 22); //+ 0x16
	A0 = EMU_ReadS16(S1 + 22); //+ 0x16
	RA = 0x8001BE30; //ZZ_1BCC8_168
	A1 += 100;
	ZZ_CLOCKCYCLES(10,0x8002F840);
	goto ZZ_2F840;
ZZ_1BCC8_168:
	V0 = (int32_t)V0 < 10;
	if (!V0)
	{
		V0 = 0x10000;
		ZZ_CLOCKCYCLES(3,0x8001BE50);
		goto ZZ_1BCC8_188;
	}
	V0 = 0x10000;
	S3 = 0x80060000;
	S3 = EMU_ReadU32(S3 + 6748); //+ 0x1A5C
	ZZ_CLOCKCYCLES(7,0x8001BE68);
	goto ZZ_1BCC8_1A0;
ZZ_1BCC8_184:
	V0 = 0x10000;
	ZZ_CLOCKCYCLES(1,0x8001BE50);
ZZ_1BCC8_188:
	V0 |= 0x9000;
	S3 = R0;
	AT = 0x80060000;
	EMU_Write32(AT + 6752,V0); //+ 0x1A60
	AT = 0x80060000;
	EMU_Write32(AT + 6748,R0); //+ 0x1A5C
	ZZ_CLOCKCYCLES(6,0x8001BE68);
ZZ_1BCC8_1A0:
	AT = 0x80060000;
	EMU_Write32(AT + 6756,S1); //+ 0x1A64
	ZZ_CLOCKCYCLES(2,0x8001BE70);
ZZ_1BCC8_1A8:
	A0 = EMU_ReadU16(S1 + 8); //+ 0x8
	V0 = A0 << 2;
	AT = 0x80060000;
	AT += V0;
	V1 = EMU_ReadU32(AT - 168); //+ 0xFFFFFF58
	V0 = V1 & 0x1;
	if (V0)
	{
		V0 = V1 & 0x2;
		ZZ_CLOCKCYCLES(10,0x8001BEA0);
		goto ZZ_1BCC8_1D8;
	}
	V0 = V1 & 0x2;
	if (!V0)
	{
		V0 = 0x3;
		ZZ_CLOCKCYCLES(12,0x8001BED0);
		goto ZZ_1BCC8_208;
	}
	V0 = 0x3;
	ZZ_CLOCKCYCLES(12,0x8001BEA0);
ZZ_1BCC8_1D8:
	V1 = EMU_ReadU8(S1 + 18); //+ 0x12
	V0 = 0x22;
	if (V1 != V0)
	{
		V0 = -14;
		ZZ_CLOCKCYCLES(4,0x8001C6A8);
		goto ZZ_1BCC8_9E0;
	}
	V0 = -14;
	A0 = 0x10000;
	V1 = 0x80060000;
	V1 += 6752;
	V0 = EMU_ReadU32(V1);
	A0 |= 0x9000;
	V0 += A0;
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(12,0x8001C6A4);
	goto ZZ_1BCC8_9DC;
ZZ_1BCC8_208:
	V1 = EMU_ReadU8(S1 + 6); //+ 0x6
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001BF3C);
		goto ZZ_1BCC8_274;
	}
	V1 = EMU_ReadU8(S1 + 18); //+ 0x12
	if (!V1)
	{
		ZZ_CLOCKCYCLES(8,0x8001BF24);
		goto ZZ_1BCC8_25C;
	}
	if (!A0)
	{
		V0 = A0 < 5;
		ZZ_CLOCKCYCLES(10,0x8001BF00);
		goto ZZ_1BCC8_238;
	}
	V0 = A0 < 5;
	if (V0)
	{
		ZZ_CLOCKCYCLES(12,0x8001BF24);
		goto ZZ_1BCC8_25C;
	}
	ZZ_CLOCKCYCLES(12,0x8001BF00);
ZZ_1BCC8_238:
	V0 = 0x2C;
	if (V1 == V0)
	{
		V0 = 0x30;
		ZZ_CLOCKCYCLES(3,0x8001BF14);
		goto ZZ_1BCC8_24C;
	}
	V0 = 0x30;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001BF3C);
		goto ZZ_1BCC8_274;
	}
	ZZ_CLOCKCYCLES(5,0x8001BF14);
ZZ_1BCC8_24C:
	V0 = EMU_ReadU8(S1 + 19); //+ 0x13
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001BF3C);
		goto ZZ_1BCC8_274;
	}
	ZZ_CLOCKCYCLES(4,0x8001BF24);
ZZ_1BCC8_25C:
	S0 = 0x80060000;
	S0 = EMU_ReadU32(S0 + 3504); //+ 0xDB0
	EMU_Write32(GP + 696,S0); //+ 0x2B8
	A1 = 0x6;
	ZZ_CLOCKCYCLES(6,0x8001C034);
	goto ZZ_1BCC8_36C;
ZZ_1BCC8_274:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3576); //+ 0xDF8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001BF60);
		goto ZZ_1BCC8_298;
	}
	S0 = 0x80060000;
	S0 = EMU_ReadU32(S0 + 3580); //+ 0xDFC
	ZZ_CLOCKCYCLES(9,0x8001BF68);
	goto ZZ_1BCC8_2A0;
ZZ_1BCC8_298:
	S0 = 0x80060000;
	S0 = EMU_ReadU32(S0 + 3684); //+ 0xE64
	ZZ_CLOCKCYCLES(2,0x8001BF68);
ZZ_1BCC8_2A0:
	if (S0)
	{
		A1 = 0x3;
		ZZ_CLOCKCYCLES(3,0x8001C034);
		goto ZZ_1BCC8_36C;
	}
	A1 = 0x3;
	A0 = 0x80060000;
	A0 += 3536;
	if (A0)
	{
		V1 = R0;
		ZZ_CLOCKCYCLES(7,0x8001BF8C);
		goto ZZ_1BCC8_2C4;
	}
	V1 = R0;
	V0 = R0;
	ZZ_CLOCKCYCLES(9,0x8001C014);
	goto ZZ_1BCC8_34C;
ZZ_1BCC8_2C4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3536); //+ 0xDD0
	S0 = 0x2;
	if (V0 == S0)
	{
		ZZ_CLOCKCYCLES(5,0x8001BFC8);
		goto ZZ_1BCC8_300;
	}
	RA = 0x8001BFA8; //ZZ_1BCC8_2E0
	A1 = 0x80000;
	ZZ_CLOCKCYCLES(7,0x8001BCA4);
	goto ZZ_1BCA4;
ZZ_1BCC8_2E0:
	V1 = V0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(3,0x8001C014);
		goto ZZ_1BCC8_34C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3536); //+ 0xDD0
	if (V0 != S0)
	{
		ZZ_CLOCKCYCLES(8,0x8001BFD8);
		goto ZZ_1BCC8_310;
	}
	ZZ_CLOCKCYCLES(8,0x8001BFC8);
ZZ_1BCC8_300:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 3540); //+ 0xDD4
	ZZ_CLOCKCYCLES(4,0x8001C004);
	goto ZZ_1BCC8_33C;
ZZ_1BCC8_310:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 3644); //+ 0xE3C
	ZZ_CLOCKCYCLES(4,0x8001C004);
	goto ZZ_1BCC8_33C;
ZZ_1BCC8_320:
	A1 = 0x80020000;
	A1 -= 17244;
	S0 = EMU_ReadU32(A0 + 104); //+ 0x68
	RA = 0x8001BFFC; //ZZ_1BCC8_334
	A2 = 0x80000;
	ZZ_CLOCKCYCLES(5,0x8001B788);
	goto ZZ_1B788;
ZZ_1BCC8_334:
	V1 = V0;
	A0 = S0;
	ZZ_CLOCKCYCLES(2,0x8001C004);
ZZ_1BCC8_33C:
	if (!A0)
	{
		V0 = V1;
		ZZ_CLOCKCYCLES(2,0x8001C014);
		goto ZZ_1BCC8_34C;
	}
	V0 = V1;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(4,0x8001BFE8);
		goto ZZ_1BCC8_320;
	}
	ZZ_CLOCKCYCLES(4,0x8001C014);
ZZ_1BCC8_34C:
	if (!V0)
	{
		A0 = V0;
		ZZ_CLOCKCYCLES(2,0x8001C02C);
		goto ZZ_1BCC8_364;
	}
	A0 = V0;
	RA = 0x8001C024; //ZZ_1BCC8_35C
	A1 = R0;
	ZZ_CLOCKCYCLES(4,0x8001D1E0);
	goto ZZ_1D1E0;
ZZ_1BCC8_35C:
	ZZ_CLOCKCYCLES(2,0x8001BF3C);
	goto ZZ_1BCC8_274;
ZZ_1BCC8_364:
	V0 = -22;
	ZZ_CLOCKCYCLES(2,0x8001C6A8);
	goto ZZ_1BCC8_9E0;
ZZ_1BCC8_36C:
	V1 = A1 << 3;
	V0 = 0x80060000;
	V0 += 3512;
	A0 = EMU_ReadU32(S0 + 100); //+ 0x64
	if (!A0)
	{
		A1 = V1 + V0;
		ZZ_CLOCKCYCLES(7,0x8001C0D0);
		goto ZZ_1BCC8_408;
	}
	A1 = V1 + V0;
	V1 = EMU_ReadU32(A0);
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(11,0x8001C06C);
		goto ZZ_1BCC8_3A4;
	}
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(14,0x8001C070);
	goto ZZ_1BCC8_3A8;
ZZ_1BCC8_3A4:
	V1 = EMU_ReadU32(A0 + 108); //+ 0x6C
	ZZ_CLOCKCYCLES(1,0x8001C070);
ZZ_1BCC8_3A8:
	if (V1 != S0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x8001C0A8);
		goto ZZ_1BCC8_3E0;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		V1 = A0 + 108;
		ZZ_CLOCKCYCLES(7,0x8001C090);
		goto ZZ_1BCC8_3C8;
	}
	V1 = A0 + 108;
	V1 = A0 + 4;
	ZZ_CLOCKCYCLES(8,0x8001C090);
ZZ_1BCC8_3C8:
	V0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(3,0x8001C0D0);
	goto ZZ_1BCC8_408;
ZZ_1BCC8_3D4:
	if (!V1)
	{
		ZZ_CLOCKCYCLES(2,0x8001C114);
		goto ZZ_1BCC8_44C;
	}
	V1 = EMU_ReadU32(V1 + 104); //+ 0x68
	ZZ_CLOCKCYCLES(3,0x8001C0A8);
ZZ_1BCC8_3E0:
	if (!V1)
	{
		ZZ_CLOCKCYCLES(3,0x8001C114);
		goto ZZ_1BCC8_44C;
	}
	V0 = EMU_ReadU32(V1 + 104); //+ 0x68
	if (V0 != S0)
	{
		ZZ_CLOCKCYCLES(7,0x8001C09C);
		goto ZZ_1BCC8_3D4;
	}
	V0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(V1 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(10,0x8001C0D0);
ZZ_1BCC8_408:
	EMU_Write32(S0 + 100,A1); //+ 0x64
	V1 = EMU_ReadU32(A1);
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001C0F0);
		goto ZZ_1BCC8_428;
	}
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	EMU_Write32(S0 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(8,0x8001C0FC);
	goto ZZ_1BCC8_434;
ZZ_1BCC8_428:
	V0 = EMU_ReadU32(A1 + 108); //+ 0x6C
	EMU_Write32(S0 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(3,0x8001C0FC);
ZZ_1BCC8_434:
	V1 = EMU_ReadU32(A1);
	V0 = 0x2;
	if (V1 != V0)
	{
		V1 = A1 + 108;
		ZZ_CLOCKCYCLES(4,0x8001C110);
		goto ZZ_1BCC8_448;
	}
	V1 = A1 + 108;
	V1 = A1 + 4;
	ZZ_CLOCKCYCLES(5,0x8001C110);
ZZ_1BCC8_448:
	EMU_Write32(V1,S0);
	ZZ_CLOCKCYCLES(1,0x8001C114);
ZZ_1BCC8_44C:
	V0 = EMU_ReadU8(S1 + 6); //+ 0x6
	A0 = S0;
	EMU_Write32(S0 + 4,V0); //+ 0x4
	A1 = EMU_ReadU8(S1 + 18); //+ 0x12
	A2 = EMU_ReadU8(S1 + 19); //+ 0x13
	A3 = R0;
	RA = 0x8001C134; //ZZ_1BCC8_46C
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x8001CB80);
	goto ZZ_1CB80;
ZZ_1BCC8_46C:
	A1 = V0;
	V0 = (int32_t)A1 < -254;
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001C238);
		goto ZZ_1BCC8_570;
	}
	A0 = EMU_ReadU32(S0 + 100); //+ 0x64
	A2 = 0x80060000;
	A2 += 3576;
	if (!A0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(9,0x8001C1D8);
		goto ZZ_1BCC8_510;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(13,0x8001C174);
		goto ZZ_1BCC8_4AC;
	}
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(16,0x8001C178);
	goto ZZ_1BCC8_4B0;
ZZ_1BCC8_4AC:
	V1 = EMU_ReadU32(A0 + 108); //+ 0x6C
	ZZ_CLOCKCYCLES(1,0x8001C178);
ZZ_1BCC8_4B0:
	if (V1 != S0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x8001C1B0);
		goto ZZ_1BCC8_4E8;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		V1 = A0 + 108;
		ZZ_CLOCKCYCLES(7,0x8001C198);
		goto ZZ_1BCC8_4D0;
	}
	V1 = A0 + 108;
	V1 = A0 + 4;
	ZZ_CLOCKCYCLES(8,0x8001C198);
ZZ_1BCC8_4D0:
	V0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(3,0x8001C1D8);
	goto ZZ_1BCC8_510;
ZZ_1BCC8_4DC:
	if (!V1)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(2,0x8001C6A8);
		goto ZZ_1BCC8_9E0;
	}
	V0 = A1;
	V1 = EMU_ReadU32(V1 + 104); //+ 0x68
	ZZ_CLOCKCYCLES(3,0x8001C1B0);
ZZ_1BCC8_4E8:
	if (!V1)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(3,0x8001C6A8);
		goto ZZ_1BCC8_9E0;
	}
	V0 = A1;
	V0 = EMU_ReadU32(V1 + 104); //+ 0x68
	if (V0 != S0)
	{
		ZZ_CLOCKCYCLES(7,0x8001C1A4);
		goto ZZ_1BCC8_4DC;
	}
	V0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(V1 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(10,0x8001C1D8);
ZZ_1BCC8_510:
	EMU_Write32(S0 + 100,A2); //+ 0x64
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3576); //+ 0xDF8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001C200);
		goto ZZ_1BCC8_538;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3580); //+ 0xDFC
	ZZ_CLOCKCYCLES(10,0x8001C208);
	goto ZZ_1BCC8_540;
ZZ_1BCC8_538:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3684); //+ 0xE64
	ZZ_CLOCKCYCLES(2,0x8001C208);
ZZ_1BCC8_540:
	A0 = 0x80060000;
	A0 += 3684;
	EMU_Write32(S0 + 104,V0); //+ 0x68
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3576); //+ 0xDF8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001C22C);
		goto ZZ_1BCC8_564;
	}
	A0 -= 104;
	ZZ_CLOCKCYCLES(9,0x8001C22C);
ZZ_1BCC8_564:
	EMU_Write32(A0,S0);
	V0 = A1;
	ZZ_CLOCKCYCLES(3,0x8001C6A8);
	goto ZZ_1BCC8_9E0;
ZZ_1BCC8_570:
	V1 = EMU_ReadU16(S1 + 8); //+ 0x8
	V0 = 0x80060000;
	V0 -= 168;
	V1 <<= 2;
	V1 += V0;
	V0 = EMU_ReadU32(V1);
	V0 |= 0x1;
	EMU_Write32(V1,V0);
	V0 = EMU_ReadU16(S1 + 8); //+ 0x8
	V0 <<= 8;
	if (!S2)
	{
		EMU_Write32(S0 + 216,V0); //+ 0xD8
		ZZ_CLOCKCYCLES(14,0x8001C288);
		goto ZZ_1BCC8_5C0;
	}
	EMU_Write32(S0 + 216,V0); //+ 0xD8
	V1 = EMU_ReadU32(S2 + 8); //+ 0x8
	V0 = 0x11;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(18,0x8001C288);
		goto ZZ_1BCC8_5C0;
	}
	S2 = 0x80050000;
	S2 = EMU_ReadU32(S2 + 30996); //+ 0x7914
	ZZ_CLOCKCYCLES(20,0x8001C288);
ZZ_1BCC8_5C0:
	EMU_Write32(S0 + 40,S2); //+ 0x28
	V1 = EMU_ReadU8(S1 + 6); //+ 0x6
	V0 = 0x3;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001C390);
		goto ZZ_1BCC8_6C8;
	}
	V1 = EMU_ReadU8(S1 + 18); //+ 0x12
	if (!V1)
	{
		ZZ_CLOCKCYCLES(10,0x8001C2EC);
		goto ZZ_1BCC8_624;
	}
	V0 = EMU_ReadU16(S1 + 8); //+ 0x8
	if (!V0)
	{
		V0 = V0 < 5;
		ZZ_CLOCKCYCLES(14,0x8001C2C8);
		goto ZZ_1BCC8_600;
	}
	V0 = V0 < 5;
	if (V0)
	{
		ZZ_CLOCKCYCLES(16,0x8001C2EC);
		goto ZZ_1BCC8_624;
	}
	ZZ_CLOCKCYCLES(16,0x8001C2C8);
ZZ_1BCC8_600:
	V0 = 0x2C;
	if (V1 == V0)
	{
		V0 = 0x30;
		ZZ_CLOCKCYCLES(3,0x8001C2DC);
		goto ZZ_1BCC8_614;
	}
	V0 = 0x30;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(5,0x8001C390);
		goto ZZ_1BCC8_6C8;
	}
	ZZ_CLOCKCYCLES(5,0x8001C2DC);
ZZ_1BCC8_614:
	V0 = EMU_ReadU8(S1 + 19); //+ 0x13
	if (V0)
	{
		ZZ_CLOCKCYCLES(4,0x8001C390);
		goto ZZ_1BCC8_6C8;
	}
	ZZ_CLOCKCYCLES(4,0x8001C2EC);
ZZ_1BCC8_624:
	V1 = EMU_ReadU32(S2 + 16); //+ 0x10
	A3 = S0 + 48;
	A2 = V1 + 840;
	V0 = A2 | A3;
	V0 &= 0x3;
	if (!V0)
	{
		T0 = V1 + 888;
		ZZ_CLOCKCYCLES(7,0x8001C35C);
		goto ZZ_1BCC8_694;
	}
	T0 = V1 + 888;
	ZZ_CLOCKCYCLES(7,0x8001C308);
ZZ_1BCC8_640:
	EMU_ReadLeft(A2 + 3,&V0); //+ 0x3
	EMU_ReadRight(A2,&V0);
	EMU_ReadLeft(A2 + 7,&V1); //+ 0x7
	EMU_ReadRight(A2 + 4,&V1); //+ 0x4
	EMU_ReadLeft(A2 + 11,&A0); //+ 0xB
	EMU_ReadRight(A2 + 8,&A0); //+ 0x8
	EMU_ReadLeft(A2 + 15,&A1); //+ 0xF
	EMU_ReadRight(A2 + 12,&A1); //+ 0xC
	EMU_WriteLeft(A3 + 3,V0); //+ 0x3
	EMU_WriteRight(A3,V0);
	EMU_WriteLeft(A3 + 7,V1); //+ 0x7
	EMU_WriteRight(A3 + 4,V1); //+ 0x4
	EMU_WriteLeft(A3 + 11,A0); //+ 0xB
	EMU_WriteRight(A3 + 8,A0); //+ 0x8
	EMU_WriteLeft(A3 + 15,A1); //+ 0xF
	EMU_WriteRight(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T0)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(19,0x8001C308);
		goto ZZ_1BCC8_640;
	}
	A3 += 16;
	EMU_Write32(S0 + 272,S1); //+ 0x110
	ZZ_CLOCKCYCLES(21,0x8001C430);
	goto ZZ_1BCC8_768;
ZZ_1BCC8_694:
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	A1 = EMU_ReadU32(A2 + 12); //+ 0xC
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	EMU_Write32(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T0)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(11,0x8001C35C);
		goto ZZ_1BCC8_694;
	}
	A3 += 16;
	EMU_Write32(S0 + 272,S1); //+ 0x110
	ZZ_CLOCKCYCLES(13,0x8001C430);
	goto ZZ_1BCC8_768;
ZZ_1BCC8_6C8:
	V1 = EMU_ReadU32(S2 + 16); //+ 0x10
	A3 = S0 + 48;
	A2 = V1 + 792;
	V0 = A2 | A3;
	V0 &= 0x3;
	if (!V0)
	{
		T0 = V1 + 840;
		ZZ_CLOCKCYCLES(7,0x8001C400);
		goto ZZ_1BCC8_738;
	}
	T0 = V1 + 840;
	ZZ_CLOCKCYCLES(7,0x8001C3AC);
ZZ_1BCC8_6E4:
	EMU_ReadLeft(A2 + 3,&V0); //+ 0x3
	EMU_ReadRight(A2,&V0);
	EMU_ReadLeft(A2 + 7,&V1); //+ 0x7
	EMU_ReadRight(A2 + 4,&V1); //+ 0x4
	EMU_ReadLeft(A2 + 11,&A0); //+ 0xB
	EMU_ReadRight(A2 + 8,&A0); //+ 0x8
	EMU_ReadLeft(A2 + 15,&A1); //+ 0xF
	EMU_ReadRight(A2 + 12,&A1); //+ 0xC
	EMU_WriteLeft(A3 + 3,V0); //+ 0x3
	EMU_WriteRight(A3,V0);
	EMU_WriteLeft(A3 + 7,V1); //+ 0x7
	EMU_WriteRight(A3 + 4,V1); //+ 0x4
	EMU_WriteLeft(A3 + 11,A0); //+ 0xB
	EMU_WriteRight(A3 + 8,A0); //+ 0x8
	EMU_WriteLeft(A3 + 15,A1); //+ 0xF
	EMU_WriteRight(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T0)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(19,0x8001C3AC);
		goto ZZ_1BCC8_6E4;
	}
	A3 += 16;
	EMU_Write32(S0 + 272,S1); //+ 0x110
	ZZ_CLOCKCYCLES(21,0x8001C430);
	goto ZZ_1BCC8_768;
ZZ_1BCC8_738:
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	A1 = EMU_ReadU32(A2 + 12); //+ 0xC
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	EMU_Write32(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T0)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(11,0x8001C400);
		goto ZZ_1BCC8_738;
	}
	A3 += 16;
	EMU_Write32(S0 + 272,S1); //+ 0x110
	ZZ_CLOCKCYCLES(12,0x8001C430);
ZZ_1BCC8_768:
	V0 = EMU_ReadU16(S1 + 10); //+ 0xA
	V0 <<= 8;
	EMU_Write32(S0 + 280,V0); //+ 0x118
	V0 = EMU_ReadU16(S1 + 4); //+ 0x4
	V0 &= 0x1;
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(9,0x8001C478);
		goto ZZ_1BCC8_7B0;
	}
	A0 = S0;
	V0 = EMU_ReadS16(S1 + 12); //+ 0xC
	EMU_Write32(S0 + 140,V0); //+ 0x8C
	V0 = EMU_ReadS16(S1 + 14); //+ 0xE
	EMU_Write32(S0 + 144,V0); //+ 0x90
	V0 = EMU_ReadS16(S1 + 16); //+ 0x10
	EMU_Write32(S0 + 148,V0); //+ 0x94
	ZZ_CLOCKCYCLES(18,0x8001C478);
ZZ_1BCC8_7B0:
	V0 = EMU_ReadS16(S1 + 12); //+ 0xC
	V0 <<= 8;
	EMU_Write32(S0 + 188,V0); //+ 0xBC
	V0 = EMU_ReadS16(S1 + 14); //+ 0xE
	A1 = R0;
	V0 <<= 8;
	EMU_Write32(S0 + 192,V0); //+ 0xC0
	V0 = EMU_ReadS16(S1 + 16); //+ 0x10
	A2 = S0 + 128;
	V0 <<= 8;
	RA = 0x8001C4AC; //ZZ_1BCC8_7E4
	EMU_Write32(S0 + 196,V0); //+ 0xC4
	ZZ_CLOCKCYCLES(13,0x8001AC9C);
	goto ZZ_1AC9C;
ZZ_1BCC8_7E4:
	V0 = EMU_ReadU32(GP + 696); //+ 0x2B8
	if (S0 != V0)
	{
		V0 = -1;
		ZZ_CLOCKCYCLES(4,0x8001C4E0);
		goto ZZ_1BCC8_818;
	}
	V0 = -1;
	V1 = 0x80050000;
	V1 = EMU_ReadU32(V1 + 26388); //+ 0x6714
	if (V1 != V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(9,0x8001C4E0);
		goto ZZ_1BCC8_818;
	}
	A0 = S0;
	A1 = 0x80050000;
	A1 += 31092;
	RA = 0x8001C4E0; //ZZ_1BCC8_818
	A2 = 0x1;
	ZZ_CLOCKCYCLES(13,0x80026460);
	goto ZZ_26460;
ZZ_1BCC8_818:
	V0 = EMU_ReadU32(S0 + 32); //+ 0x20
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 = EMU_ReadU32(V0 + 4); //+ 0x4
	V0 = 0x300;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001C5EC);
		goto ZZ_1BCC8_924;
	}
	A0 = EMU_ReadU32(S0 + 100); //+ 0x64
	A1 = 0x80060000;
	A1 += 3544;
	if (!A0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(13,0x8001C594);
		goto ZZ_1BCC8_8CC;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(17,0x8001C530);
		goto ZZ_1BCC8_868;
	}
	V1 = EMU_ReadU32(A0 + 4); //+ 0x4
	ZZ_CLOCKCYCLES(20,0x8001C534);
	goto ZZ_1BCC8_86C;
ZZ_1BCC8_868:
	V1 = EMU_ReadU32(A0 + 108); //+ 0x6C
	ZZ_CLOCKCYCLES(1,0x8001C534);
ZZ_1BCC8_86C:
	if (V1 != S0)
	{
		V0 = 0x2;
		ZZ_CLOCKCYCLES(3,0x8001C56C);
		goto ZZ_1BCC8_8A4;
	}
	V0 = 0x2;
	V1 = EMU_ReadU32(A0);
	if (V1 != V0)
	{
		V1 = A0 + 108;
		ZZ_CLOCKCYCLES(7,0x8001C554);
		goto ZZ_1BCC8_88C;
	}
	V1 = A0 + 108;
	V1 = A0 + 4;
	ZZ_CLOCKCYCLES(8,0x8001C554);
ZZ_1BCC8_88C:
	V0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(V1,V0);
	ZZ_CLOCKCYCLES(3,0x8001C594);
	goto ZZ_1BCC8_8CC;
ZZ_1BCC8_898:
	if (!V1)
	{
		ZZ_CLOCKCYCLES(2,0x8001C5EC);
		goto ZZ_1BCC8_924;
	}
	V1 = EMU_ReadU32(V1 + 104); //+ 0x68
	ZZ_CLOCKCYCLES(3,0x8001C56C);
ZZ_1BCC8_8A4:
	if (!V1)
	{
		ZZ_CLOCKCYCLES(3,0x8001C5EC);
		goto ZZ_1BCC8_924;
	}
	V0 = EMU_ReadU32(V1 + 104); //+ 0x68
	if (V0 != S0)
	{
		ZZ_CLOCKCYCLES(7,0x8001C560);
		goto ZZ_1BCC8_898;
	}
	V0 = EMU_ReadU32(S0 + 104); //+ 0x68
	EMU_Write32(V1 + 104,V0); //+ 0x68
	ZZ_CLOCKCYCLES(10,0x8001C594);
ZZ_1BCC8_8CC:
	EMU_Write32(S0 + 100,A1); //+ 0x64
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3544); //+ 0xDD8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8001C5BC);
		goto ZZ_1BCC8_8F4;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3548); //+ 0xDDC
	ZZ_CLOCKCYCLES(10,0x8001C5C4);
	goto ZZ_1BCC8_8FC;
ZZ_1BCC8_8F4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3652); //+ 0xE44
	ZZ_CLOCKCYCLES(2,0x8001C5C4);
ZZ_1BCC8_8FC:
	A0 = 0x80060000;
	A0 += 3652;
	EMU_Write32(S0 + 104,V0); //+ 0x68
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 3544); //+ 0xDD8
	V0 = 0x2;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001C5E8);
		goto ZZ_1BCC8_920;
	}
	A0 -= 104;
	ZZ_CLOCKCYCLES(9,0x8001C5E8);
ZZ_1BCC8_920:
	EMU_Write32(A0,S0);
	ZZ_CLOCKCYCLES(1,0x8001C5EC);
ZZ_1BCC8_924:
	V0 = EMU_ReadU32(S0 + 32); //+ 0x20
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V1 = EMU_ReadU32(V0);
	V0 = 0x22;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(8,0x8001C69C);
		goto ZZ_1BCC8_9D4;
	}
	if (!S3)
	{
		ZZ_CLOCKCYCLES(10,0x8001C624);
		goto ZZ_1BCC8_95C;
	}
	EMU_Write32(S0 + 164,S3); //+ 0xA4
	EMU_Write32(S0 + 168,R0); //+ 0xA8
	EMU_Write32(S3 + 168,S0); //+ 0xA8
	ZZ_CLOCKCYCLES(14,0x8001C62C);
	goto ZZ_1BCC8_964;
ZZ_1BCC8_95C:
	EMU_Write32(S0 + 164,R0); //+ 0xA4
	EMU_Write32(S0 + 168,R0); //+ 0xA8
	ZZ_CLOCKCYCLES(2,0x8001C62C);
ZZ_1BCC8_964:
	A0 = 0x10000;
	A0 |= 0x9000;
	V0 = EMU_ReadU32(S0 + 132); //+ 0x84
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 6752); //+ 0x1A60
	V0 += A0;
	V0 = V0 - V1;
	EMU_Write32(S0 + 132,V0); //+ 0x84
	AT = 0x80060000;
	EMU_Write32(AT + 6748,S0); //+ 0x1A5C
	V0 = EMU_ReadU32(S2 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 732); //+ 0x2DC
	V0 &= 0x4;
	if (V0)
	{
		V0 = S0;
		ZZ_CLOCKCYCLES(17,0x8001C6A8);
		goto ZZ_1BCC8_9E0;
	}
	V0 = S0;
	V0 = EMU_ReadU32(S0 + 136); //+ 0x88
	V1 = EMU_ReadU32(S0 + 128); //+ 0x80
	V0 = (int32_t)V0 >> 4;
	V0 ^= V1;
	V0 &= 0x7;
	if (!V0)
	{
		EMU_Write32(S0 + 260,V0); //+ 0x104
		ZZ_CLOCKCYCLES(24,0x8001C69C);
		goto ZZ_1BCC8_9D4;
	}
	EMU_Write32(S0 + 260,V0); //+ 0x104
	V0 = EMU_ReadU32(S0 + 204); //+ 0xCC
	V1 = 0x10000000;
	V0 |= V1;
	EMU_Write32(S0 + 204,V0); //+ 0xCC
	ZZ_CLOCKCYCLES(28,0x8001C69C);
ZZ_1BCC8_9D4:
	V0 = S0;
	ZZ_CLOCKCYCLES(2,0x8001C6A8);
	goto ZZ_1BCC8_9E0;
ZZ_1BCC8_9DC:
	V0 = -14;
	ZZ_CLOCKCYCLES(1,0x8001C6A8);
ZZ_1BCC8_9E0:
	RA = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	SP += 48;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x80032210,ZZ_31EB4_35C);
	ZZ_JUMPREGISTER(0x800259FC,ZZ_25928_D4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001BCC8,0x8001BD0C,ZZ_1BCC8);
ZZ_MARK_TARGET(0x8001BD0C,0x8001BD38,ZZ_1BCC8_44);
ZZ_MARK_TARGET(0x8001BD38,0x8001BD40,ZZ_1BCC8_70);
ZZ_MARK_TARGET(0x8001BD40,0x8001BD7C,ZZ_1BCC8_78);
ZZ_MARK_TARGET(0x8001BD7C,0x8001BD90,ZZ_1BCC8_B4);
ZZ_MARK_TARGET(0x8001BD90,0x8001BDA0,ZZ_1BCC8_C8);
ZZ_MARK_TARGET(0x8001BDA0,0x8001BDB0,ZZ_1BCC8_D8);
ZZ_MARK_TARGET(0x8001BDB0,0x8001BDE4,ZZ_1BCC8_E8);
ZZ_MARK_TARGET(0x8001BDE4,0x8001BE08,ZZ_1BCC8_11C);
ZZ_MARK_TARGET(0x8001BE08,0x8001BE30,ZZ_1BCC8_140);
ZZ_MARK_TARGET(0x8001BE30,0x8001BE4C,ZZ_1BCC8_168);
ZZ_MARK_TARGET(0x8001BE4C,0x8001BE50,ZZ_1BCC8_184);
ZZ_MARK_TARGET(0x8001BE50,0x8001BE68,ZZ_1BCC8_188);
ZZ_MARK_TARGET(0x8001BE68,0x8001BE70,ZZ_1BCC8_1A0);
ZZ_MARK_TARGET(0x8001BE70,0x8001BEA0,ZZ_1BCC8_1A8);
ZZ_MARK_TARGET(0x8001BEA0,0x8001BED0,ZZ_1BCC8_1D8);
ZZ_MARK_TARGET(0x8001BED0,0x8001BF00,ZZ_1BCC8_208);
ZZ_MARK_TARGET(0x8001BF00,0x8001BF14,ZZ_1BCC8_238);
ZZ_MARK_TARGET(0x8001BF14,0x8001BF24,ZZ_1BCC8_24C);
ZZ_MARK_TARGET(0x8001BF24,0x8001BF3C,ZZ_1BCC8_25C);
ZZ_MARK_TARGET(0x8001BF3C,0x8001BF60,ZZ_1BCC8_274);
ZZ_MARK_TARGET(0x8001BF60,0x8001BF68,ZZ_1BCC8_298);
ZZ_MARK_TARGET(0x8001BF68,0x8001BF8C,ZZ_1BCC8_2A0);
ZZ_MARK_TARGET(0x8001BF8C,0x8001BFA8,ZZ_1BCC8_2C4);
ZZ_MARK_TARGET(0x8001BFA8,0x8001BFC8,ZZ_1BCC8_2E0);
ZZ_MARK_TARGET(0x8001BFC8,0x8001BFD8,ZZ_1BCC8_300);
ZZ_MARK_TARGET(0x8001BFD8,0x8001BFE8,ZZ_1BCC8_310);
ZZ_MARK_TARGET(0x8001BFE8,0x8001BFFC,ZZ_1BCC8_320);
ZZ_MARK_TARGET(0x8001BFFC,0x8001C004,ZZ_1BCC8_334);
ZZ_MARK_TARGET(0x8001C004,0x8001C014,ZZ_1BCC8_33C);
ZZ_MARK_TARGET(0x8001C014,0x8001C024,ZZ_1BCC8_34C);
ZZ_MARK_TARGET(0x8001C024,0x8001C02C,ZZ_1BCC8_35C);
ZZ_MARK_TARGET(0x8001C02C,0x8001C034,ZZ_1BCC8_364);
ZZ_MARK_TARGET(0x8001C034,0x8001C06C,ZZ_1BCC8_36C);
ZZ_MARK_TARGET(0x8001C06C,0x8001C070,ZZ_1BCC8_3A4);
ZZ_MARK_TARGET(0x8001C070,0x8001C090,ZZ_1BCC8_3A8);
ZZ_MARK_TARGET(0x8001C090,0x8001C09C,ZZ_1BCC8_3C8);
ZZ_MARK_TARGET(0x8001C09C,0x8001C0A8,ZZ_1BCC8_3D4);
ZZ_MARK_TARGET(0x8001C0A8,0x8001C0D0,ZZ_1BCC8_3E0);
ZZ_MARK_TARGET(0x8001C0D0,0x8001C0F0,ZZ_1BCC8_408);
ZZ_MARK_TARGET(0x8001C0F0,0x8001C0FC,ZZ_1BCC8_428);
ZZ_MARK_TARGET(0x8001C0FC,0x8001C110,ZZ_1BCC8_434);
ZZ_MARK_TARGET(0x8001C110,0x8001C114,ZZ_1BCC8_448);
ZZ_MARK_TARGET(0x8001C114,0x8001C134,ZZ_1BCC8_44C);
ZZ_MARK_TARGET(0x8001C134,0x8001C174,ZZ_1BCC8_46C);
ZZ_MARK_TARGET(0x8001C174,0x8001C178,ZZ_1BCC8_4AC);
ZZ_MARK_TARGET(0x8001C178,0x8001C198,ZZ_1BCC8_4B0);
ZZ_MARK_TARGET(0x8001C198,0x8001C1A4,ZZ_1BCC8_4D0);
ZZ_MARK_TARGET(0x8001C1A4,0x8001C1B0,ZZ_1BCC8_4DC);
ZZ_MARK_TARGET(0x8001C1B0,0x8001C1D8,ZZ_1BCC8_4E8);
ZZ_MARK_TARGET(0x8001C1D8,0x8001C200,ZZ_1BCC8_510);
ZZ_MARK_TARGET(0x8001C200,0x8001C208,ZZ_1BCC8_538);
ZZ_MARK_TARGET(0x8001C208,0x8001C22C,ZZ_1BCC8_540);
ZZ_MARK_TARGET(0x8001C22C,0x8001C238,ZZ_1BCC8_564);
ZZ_MARK_TARGET(0x8001C238,0x8001C288,ZZ_1BCC8_570);
ZZ_MARK_TARGET(0x8001C288,0x8001C2C8,ZZ_1BCC8_5C0);
ZZ_MARK_TARGET(0x8001C2C8,0x8001C2DC,ZZ_1BCC8_600);
ZZ_MARK_TARGET(0x8001C2DC,0x8001C2EC,ZZ_1BCC8_614);
ZZ_MARK_TARGET(0x8001C2EC,0x8001C308,ZZ_1BCC8_624);
ZZ_MARK_TARGET(0x8001C308,0x8001C35C,ZZ_1BCC8_640);
ZZ_MARK_TARGET(0x8001C35C,0x8001C390,ZZ_1BCC8_694);
ZZ_MARK_TARGET(0x8001C390,0x8001C3AC,ZZ_1BCC8_6C8);
ZZ_MARK_TARGET(0x8001C3AC,0x8001C400,ZZ_1BCC8_6E4);
ZZ_MARK_TARGET(0x8001C400,0x8001C430,ZZ_1BCC8_738);
ZZ_MARK_TARGET(0x8001C430,0x8001C478,ZZ_1BCC8_768);
ZZ_MARK_TARGET(0x8001C478,0x8001C4AC,ZZ_1BCC8_7B0);
ZZ_MARK_TARGET(0x8001C4AC,0x8001C4E0,ZZ_1BCC8_7E4);
ZZ_MARK_TARGET(0x8001C4E0,0x8001C530,ZZ_1BCC8_818);
ZZ_MARK_TARGET(0x8001C530,0x8001C534,ZZ_1BCC8_868);
ZZ_MARK_TARGET(0x8001C534,0x8001C554,ZZ_1BCC8_86C);
ZZ_MARK_TARGET(0x8001C554,0x8001C560,ZZ_1BCC8_88C);
ZZ_MARK_TARGET(0x8001C560,0x8001C56C,ZZ_1BCC8_898);
ZZ_MARK_TARGET(0x8001C56C,0x8001C594,ZZ_1BCC8_8A4);
ZZ_MARK_TARGET(0x8001C594,0x8001C5BC,ZZ_1BCC8_8CC);
ZZ_MARK_TARGET(0x8001C5BC,0x8001C5C4,ZZ_1BCC8_8F4);
ZZ_MARK_TARGET(0x8001C5C4,0x8001C5E8,ZZ_1BCC8_8FC);
ZZ_MARK_TARGET(0x8001C5E8,0x8001C5EC,ZZ_1BCC8_920);
ZZ_MARK_TARGET(0x8001C5EC,0x8001C624,ZZ_1BCC8_924);
ZZ_MARK_TARGET(0x8001C624,0x8001C62C,ZZ_1BCC8_95C);
ZZ_MARK_TARGET(0x8001C62C,0x8001C69C,ZZ_1BCC8_964);
ZZ_MARK_TARGET(0x8001C69C,0x8001C6A4,ZZ_1BCC8_9D4);
ZZ_MARK_TARGET(0x8001C6A4,0x8001C6A8,ZZ_1BCC8_9DC);
ZZ_MARK_TARGET(0x8001C6A8,0x8001C6C8,ZZ_1BCC8_9E0);
