//49. WAP to display the sum and average of nth number input by the users.

#include <stdio.h>

int main()
{
    float n, sum = 0, average;
    int i;

    printf("Enter a number: ");
    scanf("%f", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    average = sum/n;

    printf("The sum of the numbers till %.2f is: %.2f\n", n, sum);
    printf("The average of the numbers till %.2f is: %.2f", n, average);

    return 0;
}
