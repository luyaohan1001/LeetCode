#include <iostream>

using namespace std;

class Solution {
    public:

        typedef union {
            struct {
                uint8_t sum : 4;
                uint8_t carry : 4;
            };
            uint8_t byte;
        } result_t;

        Solution() {
            bit_res.byte = 0;
        }


        char inline i2c(uint32_t i) {return i + '0';}
        uint32_t inline c2i(char c) {return c - '0';}

        result_t add_bit_sum(char c1, char c2, char carry) {
            result_t res;
            res.sum = (c1 ^ c2 ^ carry);
            res.carry = (c1 + c2 + carry) > 1;
            return res;
        }


        string add_binary(string a, string b) {
            string retstr = "";
            uint32_t sum = 0, carry = 0;
            for (auto charA = a.rbegin(), charB = b.rbegin(); charA != a.rend() && charB != b.rend(); ++charA, ++charB) {
                result_t res;
                res = add_bit_sum(*charA, *charB, i2c(carry));
                carry = c2i(res.carry);
                retstr.insert(retstr.begin(), i2c(res.sum));
            }
            return retstr;
        }


    private:
        result_t bit_res;
};

int main(int argc, char const *argv[])
{
    Solution sol;
    string a = "1011";
    string b = "0100";

    string res = sol.add_binary(a, b);
    cout << res << endl;
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
