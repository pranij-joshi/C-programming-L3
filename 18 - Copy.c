//18.WAP to read 3-digit number from user and display each digit separately.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the three digit number: ");
    scanf("%d", &n);

    printf("%d\n", n/100);

    n = n - ((n/100)*100);
    printf("%d\n", n/10);

    n = n - ((n/10)*10);
    printf("%d\n", n);

    return 0;
}
