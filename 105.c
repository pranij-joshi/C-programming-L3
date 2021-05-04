//105. WAP that takes a string from the user and convert the string into uppercase if the first character is lowercase
//and vice versa.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter the string: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(toupper(str[i]) == str[i])
        {
            printf("%c", tolower(str[i]));
        }
        else if(tolower(str[i]) == str[i])
        {
            printf("%c", toupper(str[i]));
        }
        else
        {
            printf("%c", str[i]);
        }

        i++;
    }

    return 0;
}
