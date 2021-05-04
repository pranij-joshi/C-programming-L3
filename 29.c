//29.WAP to calculate factorial of a number using all available loops.

#include <stdio.h>

int main()
{
    int i, n, factorial=1;

    printf("Enter a number to calculate the factorial: ");
    scanf("%d", &n);

    printf("By using for loop.\n");
    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("The factorial of %d is: %d", n, factorial);
    printf("\n-------------------------------------------\n");

    printf("By using while loop.\n");
    i = 1;
    factorial = 1;
    while(i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("The factorial of %d is: %d", n, factorial);

    printf("\n-------------------------------------------\n");
    i = 1;
    factorial = 1;
    printf("By using do-while loop.\n");
    do
    {
        factorial = factorial * i;
        i++;
    }while(i <= n);
    printf("The factorial of %d is: %d", n, factorial);

    return 0;
}
