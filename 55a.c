//55. WAP to read a number & find whether it is:
//a. Armstrong or not

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
        result = result + (remainder * remainder * remainder);
        temp = temp / 10;
    }

    if(num == result)
    {
        printf("The number %d, is an Armstrong number.", num);
    }

    else
    {
        printf("The number %d, is not an Armstrong number.", num);
    }

    return 0;
}
