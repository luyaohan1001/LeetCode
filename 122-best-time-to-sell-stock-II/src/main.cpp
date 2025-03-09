#include <iostream>

class Solution {
    public:
    // MAX_STOCK(0..n) = MAX_STOCK(0..1) +  MAX_STOCK(1..2) + MAX_STOCK(2..3)..etc
    //
        int maxProfit(vector<int>& prices) {
            int profit = 0;
            for (int i = 1; i < prices.size(); ++i) {
                int money = prices[i] - prices[i - 1];
                if (money >= 0) {
                    profit += money;
                }
            }
            return profit;
        }
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
