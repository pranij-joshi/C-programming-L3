//8.WAP that will ask temperature in Fahrenheit from user. Convert and display it into centigrade. (Opposite conversion of above program)

#include <stdio.h>

int main()
{
    float deg_C, deg_F;

    printf("Enter the temperature in degree Farenheit: ");
    scanf("%f", &deg_F);

    deg_C = (deg_C-32)*(5/9);

    printf("%f Farenheit = %f Centigrade", deg_F, deg_C);

    return 0;
}
