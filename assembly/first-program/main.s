.global main; // entry point must be global, so it can be visible outside of this program to be invoked at runtime.
.func main; // define our function named main.

main:
    mov r0, #10086; // move value 10086 to the register r0 (the return value)
    bx lr // branch link register, return from main.


