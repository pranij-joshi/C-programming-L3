//128. WAP to insert 10 numbers in and array and display the result by printing in ascending and descending order
//using pointer.

#include <stdio.h>

const int size = 10;

int main()
{
    int a[size], i, j, temp;

    printf("Enter the elements in the array: \n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", a+i);
    }

    printf("\n..............................................\n");
    printf("The elements in the array are:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\n", *(a+i));
    }

    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(*(a+i) > *(a+j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }

    printf("\n..............................................\n");
    printf("The elements in the array in ascending order are:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\n", *(a+i));
    }

    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(*(a+i) < *(a+j))
            {
                temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }

    printf("\n..............................................\n");
    printf("The elements in the array in descending order are:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\n", *(a+i));
    }

    return 0;
}
