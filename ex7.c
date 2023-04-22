#include "stdio.h"
#include "math.h"

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
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
    int i = 1;
    int index = 0;
    do
    {
        i++;
        if (isPrime(i))
        {
            index++;
            printf("%dth Prime Number = %d\n", index, i);
        }
    } while (index<10001);
}
