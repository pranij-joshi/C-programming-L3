//42. WAP to find the largest number of user’s 5 input numbers.

#include <stdio.h>

int main()
{
    int n, i;
    int largest;

    printf("Enter a numbers: ");
    scanf("%d", &n);

    largest = n;

    for(i = 1; i < 5; i++)
    {
       printf("Enter another numbers: ");
       scanf("%d", &n);
       if(n>largest)
       {
           largest = n;
       }
    }
    printf("The largest number is %d", largest);

    return 0;
}
