#include <iostream>

typedef enum {
    RED, GREEN, BLUE
} color_t;


int main(int argc, char const *argv[])
{
    using namespace std;

    color_t color = RED;
    cout << "color: " << color << endl;
    color_t&& ref_color = std::move(color);

    cout << "ref_color: " << ref_color << " color: " << color << endl;

    std::cout<< "Hello World!" << std::endl;
    return 0;
}
