//31.WAP to add two numbers and display their sum. The program must ask next two numbers and add till user wants.

#include <stdio.h>

int main()
{
    int n1, n2, sum;
    char again = 'y';

    printf("By using while loop.\n");
    sum = 0;


    while(again == 'y' || again == 'Y')
    {
        printf("Enter the value for n1: ");
        scanf("%d", &n1);

        printf("Enter the value for n2: ");
        scanf("%d", &n2);

        sum = n1 + n2;

        printf("\nThe sum of %d and %d is: %d\n", n1, n2, sum);

        printf("Enter y to do it again: ");
        scanf("%s", &again);
        printf("\n\n");
    }

    printf("\n-------------------------------------------\n");
    sum = 0;
    printf("By using do-while loop.\n");
    do
    {
        printf("Enter the value for n1: ");
        scanf("%d", &n1);

        printf("Enter the value for n2: ");
        scanf("%d", &n2);

        sum = n1 + n2;

        printf("\nThe sum of %d and %d is: %d\n", n1, n2, sum);

        printf("Enter y to do it again: ");
        scanf("%s", &again);
        printf("\n\n");
    }while(again == 'y' || again == 'Y');


    return 0;
}
