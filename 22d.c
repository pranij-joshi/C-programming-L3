//22.Solve the following problem using ternary operator.
//d. WAP to read four numbers and print the smallest one.

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("Enter the value for n1: ");
    scanf("%d", &n1);

    printf("Enter the value for n2: ");
    scanf("%d", &n2);

    printf("Enter the value for n3: ");
    scanf("%d", &n3);

    printf("Enter the value for n4: ");
    scanf("%d", &n4);

    if(n1<n2 && n1<n3 && n1<n4)
    {
        printf("The smallest number is %d", n1);
    }

    else if(n2<n1 && n2<n3 && n2<n4)
    {
        printf("The smallest number is %d", n2);
    }

    else if(n3<n1 && n3<n2 && n3<n4)
    {
        printf("The smallest number is %d", n3);
    }

    else
    {
        printf("The smallest number is %d", n4);
    }

    return 0;
}
