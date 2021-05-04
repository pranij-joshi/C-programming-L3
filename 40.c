//40. WAP to read a character & convert it into uppercase if it is in lowercase and vice-versa.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if(c == toupper(c))
    {
        printf("%c in lower case is %c", c, tolower(c));
    }

    else if(c == tolower(c))
    {
        printf("%c in upper case is %c", c, toupper(c));
    }

    else
    {
        printf("Invalid input");
    }

    return 0;
}
