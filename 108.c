//108. WAP to take input 3*3 matrixes and create a new matrix by replacing all the elements of previous matrix by 15
//if the element of previous matrix is less than 5.

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter the value for element %dX%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] < 5)
            {
                b[i][j] = 15;
            }
            else
            {
                b[i][j] = a[i][j];
            }
        }
    }

    printf("...............................\n");
    printf("The matrix A is: \n\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("...............................\n");
    printf("The matrix B is: \n\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
