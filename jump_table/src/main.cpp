#include <iostream>

using namespace std;

void func1() {
    cout << "func1" << endl;
}


void func2() {
    cout << "func2" << endl;
}


void func3() {
    cout << "func3" << endl;
}


void func4() {
    cout << "func4" << endl;
}

void empty(){};

void (*func_t1[5])() = {func1, func2, empty, empty, empty};
void (*func_t2[5])() = {func1, func2, func3, func4, empty};

void (**func_table[2])() = {func_t1, func_t2};

int main(int argc, char const *argv[])
{
    int i = 0;
    while (i <= 4) {
        func_table[OPERATION][i]();
        ++i;
    }
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
