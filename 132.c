//132. WAP that use a function called prime(). This function takes a number as an argument and returns 0, if the given
//argument is prime otherwise 1. Use pointer and function.

#include <stdio.h>

int prime(int *num);

int main()
{
    int num, flag = 0;
    printf("Enter the number to check for prime: ");
    scanf("%d", &num);

    flag = prime(&num);
    if(flag == 0)
    {
        printf("The number %d, is prime.", num);
    }
    else
    {
        printf("The number %d, is not prime.", num);
    }

    return 0;
}

int prime(int *num)
{
    int i, j;

    for(i = 2; i < *num; i++)
    {
        if(*num%i == 0)
        {
            j = 1;
        }
    }

    return j;
}
