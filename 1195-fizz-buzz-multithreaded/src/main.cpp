#include <iostream>
#include <functional>
#include <thread>
#include <atomic>

class FizzBuzz {
private:
    std::atomic_int i;
    std::thread t1,t2,t3,t4;
    int n;

public:
    FizzBuzz(int n) {
        this->n = n;
        t1 = std::thread(&FizzBuzz::fizz, this);
        t2 = std::thread(&FizzBuzz::buzz, this);
        t3 = std::thread(&FizzBuzz::fizzbuzz, this);
        t4 = std::thread(&FizzBuzz::number, this);
    }

    // printFizz() outputs "fizz".
    void fizz() {
        // std::cout << "fizz" << std::endl;
        std::cout << n << std::endl;
        n++;
    }

    // printBuzz() outputs "buzz".
    void buzz() {
        // std::cout << "buzz" << std::endl;
        std::cout << n << std::endl;
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz() {
        std::cout << "fizzbuzz" << std::endl;
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number() {
        std::cout << "number" << std::endl;
    }

    ~FizzBuzz() {
        t1.join();
        t2.join();
        t3.join();
        t4.join();
    }
};

int main(int argc, char const *argv[])
{   
    FizzBuzz fb(3);
    return 0;
}
