//70. WAP to add first seven terms of the following series using for loop.
//1/1! + 2/2! + 3/3! + � + n/n!

#include <stdio.h>

int main()
{
    int i, j, fact = 1;
    float sum = 0.0;

    for(i = 1; i <= 7; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + (((float)i)/fact);
    }

    printf("The sum of the first seven terms is: %f", sum);

    return 0;
}
