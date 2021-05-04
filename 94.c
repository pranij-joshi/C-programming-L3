//94. WAP that will examine each character in character type array and determine how many vowels and consonants are
//there.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0, j;
    int v = 0, c = 0;

    printf("Enter your string: ");
    gets(str);

    printf("The input string is: \n%s\n", str);


    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        i++;
    }

    printf("The total number of vowels is: %d\n", v);
    printf("The total number of consonants is: %d\n", c);

    return 0;
}
