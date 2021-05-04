//116. WAP to determine the whether the given word is palindrome or not.

#include <stdio.h>

int main()
{
    char str[100];

    int l, i, flag = 1;

    printf("Enter the string: ");
    gets(str);

    l = strlen(str);

    for(i = 0; i < l; i++)
    {
        if(str[i] != str[(l-i-1)])
            {
                flag = 0;
            }
    }

    if(flag == 1)
    {
        printf("The word is a palindrome.");
    }

    else
    {
        printf("The word is not a palindrome.");
    }

    return 0;
}
