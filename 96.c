//96. WAP that will examine each character in character type array and count how many words are there.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter the text: ");
    gets(str);

    printf("The entered string is: \n%s\n", str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ' && str[i+1] != ' ')
        {
            count = count + 1;
        }
        i++;
    }

    printf("...................................................\n");
    printf("The number of words in the text is: %d", count+1);

    return 0;
}
