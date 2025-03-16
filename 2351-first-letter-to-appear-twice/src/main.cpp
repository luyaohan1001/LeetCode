#include <iostream>


class Solution {
    public:
        char repeatedCharacter(string s) {
            uint32_t dict = 0;
            for (int i = 0; i < s.size(); ++i) {
                if (dict & (1 << (s[i] - 'a'))) {
                    return s[i];
                } else {
                    dict |= (1 << (s[i] - 'a'));
                }
            }
            return 'a';
        }
    };



int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
