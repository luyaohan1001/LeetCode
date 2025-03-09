#include <iostream>

class Solution {
    public:
        int reverse(int x) {
            int rev = 0;
            while(x) {
                if (rev >= (pow(2, 31) / 10)) return 0;
                if (rev <= (-(pow(2, 31) / 10))) return 0;
                rev *= 10;
                rev += (x % 10);
                x /= 10;
            }
            return rev;
        }
    };

int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
