//59. WAP to accept any number ‘n’ & print the cube of all numbers from 1 to n, which is exactly divisible by 3.

#include <stdio.h>

int main()
{
    int n, i;
    int result;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        result = i*i*i;
        if(result%3 == 0)
        {
            printf("%d\n", result);
        }
    }

    return 0;
}
