//97. WAP that will ask to input a sentence and print the result by replacing the appearance of “an” word with “##”.

#include <stdio.h>

int main()
{
    char str[100];
    int i=0;
    //char c = '#';

    printf("Enter you string: ");
    gets(str);

    printf("The entered string is: \n%s\n", str);


    while(str[i] != '\0')
    {
        if(str[i] == 'a' && str[i+1] == 'n' && (str[i+2] == ' ' || str[i+2] == '\0'))
        {
            str[i] = '#';
            str[i+1] = '#';
        }
        i++;
    }
    printf("\n%s\n", str);

    return 0;
}
