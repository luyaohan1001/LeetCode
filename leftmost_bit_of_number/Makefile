CC=gcc
CFLAGS= -g -pg -ftest-coverage

target:	
	$(CC) $(CFLAGS) main.c -o main

.PHONY: clean

.PHONY: objdump

clean:
	rm -rf main

disassemble:
	objdump -d main > disassembled.txt

prof:
	gprof main gmon.out > gprof_result.txt

coverage: run
	gcov main

run:
	./main
