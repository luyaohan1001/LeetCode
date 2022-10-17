.data
array:
    .word 0x00000011
    .word 0x00000022
    .word 0x00000033
    .word 0x00000044
    .word 0x00000055

.text
.global main

main:
    mov r0, #1;
    mov r1, #5;
    ldr r2, =array;
    mov r3, #0

set_zero:
    str r3, [r2]
    add r2, #4
    add r0, #1
    cmp r0, r1 
    bne set_zero
    bx lr; // exit statement.

