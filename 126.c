//126. WAP to read two matrices, multiply them and stored it in 3rd array and display them. Also include
//non-multiplication condition.

#include <stdio.h>

void read(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n2]);
void multiply(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n2], int arr3[][n2]);
void print(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n2], int arr3[][n2]);

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

    int arr1[m1][n1], arr2[m2][n2], arr3[m1][n2];

    read(m1, m2, n1, n2, arr1, arr2);
    multiply(m1, m2, n1, n2, arr1, arr2, arr3);
    print(m1, m2, n1, n2, arr1, arr2, arr3);

    return 0;
}


void read(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n2])
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


void multiply(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n2], int arr3[][n2])
{
    int i, j, k;

    if(n1 == m2)
    {
        for(i = 0; i < m1; i++)
        {
            for(j = 0; j < n2; j++)
            {
                arr3[i][j] = 0;
            }
        }

        for(i = 0; i < m1; i++)
        {
            for(j = 0; j < n2; j++)
            {
                for(k = 0; k < n2; k++)
                {
                   arr3[i][j] = arr3[i][j] + (arr1[i][k]*arr2[k][j]);
                }
            }
        }
    }

    else
    {
        printf("\n...............................................\n");
        printf("The array cant be multiplied.");
    }
}


void print(int m1, int m2, int n1, int n2, int arr1[][n1], int arr2[][n1], int arr3[][n2])
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

    if(n1 == m2)
    {
        printf("\n...............................................\n");
        printf("The product of Matrix A and B is: \n");
        for(i = 0; i < m1; i++)
        {
            for(j = 0; j < n2; j++)
            {
                printf("%d\t", arr3[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("\n...............................................\n");
        printf("The array cant be multiplied.");
    }
}
