//84. WAP to calculate the factorial of a given number by using recursive function.

#include <stdio.h>

int recursive_factorial(int a);

int main()
{
    int num, fact;

    printf("Enter a number to compute the factorial of: ");
    scanf("%d", &num);

    fact = recursive_factorial(num);
    printf("The factorial of %d is: %d", num, fact);

    return 0;
}

int recursive_factorial(int a)
{
    int b = 1;

    if(a < 0)
    {
        printf("No factorial for negative numbers.");
        printf("\n");
        b = 0;
    }
    else if (a == 0)
    {
        b = 1;
    }

    else
    {
        b = a * recursive_factorial(a-1);
    }

    return b;
}
