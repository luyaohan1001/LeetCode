#include <iostream>
#include <memory>

using namespace std;

class base {
    public:
    const int c;
    static int STATIC_NUM;
    base(int x): c(x) {}

    base (): c(10) {
        cout << "base constructor called" << endl;
    }

    virtual void echo() {
        cout << "I'm BASE" << endl;
    }
};

int base::STATIC_NUM = 10;

class derived : public base{
    public:
    derived () {
        cout << "derived constructor called" << endl;
    }

    void echo () override {
        cout << "I'm DERIVED" << endl;
    }
};

class parent {
    public:
        parent() = default;
        static int STATIC_INT;
        virtual void method() { // cannot use virtual keyword with static method
            cout << "parent method" << endl;
        }
    private:
};

int parent::STATIC_INT = 10;

class child : public parent {
    public:
        child() = default;
        void method() override {
            cout << "child method" << endl;
        }
};

int main(int argc, char const *argv[])
{
    derived d;
    base&b = d;
    base*c = &d;
    b.echo();
    c->echo();

    unique_ptr<parent> ptr = make_unique<parent>();
    ptr->method();




    std::cout<< "Hello World!" << std::endl;
    return 0;
}
