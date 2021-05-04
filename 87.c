//87. WAP to read a line of text and print into reverse order by using recursive function.

#include <stdio.h>

void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c;

    scanf("%c", &c);

    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}
