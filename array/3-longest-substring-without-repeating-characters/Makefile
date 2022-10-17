CC=gcc
CFLAGs=-std=c11 \
	-g \
	# -fprofile-arcs \
	# -ftest-coverage 

CCOV=

target:
# $(CC) $(CFLAGs) main.c -o main 
	$(CC) $(CFLAGs) main_linear_time.c -o main 

.PHONY: clean

clean:
	rm -rf main main*g*

diassemble:
	objdump -d main > diassembled.txt