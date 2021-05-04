//60. WAP to find Fibonacci series upto 10th terms.

#include <stdio.h>

int main()
{
    int i, n1 = 0, n2 = 1, fibonacci;

    printf("%d %d ", n1, n2);
    for (i = 0; i <  8; i++)
    {
        fibonacci = n1 + n2;
        n1 = n2;
        n2 = fibonacci;
        printf("%d ", fibonacci);
    }

    return 0;
}
