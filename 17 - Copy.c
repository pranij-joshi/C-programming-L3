//17.WAP to read two numbers n1 and n2 from keyboard. Calculate and display remainder obtained by dividing n1 by n2.

#include <stdio.h>

int main()
{
    float n1, n2;
    float remainder;

    printf("Enter the value for n1: ");
    scanf("%f", &n1);

    printf("Enter the value for n2: ");
    scanf("%f", &n2);

    remainder = (n1/n2);

    printf("%.2f/%.2f = %.2f", n1, n2, remainder);

    return 0;
}
