//71. WAP to display the squares of the integers from 1 to 100 except numbers divisible by 11. (use continue statement).
#include <stdio.h>

int main()
{
    int i;
    for(i = 0; i <= 100; i++)
    {
        if((i*i)%11 == 0)
        {
            continue;
        }
        printf("%d\n", i*i);
    }

    return 0;
}
