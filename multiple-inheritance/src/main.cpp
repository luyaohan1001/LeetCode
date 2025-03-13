#include <iostream>

class A {
public:
    int x;
    A(int val) : x(val) {}
};

class B {
public:
    int y;
    B(int val) : y(val) {}
};

class common_child : public A, public B {
public:
    common_child(int valA, int valB) : A(valA), B(valB) {}

    // Assignment operator
    common_child& operator=(const common_child& origin) {
        if (this != &origin) {  // Self-assignment check
            A::x = origin.A::x;  // Copy A's part
            B::y = origin.B::y;  // Copy B's part
        }
        return *this;  // Return the current object (allows chained assignment)
    }

    void print() const {
        std::cout << "A.x: " << A::x << ", B.y: " << B::y << std::endl;
    }
};

int main() {
    common_child obj1(10, 20);
    common_child obj2(30, 40);

    obj2 = obj1;  // Calls the assignment operator

    obj2.print();  // Output: A.x: 10, B.y: 20

    return 0;
}
