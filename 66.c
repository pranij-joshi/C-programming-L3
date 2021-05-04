//66. WAP to take two numbers from user and one arithmetic operator (+,-,*,/,%) and perform the corresponding
//operation of those two numbers by using switch case.

#include <stdio.h>
#include <math.h>

int main()
{
    char option;
    float a, b;

    printf("Enter the operator(+, -, *, / or %): ");
    scanf("%c", &option);

    printf("Enter the two operands: ");
    scanf("%f %f", &a, &b);

    switch (option)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", a, b, a+b);
        break;

    case '-':
        printf("%.2f - %.2f = %.2f", a, b, a-b);
        break;

    case '*':
        printf("%.2f x %.2f = %.2f", a, b, a*b);
        break;

    case '/':
        printf("%.2f / %.2f = %.2f", a, b, a/b);
        break;

    case '%':
        printf("%.2f %% %.2f = %.2f", a, b, remainder(a, b));
        break;

    default:
        printf("Error!!");
    }

    return 0;
}
