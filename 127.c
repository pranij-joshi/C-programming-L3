//127. WAP to take 1-dimensional array of n size and count the even and odd number in the array and display using
//pointer.

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n], even = 0, odd = 0;

    printf("Enter the elements in the array: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", (a+i));
    }

    printf("\n..............................................\n");
    printf("The elements in the array are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", *(a+i));
    }

    for(i = 0; i < n; i++)
    {
        if(*(a+i)%2 == 0)
        {
            even++;
        }

        else
        {
            odd++;
        }
    }
    printf("\n..............................................\n");
    printf("The number of even numbers in the array is: %d", even);
    printf("\n..............................................\n");
    printf("The number of odd numbers in the array is: %d", odd);
    printf("\n..............................................\n");

    return 0;
}
