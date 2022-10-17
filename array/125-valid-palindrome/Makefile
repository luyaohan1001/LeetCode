CC=gcc
CFLAGs=-std=c11 \
	-g

CCOV=-fprofile-arcs -ftest-coverage

target:
	$(CC) $(CCOV) $(CFLAGs) main.c -o main 


.PHONY: clean

clean:
	rm -rf main main*g*