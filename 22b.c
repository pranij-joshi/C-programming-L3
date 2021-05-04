//22.Solve the following problem using ternary operator.
//b. WAP to read three numbers and display the greatest of them.

#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Enter the value for n1: ");
    scanf("%d", &n1);

    printf("Enter the value for n2: ");
    scanf("%d", &n2);

    printf("Enter the value for n3: ");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3)
    {
        printf("The greatest value is n1 i.e.: %d", n1);
    }

    else if(n2>n1 && n2>n3)
    {
        printf("The greatest value is n2 i.e.: %d", n2);
    }

    else
    {
        printf("The greatest value is n3 i.e.: %d", n3);
    }

    return 0;
}
