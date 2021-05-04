//124. WAP to read & display 2-D Array of size (m x n).

#include <stdio.h>

void read(int m, int n, int arr[][n]);
void display(int m, int n, int arr[][n]);

int main()
{
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[m][n];

    read(m, n, arr);

    display(m, n, arr);

    return 0;
}

void read(int m, int n, int arr[][n])
{
    int i, j;

    printf("Enter the elements in the 2-D array: \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Element %dX%d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int m, int n, int arr[][n])
{
    int i, j;

    printf("\n...........................................\n");
    printf("The elements in the 2-D array are: \n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
