#include <iostream>
int main(int argc, char const *argv[])
{
    auto lambda_func0 = [](int a, int b) -> int {
        return a + b;
    };

    std::cout << lambda_func0(1, 2) << std::endl;

    // C is being captured from surround, a and b are passed. 
    int c = 420;
    auto lambda_func1 = [&c](int a, int b) -> int {
        return a + b + c;
    };
    std::cout << lambda_func1(1, 2) << std::endl;

    return 0;
}
