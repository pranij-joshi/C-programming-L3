//58. WAP to find the leap year between 1900 to 2000.

#include <stdio.h>

int main()
{
    int i;

    printf("The leap year between the years 1900 and 2000 are: \n");
    for(i = 1900; i <= 2000; i++)
    {
        if (i%400 == 0)
        {
            printf("%d\n", i);
        }

        else if (i%4 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
