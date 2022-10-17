#include <stdio.h>

const unsigned int STACK_CAPACITY = 65536;
typedef struct {
    int body[STACK_CAPACITY];
    int index;
    void (* initialize)(void);
    int (* push)(int);
    int (* pop)(int);
} stack_t;


int main() {
    return 0;
}
