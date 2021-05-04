//104. WAP that will take an integer of four digit and display individual number in words.

#include <stdio.h>

int main()
{
    char digit[4];
    int i;

    printf("Enter the four digit number: ");
    gets(digit);

    for(i = 0; i < 4; i++)
    {
        if(digit[i] == '1')
            printf("one\n");
        else if(digit[i] == '2')
            printf("two\n");
        else if(digit[i] == '3')
            printf("three\n");
        else if(digit[i] == '4')
            printf("four\n");
        else if(digit[i] == '5')
            printf("five\n");
        else if(digit[i] == '6')
            printf("six\n");
        else if(digit[i] == '7')
            printf("seven\n");
        else if(digit[i] == '8')
            printf("eight\n");
        else if(digit[i] == '9')
            printf("nine\n");
        else if(digit[i] == '0')
            printf("zero\n");
        else
            printf("Not a number");
        }

        return 0;
}
