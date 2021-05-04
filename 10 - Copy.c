//10.WAP to calculate simple interest when principal, time and rate are provided by the user.

#include<stdio.h>

int main()
{
    float P, T, R, SI;

    printf("Enter the Principal: ");
    scanf("%f", &P);

    printf("Enter the Time: ");
    scanf("%f", &T);

    printf("Enter the Rate: ");
    scanf("%f", &R);

    SI = (P*T*R)/100;

    printf("The simple interest accquired is: %f", SI);

    return 0;
}
