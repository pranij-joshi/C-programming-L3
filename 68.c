//68. WAP to compute the given series of nth order.
//Y = 1 + x +x2/ 2! + x3/3! + x4/4!+…+xn/n!

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y = 1.0, fact = 1;
    int n, i, j;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    printf("Enter the value for x: ");
    scanf("%f", &x);

    for(i = 1; i < n; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        y = y + (pow(x, i)/fact);
    }

    printf("%f", y);


    return 0;
}
