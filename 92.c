//92. WAP that will enter a line of text, store it in a array and then display it backwards.

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count = 0;

    printf("Enter the line of text: ");
    gets(str);

    printf("The string before it is reversed is: \n%s\n", str);

    while(str[count] != '\0')
    {
        count++;
    }
    count = count - 1;

    printf("\n................................................\n");
    printf("The string reversed is:\n");
    while(count >= 0)
    {
        printf("%c", str[count]);
        count--;
    }

    return 0;
}
