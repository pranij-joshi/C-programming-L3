//51. WAP that reads a number from user & calculate the factorial of that number.

#include <stdio.h>

int main()
{
    int n, factorial = 1, i;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("No factorial for negative numbers.");
    }

    else if(n == 0)
    {
        printf("The factorial of 0 is 1.");
    }

    else
    {
        for(i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
        printf("The factorial of %d is %d", n, factorial);
    }

    return 0;
}
