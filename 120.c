//120. WAP to read array of 5 numbers and display largest and smallest number. Define read() function to read
//numbers, largest() to find the largest and smallest() to find the smallest number.

#include <stdio.h>

void read(int num[]);
void display(int num[]);
void largest(int num[]);
void smallest(int num[]);

int main()
{
    int num[5];

    read(num);
    printf("\n.......................\n");
    display(num);
    printf("\n.......................\n");
    largest(num);
    printf("\n.......................\n");
    smallest(num);
    printf("\n.......................\n");

    return 0;
}

void read(int num[])
{
    int i;

    printf("Enter the elements in the array: \n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
}

void display(int num[])
{
    int i;

    printf("The elements in the array are: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
    }
}

void largest(int num[])
{
    int large, i;
    large = num[0];

    for(i = 0; i < 5; i++)
    {
        if(num[i] > large)
        {
            large = num[i];
        }
    }

    printf("The largest number is %d", large);
}

void smallest(int num[])
{
    int small, i;
    small = num[0];

    for(i = 0; i < 5; i++)
    {
        if(num[i] < small)
        {
            small = num[i];
        }
    }

    printf("The largest number is %d", small);
}
