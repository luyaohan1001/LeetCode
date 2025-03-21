#include <stdio.h>

extern void hello_from_cpp();

void helloworld(void) {
  hello_from_cpp();
  // printf("extern c helloworld\n");
}