//82. WAP that use a function called prime(). This function takes a number as an argument and returns 0, if the given
//argument is prime otherwise 1.

#include <stdio.h>

int prime(int a);

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = prime(num);

    if(result == 0)
    {
        printf("%d is a prime number.", num);
    }

    else
    {
        printf("%d is not a prime number.", num);
    }


    return 0;
}

int prime(int a)
{
    int i;
    for(i = 2; i < a; i++)
    {
        if(a%i==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
