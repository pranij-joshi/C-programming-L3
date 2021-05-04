//19.WAP to read 4-digit number and print the sum of each digit.

#include <stdio.h>

int main()
{
    int num, first, second, third, fourth, sum;

    printf("Enter the four digit number: ");
    scanf("%d", &num);

    first = num/1000;

    second = (num-((num/1000)*1000))/100;

    third = (num - (first*1000) - (second*100))/10;

    fourth = num - (first*1000) - (second*100) - (third*10);

    sum = first + second +third + fourth;

    printf("The sum of %d, %d, %d, %d is: %d", first, second, third, fourth, sum);

    return 0;
}
