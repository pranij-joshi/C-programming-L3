//122. WAP to read an array & sort them in ascending and descending order.

#include <stdio.h>

const int size = 10;

void read(int a[]);
void display(int a[]);
void ascending(int a[]);
void descending(int a[]);

int main()
{
    int a[size];
    read(a);
    display(a);
    ascending(a);
    descending(a);

    return 0;
}

void read(int a[])
{
    int i;

    printf("Enter the elements in array: \n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[])
{
    int i;

    printf("\n....................................................\n");
    printf("The elements in the array are: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}

void ascending(int a[])
{
    int i, j, temp;

    for(i = 0; i < size; i++)
    {
        for(j = i+1; j< size; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n....................................................\n");
    printf("The elements in the array in ascending order are: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}

void descending(int a[])
{
    int i, j, temp;

    for(i = 0; i < size; i++)
    {
        for(j = i+1; j< size; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n....................................................\n");
    printf("The elements in the array in descending order are: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}

