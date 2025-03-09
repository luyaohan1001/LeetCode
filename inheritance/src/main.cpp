#include <iostream>

using namespace std;

class base {
    public:
    base () {
        cout << "base constructor called" << endl;
    }

    virtual void echo() {
        cout << "I'm BASE" << endl;
    }
};

class derived : public base{
    public:
    derived () {
        cout << "derived constructor called" << endl;
    }

    void echo () override {
        cout << "I'm DERIVED" << endl;
    }
};

int main(int argc, char const *argv[])
{
    derived d;
    base&b = d;
    base*c = &d;
    b.echo();
    c->echo();
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
