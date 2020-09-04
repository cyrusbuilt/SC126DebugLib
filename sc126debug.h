/*
	SC126 Debug Port Z88DK library. This library is used to interface with
	the debug port on Stephen Cousins' SC126 SBC.

	v1.0

	Author:
		Cyrus Brunner <cyrusbuilt at gmail dot com>
*/

#ifndef _SC126DEBUG_H
#define _SC126DEBUG_H

#include <stdbool.h>
#include <sys/compiler.h>

/**
 * Writes an 8bit value to the debug port.
 * @param value An bit value (0 - 255).
 * @returns true if a valid 8 bit value was written; Otherwise, false.
 */
extern bool __LIB__ SC126Debug_write(int value) __smallc;
extern bool __LIB__ SC126Debug_write_callee(int value) __smallc __z88dk_callee;
#define SC126Debug_write(a) SC126Debug_write_callee(a)

/**
 * Clears the debug port (writes 0 to debug port switching all LEDs off).
 */
extern void __LIB__ SC126Debug_clear() __smallc;
extern void __LIB__ SC126Debug_clear_callee() __smallc __z88dk_callee;
#define SC126Debug_clear() SC126Debug_clear_callee()

#endif