//28.WAP to display the message “Welcome to KIST College” ten times using all available loops.

#include <stdio.h>

int main()
{
    int i;

    printf("By using for loop.\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d.Welcome to THE BRITISH COLLEGE.\n", i+1);
    }
    printf("\n-------------------------------------------\n");
    i = 0;
    printf("By using while loop.\n");
    while(i <10)
    {
        printf("%d.Welcome to THE BRITISH COLLEGE.\n", i+1);
        i++;
    }

    printf("\n-------------------------------------------\n");
    i = 0;
    printf("By using do-while loop.\n");
    do
    {
        printf("%d.Welcome to THE BRITISH COLLEGE.\n", i+1);
        i++;
    }while(i < 10);

    return 0;
}
