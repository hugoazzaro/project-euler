#include "stdio.h"
#include "string.h"

/*
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
The use of "and" when writing out numbers is in compliance with British usage.
*/

char *numbers[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                   "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
                   "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety",
                   "hundred", "thousand"};

int letters(int n)
{
    int count = 0;
    if (n >= 1000)
    {
        count += strlen(numbers[n / 1000]) + strlen(numbers[29]);
        n %= 1000;
    }
    if (n >= 100)
    {
        count += strlen(numbers[n / 100]) + strlen(numbers[28]);
        n %= 100;
        if (n > 0)
        {
            count += strlen("and");
        }
    }
    if (n >= 20)
    {
        count += strlen(numbers[n / 10 + 18]);
        n %= 10;
    }
    if (n > 0)
    {
        count += strlen(numbers[n]);
    }
    return count;
}

int main()
{
    int total = 0;

    for (int i = 1; i <= 1000; i++)
    {
        total += letters(i);
    }

    printf("%d\n", total);

    return 0;
}
