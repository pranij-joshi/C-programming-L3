//23.WAP to ask a number from user and test whether the number is negative

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a<0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is positive");
    }

    return 0;
}
