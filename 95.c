//95. WAP that will examine each character in character type array and count how many ‘a’ characters are there.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, a = 0;

    printf("Enter your string: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == 'a')
        {
            a++;
        }
        i++;
    }

    printf("The number of 'a' in the array is: %d", a);

    return 0;
}
