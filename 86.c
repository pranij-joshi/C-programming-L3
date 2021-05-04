//86. WAP to find first 10 element of fib sequence by using recursive function.

#include <stdio.h>

int fibonacci(int i);

int main()
{
    int x;

    for(x = 0; x < 10; x++)
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
