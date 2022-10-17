ASMFLAGS = -g
target:
	as $(ASMFLAGS) main.s -o main.o
	gcc main.o -o main

disassemble:
	objdump -d main > disassembled.txt

run:
	./main