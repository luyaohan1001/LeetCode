#include <iostream>

class Foo {
    public:
        condition_variable cv2, cv3;
        bool cv2_ready, cv3_ready;
        mutex m;
        Foo() : cv2_ready(false), cv3_ready(false) {
        }
    
        void first(function<void()> printFirst) {
            // printFirst() outputs "first". Do not change or remove this line.
            printFirst();
            cv2_ready = true;
            cv2.notify_one();
        }
    
        void second(function<void()> printSecond) {
            unique_lock<mutex> lk(m);
            cv2.wait(lk, [this](){return cv2_ready == true;});
            // printSecond() outputs "second". Do not change or remove this line.
            printSecond();
            cv3_ready = true;
            cv3.notify_one();
        }
    
        void third(function<void()> printThird) {
            unique_lock<mutex> lk(m);
            cv3.wait(lk, [this]() {return cv3_ready == true;});
            // printThird() outputs "third". Do not change or remove this line.
            printThird();
        }
    };

int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
