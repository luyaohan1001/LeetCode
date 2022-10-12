.global main; // entry point must be global
.func main; // main is the function

main:
    mov r0, #10086; // move value 10086 to the register r0
    bx lr // branch link register, return from main.


