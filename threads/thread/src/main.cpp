#include <iostream>
#include <thread>

using namespace std;

uint32_t num = 0;

mutex m1;

void func1() {
    m1.lock();
    cout << "func 1 " << endl;
    for (uint32_t i = 0; i < 10; ++i) {
        num += 1;
    }
    cout << "num: " << num << endl;
}

void func2() {
    m1.lock();
    cout << "func 2 " << endl;
    for (uint32_t i = 0; i < 10; ++i) {
        num += 1;
    }
    cout << "num: " << num << endl;
}


int main(int argc, char const *argv[])
{
    thread t1(func1);
    thread t2(func2);
    t1.join();
    t2.join();
    return 0;
}
