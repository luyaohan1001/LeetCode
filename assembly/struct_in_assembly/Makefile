CC=gcc 
CFLAGS=-fverbose-asm
ASMFLAGS=-g

executable: clean main.o disassemble
	$(CC) $(CFLAGS) main.o -o executable

main.o:
	$(CC) -c main.c -o main.o

disassemble:
	objdump -D main.o > disassembled.txt

clean:
	rm -rf main.o executable disassembled.txt

run:
	./main