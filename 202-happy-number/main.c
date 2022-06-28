#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int numSquareSum(int n)
{
    int rem = 0, sum = 0;
    while (n)
    {
        rem = n % 10;
        sum += pow(rem, 2);
        n /= 10;
    }
    return sum;
}

bool isHappy(int n)
{
    int slow, fast;
    slow = fast = n;
    do {
        slow = numSquareSum(slow);
        fast = numSquareSum(numSquareSum(fast)); //  floyds cycle finding algorithm

    } while (slow != fast); // check whether this number converges. 

    return (slow == 1);
}

void testIsHappy()
{
    int n = 10;
    printf("%d is a happy number: %s\n", n, isHappy(n) ? "true" : "false");

}


void main() 
{
    testIsHappy();

}