//90. WAP to insert 10 numbers in and array and display the result by printing in ascending and descending order.

#include <stdio.h>

int main()
{
    int x[10], i, j, temp;

    for(i = 0; i < 10; i++)
    {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(x[i]>x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    printf("The values in ascending order are: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }

    printf("\n....................................\n");

    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(x[i]<x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    printf("The values in descending order are: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}
