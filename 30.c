//30.WAP that asks an integer number n and calculate sum of all natural numbers from 1 to n using all available loops.

#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("Enter a number to calculate sum: ");
    scanf("%d", &n);

    printf("By using for loop.\n");
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of %d natural number is: %d", n, sum);
    printf("\n-------------------------------------------\n");

    printf("By using while loop.\n");
    i = 1;
    sum = 0;
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum  of %d natural number is: %d", n, sum);

    printf("\n-------------------------------------------\n");
    i = 1;
    sum = 0;
    printf("By using do-while loop.\n");
    do
    {
        sum = sum + i;
        i++;
    }while(i <= n);
    printf("The sum of %d natural number is: %d", n, sum);

    return 0;
}

