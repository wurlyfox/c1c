#include "core.h"
#include <stdio.h>
#include "emu.h"

void CORE_VSync(int32_t count,int32_t timeout)
{
	timeout <<= 15;
	while ((int32_t)EMU_ReadU32(0x8005DF30) < count)
	{
		if (!timeout--)
		{
			EMU_Invoke(0x80049424,1,0x80010CE0);
			EMU_Invoke(0x8004A054,1,0);
			EMU_Invoke(0x8004A900,2,3,0);
			break;
		}
		EMU_Cycle(20);
		uint32_t pc = EMU_RunInterrupts(0xDEADBEEF);
		while (pc != 0xDEADBEEF)
		{
			if (pc & 3)
				fprintf(stderr,"Unaligned program counter.\n");
			pc = EMU_codemap[(pc & 0x1FFFFF) >> 2](pc);
		}
	}
}