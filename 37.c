//37. WAP to calculate:
//c. Sum
//d. Difference
//e. Multiplication
//f. Division
//of two numbers by reading the user’s choice.

#include <stdio.h>

int main()
{
    int n1, n2;
    char choice;

    printf("Enter:\n\t c for sum\n\t d for difference\n\t e for multiplication\n\t f for division\n");

    printf("Enter your choice: ");
    scanf("%c", &choice);


    printf("Enter a value for n1: ");
    scanf("%d", &n1);

    printf("Enter a value for n2: ");
    scanf("%d", &n2);

    switch (choice)
    {
    case 'c':
        printf("The sum of %d and %d is: %d", n1, n2, n1+n2);
        break;

    case 'd':
        printf("The difference of %d and %d is: %d", n1, n2, n1-n2);
        break;

    case 'e':
        printf("The product of %d and %d is: %d", n1, n2, n1*n2);
        break;

    case 'f':
        printf("The quotient of %d by %d is %d", n1, n2, n1/n2);
        break;

    default:
        printf("Error");
    }

    return 0;
}
