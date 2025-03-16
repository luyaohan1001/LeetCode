#include <iostream>

using namespace std;

class parent {

    friend void peek_parent_money(parent* p);

    public:
        int age;
        int fav_number;

        virtual void call_protected_method() {
            cout << "parent call protected method" << endl;
        }



    protected:
        int money = 100;
};

void peek_parent_money(parent* p) {
    cout << "peek parent money: " << p->money << endl;
}


class child : public parent {
    public:

    virtual void call_protected_method() override {
        cout << "child call protected method" << endl;
    }
    void find_money() {
        cout << this->money << endl;
    }
};


int main(int argc, char const *argv[])
{
    child *c = new child;
    parent *p = c;
    p->call_protected_method();
    peek_parent_money(p);
    c->find_money();
    delete c;
    return 0;
}
