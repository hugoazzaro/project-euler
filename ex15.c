#include "stdio.h"

/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
*/

/*
Combinatorics : branch of mathematics concerned with counting and arranging objects.
Central binomial coefficient : 2n "choose" n, where we have to find a number of ways of doing things in 2 separate groups of n quantity,
and where the order of doing it to find the result doesn't matter
in the case of this problem "n choose k" becomes "2n choose n"
*/

//n choose k = n! / (k! * (n-k)!)

// this way is way too expensive because we can't store the result of 40! without using too much memory
/*
long long int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
long long int choose(int _n, int _k)
{
    long long int n = factorial(_n), k = factorial(_k), nk = factorial(_n-_k);
    return (n / (k * nk));
}*/

//pascal's triangle cant help us find the binomial coefficient of n and k by storing the results of the previous binomial coefficients and adding the two above

long int binomial(int _n, int _k)
{
    long int array[_n+1][_k+1];
    for (int i = 0; i <= _n; i++)
    {
        array[i][0] = 1;
    }
    for (int j = 1; j <= _k; j++)
    {
        array[0][j] = 0;
    }
    for (int i = 1; i <= _n; i++)
    {
        for (int j = 1; j <= _k; j++)
        {
            array[i][j] = array[i-1][j-1] + array[i-1][j];
        }
    }
    return array[_n][_k];    
}

int main()
{
    printf("%ld\n", binomial(40, 20));
}