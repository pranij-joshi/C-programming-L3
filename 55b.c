//55. WAP to read a number & find whether it is:
//b.Palindrome or not

#include <stdio.h>

int main()
{
    int num, result = 0, remainder, temp;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        remainder = temp % 10;
        result = (result *10) + remainder ;
        temp = temp / 10;
    }

    if(num == result)
    {
        printf("The number %d, is a Palindrome number.", num);
    }

    else
    {
        printf("The number %d, is not a Palindrome number.", num);
    }

    return 0;
}

