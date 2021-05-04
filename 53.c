//53. WAP to read a number and check whether it is prime or not.

#include <stdio.h>

int main()
{
    int n, i;
    int isPrime = 1;

    printf("Enter a number to check for prime: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n%2 == 0)
        {
            isPrime = 0;
        }
    }

    if(isPrime == 1)
    {
        printf("The number %d, is prime.", n);
    }
    else
    {
        printf("The number %d, is not prime.", n);
    }

    return 0;
}
