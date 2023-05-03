#include "stdio.h"

/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2^1000?
*/

// 2^1000 can be stored binary with a 1 followed by 1000 0s

int main()
{
    int total = 0;
    int digits[350] = {0}; // There are 302 digits in 2^1000, and we need some extra space for potential carry digits
    digits[0] = 1;

    for (int i = 0; i < 1000; i++)
    {
        int carry = 0;
        for (int j = 0; j < 350; j++)
        {
            int product = digits[j] * 2 + carry;
            digits[j] = product % 10;
            carry = product / 10;
        }
    }

    for (int i = 0; i < 350; i++)
    {
        total += digits[i];
    }

    printf("%d\n", total);

    return 0;
}
