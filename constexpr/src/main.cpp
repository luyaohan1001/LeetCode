#include <iostream>

using namespace std;

// constexpr does NOT guarantee that function is evaluated at compile time
constexpr int compute_muls(int a, int b) {
    return a * b;
}

int main(int argc, char const *argv[])
{
    std::cout << "output from compute muls of: " << 10 << " " << 11 << " " << compute_muls(10, 11) << endl;
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
