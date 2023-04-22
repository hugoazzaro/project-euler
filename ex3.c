#include "stdio.h"
#include "math.h"

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

/*
https://www.geeksforgeeks.org/c-program-to-check-whether-a-number-is-prime-or-not/
This method is the best method to check prime numbers.
In mathematics, the smallest and greater than one factor of a number cannot be more than the square root of that number.
*/

int isPrime(int n)
{
    double sqroot = sqrt(n);
    for (int i = 2; i <= sqroot; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    long int n = 600851475143;
    double sqroot = sqrt(n);
    for (int i = 2; i <= sqroot; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
            {
                printf("%d\n", i);
            }
        }
    }
}
