#include <iostream>

using namespace std;

template<typename T>
T adder(T in1, T in2) {
    return in1 + in2;
}

template<typename T>
T adder(T& in1, T& in2) {
    return in1 + in2;
}

// Full specialization for const char*, but should not mention template<> here
std::string adder(const char* in1, const char* in2) {
    return std::string(in1) + std::string(in2);
}

int main(int argc, char const *argv[])
{
    int out = adder(10, 20);
    std::cout<< "out: " << out << std::endl;

    string s3 = adder(string("hello"), string("world"));
    cout << "s3: " << s3 << endl;

    string s4 = adder("welcome", "home");
    cout << "s4: " << s4 << endl;
    return 0;
}
