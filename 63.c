//63. WAP to input any number and check whether the number falls under Fibonacci Series or not.

#include <stdio.h>

int main()
{
    int num, fibonacci, n1 = 0, n2 = 1, check = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++)
    {
        fibonacci = n1 + n2;
        n1 = n2;
        n2 = fibonacci;

        if(num == fibonacci)
        {
            check = 1;
        }
    }

    if(num == 0 || num == 1)
    {
        printf("%d is in the fibonacci series.", num);
    }
    else if(check == 1)
    {
        printf("%d is in the fibonacci series.", num);
    }
    else
    {
        printf("%d is in not the fibonacci series.", num);
    }

    return 0;
}
