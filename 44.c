//44. WAP to calculate sum, difference, multiplication and division of two numbers by reading the user’s choice. Use
//if..else..if and switch case also.

#include <stdio.h>

int main()
{
    int n1, n2;
    char choice;

    printf("Enter:\n\t + for sum\n\t - for difference\n\t * for multiplication\n\t / for division\n");

    printf("Enter your choice: ");
    scanf("%c", &choice);

    printf("USING SWITCH CASE\n");

    printf("Enter a value for n1: ");
    scanf("%d", &n1);

    printf("Enter a value for n2: ");
    scanf("%d", &n2);

    switch (choice)
    {
    case '+':
        printf("The sum of %d and %d is: %d", n1, n2, n1+n2);
        break;

    case '-':
        printf("The difference of %d and %d is: %d", n1, n2, n1-n2);
        break;

    case '*':
        printf("The product of %d and %d is: %d", n1, n2, n1*n2);
        break;

    case '/':
        printf("The quotient of %d by %d is %d", n1, n2, n1/n2);
        break;

    default:
        printf("Error");
    }
    /////////////////////////////////////////////////////////////////////////
    printf("\n\n");
    printf("USING IF-ELSE STATEMENTS.\n");
    if(choice == '+')
    {
        printf("The sum of %d and %d is: %d", n1, n2, n1+n2);
    }

    else if(choice == '-')
    {
        printf("The difference of %d and %d is: %d", n1, n2, n1-n2);
    }

    else if(choice == '*')
    {
        printf("The product of %d and %d is: %d", n1, n2, n1*n2);
    }

    else if(choice == '/')
    {
        printf("The quotient of %d by %d is %d", n1, n2, n1/n2);
    }

    else
    {
        printf("Invalid Input!!");
    }

    return 0;
}
