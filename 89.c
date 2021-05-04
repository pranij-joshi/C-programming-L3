//89. WAP to take 1-dimensional array of n size and count the even and odd number in the array and display.

#include <stdio.h>

int main()
{
    int n, i, count_odd = 0, count_even = 0;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        a[i] = i+1;
        printf("%d\n", a[i]);
        if(a[i]%2 == 0)
        {
            count_even += 1;
        }

        else
        {
            count_odd += 1;
        }
    }

    printf("The number of odd numbers in the array is: %d\n", count_odd);
    printf("The number of even numbers in the array is: %d\n", count_even);


    return 0;
}
