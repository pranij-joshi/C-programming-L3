//22.Solve the following problem using ternary operator.
//a. WAP to read a number and print whether the number is even or odd.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n%2 == 0)
    {
        printf("The number is even.");
    }

    else
    {
        printf("The number is odd.");
    }

    return 0;
}

