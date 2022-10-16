CC=gcc
CFLAGs=-std=c11 \
		-g \
		-lpthread 

LINTER=/home/luyaohan1001/Projects/cppcheck/addons/misra.py

target:
	$(CC) $(CFLAGs) main.c -o main 

.PHONY: clean

clean:
	rm -rf main main*g* disassemble.txt

disassemble:
	objdump -d main > disassembled.txt

debug:
	gdb main

misra_check:
	cppcheck --dump main.c
	$(LINTER) main.c.dump

run: target
	./main