//98. WAP that will examine each character in character type array called text and print out the result by converting the
//lowercase letter to uppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[500];
    int i = 0;

    printf("Enter your text: ");
    gets(str);

    printf("\nThe entered string is: \n%s\n", str);

    while(str[i] != '\0')
    {
        if(str[i] == tolower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if(str[i] == toupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else
        {
            str[i] = str[i];
        }
        i++;
    }

    printf("After the case is changed the string is: \n%s\n", str);

    return 0;
}
