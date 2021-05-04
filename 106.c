//106. WAP to take input 3*3 matrix and display it.

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter the value for element %dX%d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("...............................\n");
    printf("The matrix entered is: \n\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
