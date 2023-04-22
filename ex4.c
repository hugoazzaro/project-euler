#include "stdio.h"

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int reverse(int n)
{
    int reversed = 0;
    int reste = 0;
    int m = n;
    while (m != 0)
    {
        reste = m % 10;
        reversed = reversed * 10 + reste;
        m /= 10;
    }
    return reversed;
}

int main()
{
    int result, reversed, max = 0;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            result = i * j;
            if (result == reverse(result))
            {
                if(result >max)
                {
                    max = result;
                }
            }
        }
    }
    printf("result = %d\n", max);
}
