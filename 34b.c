//34. WAP that print the day depending upon number inputted by the user. (If input is 1 print Sunday and so on.)
//b. Using Switch case

#include <stdio.h>

int main()
{
    char i;

    printf("Enter:\n");
    printf("\t 1 for Sunday \n");
    printf("\t 2 for Monday\n");
    printf("\t 3 for Tuesday \n");
    printf("\t 4 for Wednesday \n");
    printf("\t 5 for Thursday \n");
    printf("\t 6 for Friday \n");
    printf("\t 7 for Saturday \n");

    printf("Enter the value: ");
    scanf("%c", &i);

    switch(i)
    {
    case '1':
        printf("Sunday");
        break;

    case '2':
        printf("Monday");
        break;

    case '3':
        printf("Tuesday");
        break;

    case '4':
        printf("Wednesday");
        break;

    case '5':
        printf("Thursday");
        break;

    case '6':
        printf("Friday");
        break;

    case '7':
        printf("Saturday");
        break;

    default:
        printf("Error");
        break;
    }

    return 0;
}
