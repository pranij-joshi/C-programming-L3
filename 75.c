//75. WAP to read a number & print its square using function.

#include <stdio.h>

void square();

int main()
{
    square();

    return 0;

}

void square()
{
    float a, sq;

    printf("Enter a number: ");
    scanf("%f", &a);

    sq = a * a;

    printf("The square of %f is %f", a, sq);

}
