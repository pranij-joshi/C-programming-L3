//46. WAP to print “KIST” 10 times using while, do..while and for.

#include <stdio.h>

int main()
{
    int i;

    printf("USING FOR LOOP.\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d. The British College.\n", i+1);
    }

    printf("\n\n");
    printf("USING WHILE LOOP.\n");
    i = 0;
    while(i < 10)
    {
        printf("%d. The British College.\n", i+1);
        i++;
    }

    printf("\n\n");
    printf("USING DO-WHILE LOOP.\n");
    i = 0;
    do
    {
        printf("%d. The British College.\n", i+1);
        i++;
    }while(i < 10);


    return 0;
}
