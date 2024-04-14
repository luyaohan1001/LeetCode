#include <iostream>
#include <string>

using namespace std;

class Solution {
private:
    typedef struct {
        int sum;
        int carry;
    } bit_adder_result;

    bit_adder_result res;
public:

    Solution() {
        res.sum = 0;
        res.carry = 0;
    }

    inline void single_bit_add(char c1, char c2) {
        int temp = (c1 - '0') + (c2 - '0') + res.carry;
        res.carry = temp / 2;
        res.sum = temp % 2;
    }

    string addBinary(string a, string b) {
        std::string output = "";

        auto aa = a.rbegin(), bb = b.rbegin();

        // iterate both strings reverse order.
        for (; (aa != a.rend()) && (bb != b.rend()); aa++, bb++) {
            single_bit_add(*aa, *bb);
            output += static_cast<char>(res.sum + '0') + output;
        }

        // If residue exists for a
        for (; aa != a.rend(); aa++) { 
            single_bit_add(*aa, '0');
            output = static_cast<char>(res.sum + '0') + output;
        }

        // If residue exists for b
        for (; bb != b.rend(); bb++) { 
            single_bit_add('0', *bb);
            output = static_cast<char>(res.sum + '0') + output;
        }

        // Non zero carry to be appended
        if (res.carry) {
            output = static_cast<char>(res.carry + '0') + output;
        }

        return output;
    }
};

int main(int argc, char const *argv[])
{
    string s1 = "1010";
    string s2 = "101";

    std::unique_ptr<Solution> p_solution(new Solution);
    string result = p_solution->addBinary(s1, s2);

    cout << result << endl;
    return 0;
}
