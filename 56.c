//56. WAP to find all the Armstrong numbers between 100 – 500.

#include <stdio.h>

int main()
{
    int i, result, temp, remainder;

    printf("The armstrong numbers between 100-500 are: \n");
    for(i = 100; i < 501; i++)
    {
        temp = i;
        result = 0;
        while(temp != 0)
        {
            remainder = temp % 10;
            result = result + (remainder * remainder * remainder);
            temp = temp / 10;
        }

        if(i == result)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
