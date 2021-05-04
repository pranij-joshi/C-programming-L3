//133. WAP to insert n numbers in an array and sort them then ascending order using malloc() and calloc() function.

#include <stdio.h>

int main()
{
    int n, *ptr1, *ptr2, i, j, temp;
    printf("Enter the number to be inserted in the array: ");
    scanf("%d", &n);

    ptr1 = (int*)malloc(n*sizeof(int));
    ptr2 = (int*)calloc(n, sizeof(int));

    printf("Enter the numbers: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr1+i);
        *(ptr2+i) = *(ptr1+i);
    }
    printf("The numbers are: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr1+i));
    }

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(*(ptr1+i) > *(ptr1+j))
            {
                temp = *(ptr1+i);
                *(ptr1+i) = *(ptr1+j);
                *(ptr1+j) = temp;
            }
        }
    }

    printf("The numbers in ascending order are: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr1+i));
    }


    return 0;
}
