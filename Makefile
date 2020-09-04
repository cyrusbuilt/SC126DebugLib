CC := zcc
CFLAGS := +cpm -lm -create-app
SOURCES := dbgtest.c sc126debug.c

all: dbgtest.com

dbgtest.com: $(SOURCES) Makefile
	$(CC) $(CFLAGS) -o $@ $(SOURCES)

clean:
	rm -rf *.COM *.com *.o *.map *.err *.lis