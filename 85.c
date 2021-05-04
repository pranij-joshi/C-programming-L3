//85. WAP to calculate the nth element of the Fib sequence by using recursive function.

#include <stdio.h>

int fibonacci(int i);

int main()
{
    int n, x;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    for(x = 0; x <= n; x++)
    {
        printf("%d ", fibonacci(x));
    }

    return 0;
}

int fibonacci(int i)
{
    if(i == 0)
        return 0;
    else if(i == 1)
        return 1;
    else
        return fibonacci(i-1)+fibonacci(i-2);
}


