#include "stdio.h"
#include "math.h"

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
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
    long int total = 0;
    for (long int i = 2; i < 2000000; i++) // cause 1 doesn't count
    {
        if (isPrime(i))
        {
            total += i;
        }
    }
    printf("%ld\n", total);
}
