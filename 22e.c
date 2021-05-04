//22.Solve the following problem using ternary operator.
//e. WAP to find whether the given number is positive or negative.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("The number is negative");
    }

    else if(n>0)
    {
        printf("The number is positive");
    }

    else
    {
        printf("Zero is neither positive or negative.");
    }

    return 0;
}
