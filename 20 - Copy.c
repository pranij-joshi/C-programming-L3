//20.WAP to read 5-digit number and reverse it.

#include <stdio.h>

int main()
{
    int num, first, second, third, fourth, fifth, reverse;

    printf("Enter the fifth digit number: ");
    scanf("%d", &num);

    first = num/10000;

    second = (num-((num/10000)*10000))/1000;

    third = (num - (first*10000) - (second*1000))/100;

    fourth = (num - (first*10000) - (second*1000) - (third*100))/10;

    fifth = num - (first*10000) - (second*1000) - (third*100) - (fourth*10);

    reverse = (fifth*10000)+(fourth*1000)+(third*100)+(second*10)+first;

    printf("The reverse of the %d is: %d", num, reverse);

    return 0;
}
