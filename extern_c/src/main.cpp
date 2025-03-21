// #include <iostream>


// Function that differ only in their return type cannot be overloaded

/*
1. Cannot extern overloaded function using extern "C"

*/


// extern "C" void helloworld(int a) {
// 
// }

extern "C" void helloworld(void);

extern "C" void hello_from_cpp() {
    // std::cout << "hello from cpp" << std::endl;
}

static int abcasdkjabksjdnak(int a) {
    return a = 10;
}

int main(int argc, char const *argv[])
{
    int c = abcasdkjabksjdnak(10);
    helloworld();
    // std::cout<< "Hello World!" << std::endl;
    return 0;
}
