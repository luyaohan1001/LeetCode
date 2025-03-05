CC=gcc
CFLAGS= -g -pg -ftest-coverage
LDFLAGS=-Wl,-MAP=final.map

target:	
	$(CC) $(CFLAGS) $(LDFLAGS) main.c -o main

.PHONY: clean

.PHONY: objdump

clean:
	rm -rf main

diassemble:
	objdump -d main > objdumped.txt

prof:
	gprof main gmon.out > gprof_result.txt

coverage: run
	gcov main

run:
	./main
