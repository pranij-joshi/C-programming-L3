//48. WAP to find sum of odd numbers and even numbers from 1 to 100.

#include <stdio.h>

int main()
{
    int i;
    int sum_even = 0, sum_odd = 0;

    for(i = 1; i <= 100; i++)
    {
        if(i%2 == 0)
        {
            sum_even = sum_even + i;
        }

        else
        {
            sum_odd = sum_odd +i;
        }
    }

    printf("The sum of the even numbers is: %d\n\n", sum_even);
    printf("The sum of the odd numbers is: %d\n\n", sum_odd);

    return 0;
}
