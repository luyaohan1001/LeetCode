#include <iostream>

using namespace std;

void (*echo)();

void func00(int a, int b) {
    cout << "func00" << endl;
}

void func01(int a, int b) {
    cout << "func01" << endl;
}

void func10(int a, int b) {
    cout << "func10" << endl;
}

void func11(int a, int b) {
    cout << "func11" << endl;
}

void (*p_func[2][2])(int, int) = { {&func00, &func01}, {&func10, &func11} };

void echo_impl() {
    cout << "myclass echo" << endl;
}

int main(int argc, char const *argv[])
{
    echo = echo_impl;
    echo();
    p_func[0][0](1, 2);
    p_func[1][1](3, 4);
    return 0;
}
