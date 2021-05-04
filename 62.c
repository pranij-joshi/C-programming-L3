//62. A Riley Number is a number whose all digits are even. For example, 1234 is not a Riley number because 1 & 3 are
//odd and 2468 is Riley Number because all digits are even. Now, WAP to input any digit number from the user and
//check whether the number is Riley Number or not.


#include <stdio.h>

int main()
{
    int num, remainder, temp, riley = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        remainder = temp%10;
        if(remainder%2 != 0)
        {
            riley = 0;
        }
        temp = temp/10;
    }
    if(riley == 1)
    {
        printf("The number %d, is a Riley number.", num);
    }
    else
    {
        printf("The number %d, is not a Riley number.", num);
    }

    return 0;
}
