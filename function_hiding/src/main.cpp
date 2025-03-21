#include <iostream>


using namespace std;

class base {
    public:
        void method(){cout << "parent method" << endl;}
};

class derived : base {
    public:
    using base::method;
        //int method(int a){ cout << "derived method" << endl;}
};

int main(int argc, char const *argv[])
{
    derived d;
    d.method();
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
