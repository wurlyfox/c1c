#ifdef ZZ_INCLUDE_CODE
ZZ_35370:
	T1 = AT << 16;
	T1 = (int32_t)T1 >> 16;
	T0 = (int32_t)T1 < (int32_t)A0;
	if (!T0)
	{
		T0 = (int32_t)A1 < (int32_t)T1;
		ZZ_CLOCKCYCLES(5,0x80035388);
		goto ZZ_35370_18;
	}
	T0 = (int32_t)A1 < (int32_t)T1;
	A0 = T1;
	ZZ_CLOCKCYCLES(6,0x80035388);
ZZ_35370_18:
	if (!T0)
	{
		T0 = (int32_t)AT >> 16;
		ZZ_CLOCKCYCLES(2,0x80035394);
		goto ZZ_35370_24;
	}
	T0 = (int32_t)AT >> 16;
	A1 = T1;
	ZZ_CLOCKCYCLES(3,0x80035394);
ZZ_35370_24:
	T1 = (int32_t)T0 < (int32_t)A2;
	if (!T1)
	{
		T1 = (int32_t)A3 < (int32_t)T0;
		ZZ_CLOCKCYCLES(3,0x800353A4);
		goto ZZ_35370_34;
	}
	T1 = (int32_t)A3 < (int32_t)T0;
	A2 = T0;
	ZZ_CLOCKCYCLES(4,0x800353A4);
ZZ_35370_34:
	if (!T1)
	{
		ZZ_CLOCKCYCLES(2,0x800353B0);
		goto ZZ_353B0;
	}
	A3 = T0;
#endif
ZZ_MARK_TARGET(0x80035370,0x80035388,ZZ_35370);
ZZ_MARK_TARGET(0x80035388,0x80035394,ZZ_35370_18);
ZZ_MARK_TARGET(0x80035394,0x800353A4,ZZ_35370_24);
ZZ_MARK_TARGET(0x800353A4,0x800353B0,ZZ_35370_34);