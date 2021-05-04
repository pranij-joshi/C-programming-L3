//33.WAP that takes 3 numbers & print the largest among them.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a value for a: ");
    scanf("%d", &a);

    printf("Enter a value for b: ");
    scanf("%d", &b);

    printf("Enter a value for c: ");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        printf("%d is the largest number.", a);
    }

    else if (b>a && b>c)
    {
        printf("%d is the largest number.", b);
    }

    else
    {
        printf("%d is the largest number.", c);
    }

    return 0;
}
