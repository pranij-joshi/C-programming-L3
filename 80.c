//80. WAP that calls a function whose name is mul() that takes one argument and print the multiplication table of
//inputted number.

#include <stdio.h>

void mul(int a);

int main()
{
    int num;

    printf("Enter a number for the multiplication table: ");
    scanf("%d", &num);

    mul(num);

    return 0;
}

void mul(int a)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a*i);
    }
}
