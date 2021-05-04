//34. WAP that print the day depending upon number inputted by the user. (If input is 1 print Sunday and so on.)
//a. Using if..else..if

#include <stdio.h>

int main()
{
    char i;

    printf("Enter\n");
    printf("\t 1 for Sunday \n");
    printf("\t 2 for Monday\n");
    printf("\t 3 for Tuesday \n");
    printf("\t 4 for Wednesday \n");
    printf("\t 5 for Thursday \n");
    printf("\t 6 for Friday \n");
    printf("\t 7 for Saturday \n");

    printf("Enter the value: ");
    scanf("%c", &i);

    if(i == '1')
    {
        printf("Sunday");
    }
    else if(i == '2')
    {
        printf("Monday");
    }
    else if(i == '3')
    {
        printf("Tuesday");
    }
    else if(i == '4')
    {
        printf("Wednesday");
    }
    else if(i == '5')
    {
        printf("Thursday");
    }
    else if(i == '6')
    {
        printf("Friday");
    }
    else if(i == '7')
    {
        printf("Saturday");
    }
    else
    {
        printf("Error");
    }

    return 0;
}
