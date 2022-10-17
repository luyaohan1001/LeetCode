.data
string:
    .asciz "Hello World! Simple Print using puts successful!"

.text
.global main


main:
    ldr r0, =string
    bl puts
    bx lr

