//77. WAP to read 2 numbers and print the largest number using function with argument and return type.

#include <stdio.h>

float largest_num(float a, float b);

int main()
{
    float num1, num2;
    float largest;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    largest = largest_num(num1, num2);
    printf("\n");
    printf("The largest number between %lf and %lf is %lf.", num1, num2, largest);

    return 0;
}


float largest_num(float a, float b)
{
    float c;

    if (a > b)
    {
        c = a;
    }

    else
    {
        c = b;
    }

    return c;
}
