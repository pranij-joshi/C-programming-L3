//4.WAP to multiply two numbers and display product. The program should ask user for two numbers from keyboard.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("The product of %d and %d is: %d", a, b, a*b);

    return 0;
}
