#include <iostream>
#include <string>
#include <vector>

class Solution {
private:
    std::vector<std::string> answer;
public:
    std::vector<std::string> fizzBuzz(int n) {
        for (int i = 1; i <= n; ++i) {
            if ( ((i % 3) == 0) && ((i % 5) == 0)) {
                this->answer.push_back("FizzBuzz");
            } else if ((i % 3) == 0) {
                this->answer.push_back("Fizz");
            } else if ((i % 5) == 0) {
                this->answer.push_back("Buzz");
            } else {
                this->answer.push_back(std::to_string(i));
            }
        }
        return this->answer;
    }

    void print_fizzbuzz() const {
        for (auto e : answer) {
            std::cout << e << " ";
        }
        std::cout << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    solution.fizzBuzz(10);
    solution.print_fizzbuzz();
    return 0;
}
