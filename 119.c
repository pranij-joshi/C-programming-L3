//119. WAP to read array of 5 numbers and display it. Define read() and display() functions for the process.

#include <stdio.h>

void read(int num[]);
void display(int num[]);

int main()
{
    int num[5];

    read(num);
    display(num);

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
