#include <iostream>

class Box {
    public:
        Box(int width) {
            this->width = width;
        }

        // A copy constructor does NOT have return type in C++.
        Box(Box& origin) {
            width = origin.width;
        }

        ~Box() {};

        Box& operator=(const Box& other) {
            if (this != &other) {
                this->width = other.width;
            }
            return *this;
        }

    private:
        int width;
};
int main(int argc, char const *argv[])
{
    Box b1(10);
    Box b2 = b1;
    Box b3(b1);
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
