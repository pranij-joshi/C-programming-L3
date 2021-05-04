//79. WAP that read a number ‘n’ from user & print your name ‘n’ times using function with return type and argument.

#include <stdio.h>

void name(int a);

int main()
{
    int n;

    printf("How many times do you want to print your name??: ");
    scanf("%d", &n);

    name(n);

    return 0;
}

void name(int a)
{
    int i;

    for(i = 1; i <= a; i++)
    {
        printf("%d.Pranij Joshi\n", i);
    }
}
