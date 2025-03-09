#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    float x = 0.5;
    int y;
    using mytype = int;
    mytype my;

    y = static_cast<double>(x);
    cout << x << endl;
    cout << y << endl;

    decltype(x) x_origin = static_cast<float>(x);
    cout << x_origin << endl;


    int z = static_cast<int>(x);

    double d = x;
    int i = static_cast<int>(d);


    std::cout<< "Hello World!" << std::endl;
    return 0;
}
