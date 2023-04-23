#include "stdio.h"
#include "math.h"

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int isInteger(double val)
{
    int truncated = (int)val;
    return (val == truncated);
}

int main()
{
    for (int i = 3; i < 500; i++)
    {
        for (int j = 3; j < 500; j++)
        {
            double c = sqrt(i * i + j * j);
            if (isInteger(c) && i < j && j < c && i + j + c == 1000)
            {
                printf("%d\n", i * j * (int)c);
            }
        }
    }
}
