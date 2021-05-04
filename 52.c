//52. WAP to read two numbers and calculate its power. (Hint: pow(x,y) -> use #include<math.h))

#include <stdio.h>
#include <math.h>

int main()
{
    int base, expo, power;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &expo);

    power = pow(base, expo);

    printf("%d^%d = %d", base, expo, power);

    return 0;
}
