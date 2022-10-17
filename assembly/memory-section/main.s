/* ---- Data Section ---- */
.data
myvar1: .word 0
myvar2: .word 0

/* ---- Code Section ---- */
.text  /* equivalent to .func main */
.global main 
main:
    ldr r1, =myvar1
    ldr r1, [r1]
    ldr r2, =myvar2
    ldr r2, [r2]
    add r0, r1, r2
    bx lr
