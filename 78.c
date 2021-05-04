//78. WAP to read a character and convert it into uppercase if it is in lowercase and vice-versa using function with
//argument and return type.

#include <stdio.h>

char case_converter(char a);

int main()
{
    char character, alpha;

    printf("Enter a character: ");
    scanf("%c", &character);

    alpha = case_converter(character);

    printf("%c is converted to %c", character, alpha);

    getch();

    return 0;
}


char case_converter(char a)
{
    char upper_lower;

    if (a == toupper(a))
    {
        upper_lower = tolower(a);
    }
    else
    {
        upper_lower = toupper(a);
    }

    return upper_lower;
}
