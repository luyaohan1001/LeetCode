#include <iostream>
#include <memory>

using namespace std;

int&& some_func(int&& h) {
    h *= 100;
    return std::move(h);
}

class child {
    public:
};

int main(int argc, char const *argv[])
{
    int a = 7;
    int&& moved_a = std::move(a);

    a = 10;
    cout << "a: " << a << " moved_a: " << moved_a << endl;

    moved_a = 100;
    cout << "a: " << a << " moved_a: " << moved_a << endl;

    cout << some_func(23) << endl;


    std::cout<< "Hello World!" << std::endl;
    return 0;

    unique_ptr<child> ptr = make_unique<child>();
}
