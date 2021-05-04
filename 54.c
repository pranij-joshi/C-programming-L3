//54. WAP to input the number and find the sum of each digits.

#include <stdio.h>

int main()
{
    int num, temp, remainder, sum = 0;

    printf("Enter the digit: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        remainder = temp%10;
        sum = sum + remainder;
        temp = temp /10;
    }

    printf("The sum of the digit of the number %d, is: %d", num, sum);

    return 0;
}
