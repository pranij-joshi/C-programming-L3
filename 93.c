//93. WAP that will examine how many characters are letters, how many are digits, how many are white space characters
//in a line.

#include <stdio.h>

int main()
{
    char str[100];
    int alpha = 0, digit = 0, white_space = 0, special_ch = 0;
    int i = 0;

    printf("Enter the line of text: ");
    gets(str);

    printf("The entered string is: \n%s\n", str);

    while(str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alpha++;
        }

        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }

        else if(str[i] == ' ')
        {
            white_space++;
        }

        else
        {
            special_ch++;
        }
        i++;
    }

    printf("The number of digits is: %d\n", digit);
    printf("The number of alphabets is: %d\n", alpha);
    printf("The number of white spaces is: %d\n", white_space);
    printf("The number of special character is: %d\n", white_space);

    return 0;
}
