CFLAGS = -g
ASMFLAGS = -g
target:
	as $(ASMFLAGS) main.s -o main.o
	gcc $(CFLAGS) main.o -o main

disassemble:
	objdump -d main > disassembled.txt
