#include <stdio.h>
#include <stdlib.h>
#include "sc126debug.h"

#define DEBUG_PORT_ADDRESS 13

bool SC126Debug_write(int value) __z88dk_fastcall {
	if (value >= 0 && value <= 255) {
		outp(DEBUG_PORT_ADDRESS, value);
		return true;
	}

	return false;
}

void SC126Debug_clear() __z88dk_fastcall {
	SC126Debug_write(0x00);
}