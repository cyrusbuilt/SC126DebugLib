# SC126DebugLib
Z88DK-based wrapper API for the debug port on [Stephen Cousins'](https://scc.me.uk) [SC126 SBC](https://smallcomputercentral.wordpress.com/sc126-z180-motherboard-rc2014/).

## Synopsis
This is just a very simple library for interfacing with SC126's debug port in C/C++ using the [Z88DK](https://www.z88dk.org/). It's mostly just a wrapper around the outp() and inp() functions in stdio.h.

## API
bool SC126Debug_write(int value) - Write a value to the debug port. This is an 8bit value (0 - 255).

void SC126Debug_clear() - Clears the debug port (writes 0x00 to the debug port, turning all LEDs off).

## Test program
dbgtest.c is a command line test program for the SC126 debug port that was intended to run on CP/M. To build, run:

```
make all
```

This will produce an executable called DBGTEST.COM. You can then trasfer this to your SC126. When the program runs, it outputs values 0 - 255 to the debug port. Once it has processed all 255 values, then the program terminates. You will see both the debug port LEDs on the board flashing as the values are processed.

## Usage
Simply include the sc126debug.h and sc126debug.c files in your project then add then following where needed:

```c
#include "sc126debug.h"
```

I have personally tested this on CP/M 2.2 (ROMWbW) running on the SC126.