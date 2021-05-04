//125. WAP to read 2-D Array. Add, Subtract & print it using function. Also include non-additional condition.

#include <stdio.h>

void read(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n1]);
void print(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n1]);

int main()
{
    int m1, n1, m2, n2;

    printf("Enter the row and column for the first matrix: \n");
    printf("Row: ");
    scanf("%d", &m1);
    printf("Column: ");
    scanf("%d", &n1);

    printf("Enter the row and column for the second matrix: \n");
    printf("Row: ");
    scanf("%d", &m2);
    printf("Column: ");
    scanf("%d", &n2);

    int arr1[m1][n1], arr2[m2][n2];

    read(m1, m2, n1, n2, arr1, arr2);
    print(m1, m2, n1, n2, arr1, arr2);

    return 0;
}

void read(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n1])
{
    int i, j;
    printf("Enter the elements for the first matrix: \n");
    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            printf("Element %dX%d: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements for the second matrix: \n");
    for(i = 0; i < m2; i++)
    {
        for(j = 0; j < n2; j++)
        {
            printf("Element %dX%d: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
}


void print(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n1])
{
    int i, j;

    printf("\n...............................................\n");
    printf("Matrix A is: \n");
    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n...............................................\n");
    printf("Matrix B is: \n");
    for(i = 0; i < m2; i++)
    {
        for(j = 0; j < n2; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    if(m1 == m2 && n1 == n2)
    {
        printf("\n...............................................\n");
        printf("The addition of the matrix A+ B is: \n");
        for(i = 0; i < m2; i++)
        {
            for(j = 0; j < n2; j++)
            {
                printf("%d\t", arr1[i][j] + arr2[i][j]);
            }
            printf("\n");
        }

        printf("\n...............................................\n");
        printf("The subtraction of the matrix A-B is: \n");
        for(i = 0; i < m2; i++)
        {
            for(j = 0; j < n2; j++)
            {
                printf("%d\t", arr1[i][j] - arr2[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("The dimension of the matrix does not match.");
    }
}
