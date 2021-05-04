//22.Solve the following problem using ternary operator.
//c. WAP to read two numbers. If first is greatest than second number, then display its difference else display
//the sum of them.

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the value for n1: ");
    scanf("%d", &n1);

    printf("Enter the value for n2: ");
    scanf("%d", &n2);

    if(n1>n2)
    {
        printf("The difference of the numbers is: %d", n1-n2);
    }
    else
    {
        printf("The sum of the numbers is: %d", n1+n2);
    }

    return 0;
}
