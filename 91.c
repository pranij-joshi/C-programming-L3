//91. WAP to take input a line, and then display it character wise.

#include <stdio.h>

int main()
{
    char a[100];
    int i = 0;

    printf("Enter the line: ");
    gets(a);

    while(a[i] != '\0')
    {
        printf("%c\n", a[i]);
        i++;
    }

    return 0;
}
