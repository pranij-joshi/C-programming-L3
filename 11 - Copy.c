//11.WAP to find compound interest for given principal amount, time, year and rate.

#include<stdio.h>
#include<math.h>

int main()
{
    float amount,
        P = 5000,
        r = 0.05,
        n = 12,
        t = 10,
        CI;

    amount = P*(pow((1+(r/n)), (n*t)));

    printf("The final amount is: %f\n", amount);
    printf("The compound interest accquired is: %f", amount-P);


    return 0;
}
