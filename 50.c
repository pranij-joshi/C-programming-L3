//50. WAP to read a number and display the multiplication table of that number in the following format:
//If user input is 5 then output must be:
//5 x 1 = 5
//5 X 2 =10
//……………
//…………..
//5 x 10 = 50

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter a number for the table: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }

    return 0;
}
