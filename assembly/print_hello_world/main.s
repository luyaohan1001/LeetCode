.data
message:
    .asciz "Hello World" // NULL terminated string

return: // store a word to store the return address
    .word 0

.text
.global main
main:
    // store the lr address for main, so that main can successfyly return.
    ldr r1, =return   // r1 <- &return
    str lr, [r1]      // *r1 = lr       

    // load argumemnt to puts function.
    ldr r0, =message  // r0 <- &message
    bl puts           // call to puts 
                      // lr <- address of next instruction
    // get back the lr address for main.
    ldr r1, =return   // r1 <- &return
    ldr lr, [r1]      // link register.
    bx lr

/* External */
.global puts





