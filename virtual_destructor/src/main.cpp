#include <iostream>

using namespace std;
class parent {
    public:
    virtual void echo() {
        cout << "parent echo" << endl;
    }
    virtual ~parent() { // declare virtual destructor allow both parent and child to be released
        cout << "parent destroyed" << endl;
    }
};

class child : public parent {
    public:
    virtual void echo() { // override key word is optional.
        cout << "child echo" << endl;
    }
    ~child() {
        cout << "child destroyed" << endl;
    }
};

int main(int argc, char const *argv[])
{
    // parent p;
    parent *p = new child();
    // p.echo();
    // c.echo();
    std::cout<< "Hello World!" << std::endl;
    delete p;
    return 0;
}
