//131. WAP that use a function called factorial(). This function takes a number as an argument & returns the factorial
//value of the inputted number. Use pointer and function.

#include <stdio.h>

int factorial(int *a);

int main()
{
    int num, fact;

    printf("Enter a number to compute the factorial of: ");
    scanf("%d", &num);

    fact = factorial(&num);

    printf("The factorial of %d is: %d", num, fact);

    return 0;
}

int factorial(int *a)
{
    int i;
    int fact = 1;

    if(*a < 0)
    {
        printf("No factorial for negative numbers.");
    }

    else
    {
        for(i = 1; i <= *a; i++)
        {
            fact = fact * i;
        }
    }

   return fact;
}
