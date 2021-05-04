//32.WAP that identifies the number is odd or even.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    switch (n%2)
    {
    case 0:
        printf("Even");
        break;

    case 1:
        printf("Odd");
        break;
    }

    return 0;
}
