#include <iostream>

using namespace std;
class base {
    public:
        base () {cout << "base" << endl;}
};

class A : public base() {
    public :
        A () {};
}

int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
