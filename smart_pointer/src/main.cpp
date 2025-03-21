#include <iostream>
#include <memory>

using namespace std;

class man {
    public:
        int age;
        int gender;
};

int main(int argc, char const *argv[])
{
    using class_name = man;
    unique_ptr<class_name> ptr = make_unique<man>();

    condition_variable cv;
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
