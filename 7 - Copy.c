//7.WAP that will convert temperature in Centigrade into Fahrenheit. [Hint: F=9.0/5*C+32]

#include <stdio.h>

int main()
{
    float deg_C, deg_F;

    printf("Enter the temperature in degree centigrade: ");
    scanf("%f", &deg_C);

    deg_F = ((9/5)*deg_C)+32;

    printf("%f Centigrade = %f Farenheit.", deg_C, deg_F);

    return 0;
}
