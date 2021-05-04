//115. WAP to read two 2-D Array, multiply them and print the result.

#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;
    int sum = 0;

    printf("Enter the value for array A:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Index %dX%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the value for array B:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Index %dX%d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = 0;
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
               c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
            }
        }
    }

    printf("\n........................................\n");
    printf("The value for array A is :\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n........................................\n");
    printf("The value for array B is :\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {

            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n........................................\n");
    printf("The value for array C is :\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {

            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
