#ifdef ZZ_INCLUDE_CODE
ZZ_31964:
	SP -= 24;
	V0 = EMU_ReadS16(GP + 608); //+ 0x260
	V1 = A0;
	V0 = (int32_t)V0 < 2;
	if (V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(6,0x8003199C);
		goto ZZ_31964_38;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	V0 = 0x1;
	if (A2 != V0)
	{
		V0 = (int32_t)A1 >> 16;
		ZZ_CLOCKCYCLES(9,0x800319A0);
		goto ZZ_31964_3C;
	}
	V0 = (int32_t)A1 >> 16;
	V0 = EMU_ReadU16(GP + 624); //+ 0x270
	EMU_Write16(V1 + 18,V0); //+ 0x12
	EMU_Write16(V1 + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(14,0x800319A8);
	goto ZZ_31964_44;
ZZ_31964_38:
	V0 = (int32_t)A1 >> 16;
	ZZ_CLOCKCYCLES(1,0x800319A0);
ZZ_31964_3C:
	EMU_Write16(V1 + 16,V0); //+ 0x10
	EMU_Write16(V1 + 18,A1); //+ 0x12
	ZZ_CLOCKCYCLES(2,0x800319A8);
ZZ_31964_44:
	V0 = -1;
	A0 = EMU_ReadS16(GP + 600); //+ 0x258
	A1 = A2 << 16;
	EMU_Write16(V1,A2);
	A2 = EMU_ReadS16(V1 + 16); //+ 0x10
	A3 = EMU_ReadS16(V1 + 18); //+ 0x12
	A1 = (int32_t)A1 >> 16;
	RA = 0x800319CC; //ZZ_31964_68
	EMU_Write32(V1 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(9,0x8004CD58);
	goto ZZ_4CD58;
ZZ_31964_68:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80031760,ZZ_314C4_29C);
	ZZ_JUMPREGISTER(0x80031748,ZZ_314C4_284);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80031964,0x8003199C,ZZ_31964);
ZZ_MARK_TARGET(0x8003199C,0x800319A0,ZZ_31964_38);
ZZ_MARK_TARGET(0x800319A0,0x800319A8,ZZ_31964_3C);
ZZ_MARK_TARGET(0x800319A8,0x800319CC,ZZ_31964_44);
ZZ_MARK_TARGET(0x800319CC,0x800319DC,ZZ_31964_68);
