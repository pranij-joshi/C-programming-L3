//74. WAP that calls a function named interest(). This function takes the values of principal, number of years and rate of
//interest as an argument & returns the calculated interest.

#include <stdio.h>

float interest(float a, float b, float c);

int main()
{
    float p, t, r, i;

    printf("Enter the principal: ");
    scanf("%f", &p);

    printf("Enter the time: ");
    scanf("%f", &t);

    printf("Enter the rate: ");
    scanf("%f", &r);

    i = interest(p, t, r);

    printf("The calculated simple interest for the given values is: %f", i);

    return 0;

}


float interest(float a, float b, float c)
{
    float si;

    si = (a * b * c) / 100;

    return si;
}
