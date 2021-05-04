//69. WAP to find the number of and sum of all integers greater than 100 and less than 200 that are exactly divisible by 7
//but not by 5.

#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 100; i < 200; i++)
    {
        if(i%7 == 0 && i%5 != 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\nThe sum of the numbers is: %d", sum);

    return 0;
}
