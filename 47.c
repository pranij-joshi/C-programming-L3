//47. WAP to print numbers from 201 to 299 using all the three loops.

#include <stdio.h>

int main()
{
    int i;

    printf("USING FOR LOOP.\n");
    for(i = 201; i < 300; i++)
    {
        printf("%d\n", i);
    }

    printf("\n\n");
    printf("USING WHILE LOOP.\n");
    i = 201;
    while(i < 300)
    {
        printf("%d\n", i);
        i++;
    }

    printf("\n\n");
    printf("USING DO-WHILE LOOP.\n");
    i = 201;
    do
    {
        printf("%d\n", i);
        i++;
    }while(i < 300);


    return 0;
}
