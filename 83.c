//83. WAP to print your name 10 times using recursive function with static and non static variable.

#include <stdio.h>

void name_static();
void name_non_static(int a);

int main()
{
    int i = 1;
    printf("USING STATIC.\n");
    name_static();

    printf(".........................");

    printf("USING NON-STATIC.\n");
    name_non_static(i);

    return 0;
}

void name_static()
{
    static int count = 1;

    printf("%d. Pranij Joshi\n", count);
    count++;

    while(count <= 10)
    {
        name_static();
    }
}


void name_non_static(int a)
{
    printf("%d. Pranij Joshi\n", a);

    if(a<10)
    {
        name_non_static(a+1);
    }
}
