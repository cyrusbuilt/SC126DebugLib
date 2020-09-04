/*
	dbgtest.c

	Test program for the SC126Debug library. This program sends all 256 possible
	8bit values (0 - 255) to the debug port. This program serves as both a unit
	test suite for the API, but also as a diagnostic utility for the debug port.
*/

#include "sc126debug.h"
#include <stdio.h>
#include <stdlib.h>

void main() {
	printf("\n\nSC126 Debug Port Test Program v1.0 by Cyrus Brunner\n\n");
	printf("Press any key to begin port test...\n");
	fgetc_cons();

	printf("Beginning SC126 debug port test (values 0 - 255)...\n\n");
	SC126Debug_clear();
	sleep(1);

	int val = 0;
	for (int i = 0; i < 256; i++) {
		SC126Debug_write(i);
		msleep(500);
		printf("Output value = %d\n", i);
	}

	SC126Debug_clear();
	printf("\nDONE!");
	exit(0);
}