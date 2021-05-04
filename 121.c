//121. WAP to read two arrays, add two arrays and store the result in third array and display the array. Define read() to
//read data, sum() to add the array elements and display() to display the final result.

#include <stdio.h>

const int SIZE = 10;

void read(int array1[], int array2[]);
void sum(int array1[], int array2[], int array3[]);
void display(int array1[], int array2[], int array3[]);

int main()
{
    int arr1[SIZE], arr2[SIZE], arr3[SIZE];

    read(arr1, arr2);

    sum(arr1, arr2, arr3);

    display(arr1, arr2, arr3);
}

void read(int array1[], int array2[])
{
    int i;

    printf("Enter the elements in array 1: \n");
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements in array 2: \n");
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", &array2[i]);
    }
}


void sum(int array1[], int array2[], int array3[])
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
}


void display(int array1[], int array2[], int array3[])
{
    int i;

    printf("\n.......................\n");
    printf("The elements in the array 1 are: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d\n", array1[i]);
    }

    printf("\n.......................\n");
    printf("The elements in the array 2 are: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d\n", array2[i]);
    }

    printf("\n.......................\n");
    printf("The sum of the array are: \n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d\n", array3[i]);
    }
    printf("\n.......................\n");
}
