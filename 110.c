//110. Write two 3*4 matrix A and B in your program and print them. And obtain matrix C=A+B and print.

#include <stdio.h>

int main()
{
    int a[3][4], b[3][4], c[3][4];
    int i, j;

    printf("For matrix A: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Enter the element for %dX%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nFor matrix B: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Enter the element for %dX%d: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("...............................\n");
    printf("The matrix A is: \n\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("...............................\n");
    printf("The matrix B is: \n\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("...............................\n");
    printf("The matrix C=A+B is: \n\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
