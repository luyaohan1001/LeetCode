#include <iostream>

using namespace std;

int atoi(const char *arr, int len) {
    int s = 0;
    for (int i = 0; i < len; ++i) {
        s *= 10;
        s += arr[i] - '0';
    }
    return s;
}

int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;

    int res = atoi("1234", 4);
    cout << "atoi: " << res << endl;
    return 0;
}
