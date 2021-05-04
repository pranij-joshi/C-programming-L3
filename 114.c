//114. WAP to take two 1- dimensional array of size n and m and merge them into a single array with size n + m. And
//display them.

#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the value for m: ");
    scanf("%d", &m);

    printf("Enter the value for n: ");
    scanf("%d", &n);

    char a[m], b[n], c[m+n];
    int i = 0, j;

    printf("Enter the value for array A: \n");
    for(i = 0; i < m; i = i + 1)
    {
        printf("Index %d: ", i);
        scanf("%s", &a[i]);
    }

    printf("Enter the value for array B: \n");
    for(i = 0; i < n; i++)
    {
        printf("Index %d: ", i);
        scanf("%s", &b[i]);
    }

    printf("The value in array A is: \n");
    for(i = 0; i < m; i++)
    {
        printf("%c ", a[i]);
    }
    printf("\n\n");

    printf("The value in array B is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%c ", b[i]);
    }
    printf("\n\n");

    for(i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    j = 0;
    for(i = m; i < m+n; i++)
    {
        c[i] = b[j];
        j++;
    }

    printf("The value in array C is: \n");
    for(i = 0; i < m+n; i++)
    {
        printf("%c ", c[i]);
    }
    printf("\n\n");


    return 0;
}
