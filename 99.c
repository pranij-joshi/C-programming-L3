//99. WAP that will examine each character in character type array called text and print result by replacing all the vowels
//by “*” character.

#include <stdio.h>

int main()
{
    char str[500];
    int i = 0;

    printf("Enter your text: ");
    gets(str);

    printf("\nThe entered string is: \n%s\n", str);

    while(str[i] != '\0')
    {
        if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')
        {
            str[i] = '*';
        }
        i++;
    }

    printf("The altered string is: \n%s\n", str);
}
