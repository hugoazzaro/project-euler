#include "stdio.h"

/*
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is $3025 - 385 = 2640$.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int SumOfSquare(int n)
{
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += i*i;
    }
    return result;
}

int SquareOfTheSum(int n)
{
    int result = 0;
    for (int i = 0; i <= n; i++)
    {
        result += i;
    }
    return (result * result);
}

int main()
{
    printf("%d\n", SumOfSquare(100));
    printf("%d\n", SquareOfTheSum(100));
    printf("%d\n", (SquareOfTheSum(100) - SumOfSquare(100)));
    return 0;
}
