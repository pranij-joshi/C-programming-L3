//21.WAP to read 5-digit number and find the sum of square of each digit.

#include <stdio.h>

int main()
{
    int num, first, second, third, fourth, fifth, sum;

    printf("Enter the fifth digit number: ");
    scanf("%d", &num);

    first = num/10000;

    second = (num-((num/10000)*10000))/1000;

    third = (num - (first*10000) - (second*1000))/100;

    fourth = (num - (first*10000) - (second*1000) - (third*100))/10;

    fifth = num - (first*10000) - (second*1000) - (third*100) - (fourth*10);

    sum = (first*first)+(second*second)+(third*third)+(fourth*fourth)+(fifth*fifth);

    printf("The sum of the square of the digits of %d is: %d", num, sum);

    return 0;
}
