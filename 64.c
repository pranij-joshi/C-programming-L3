//64. WAP that will read two numbers ,display the following menu:
//Menu
//i. Summation
//j. Sum of squares
//k. Sum of cubes
//l. Product
//And perform task as per user’s choice (use switch statement)

#include <stdio.h>

int main()
{
    int a, b, sum, sum_of_square, sum_of_cube, product;
    char choice;

    printf("Enter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for b: ");
    scanf("%d", &b);

    sum = a + b;
    sum_of_square = (a*a)+(b*b);
    sum_of_cube = (a*a*a)+(b*b*b);
    product = a*b;

    printf("Enter \n\t 'i' for summation.\n \t 'j' for sum of squares.\n");
    printf("\t 'k' for sum of cubes.\n \t 'l' for product.\n");

    printf("Enter your choice: ");
    scanf("%s", &choice);

    switch (choice)
    {
    case 'i':
        printf("The sum of the numbers is: %d", sum);
        break;

    case 'j':
        printf("The sum of the squares of the numbers is: %d", sum_of_square);
        break;

    case 'k':
        printf("The sum of the cubes of the numbers is: %d", sum_of_cube);
        break;

    case 'l':
        printf("The product of the numbers is: %d", product);
        break;

    default:
        printf("Error");
        break;
    }

    return 0;
}
