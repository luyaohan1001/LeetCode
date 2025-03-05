CC=gcc
CFLAGs=-std=c11 \
	-g \
	# -fprofile-arcs \
	# -ftest-coverage 


target:
	$(CC) $(CFLAGs) main.c -o main 

.PHONY: clean

clean:
	rm -rf main main*g* disassemble.txt

disassemble:
	objdump -d main > disassembled.txt

debug:
	gdb main

run:
	./main