//25.WAP that reads the marks of a student in seven subjects. Then calculate the percentage and determine the division. Use these conditions:
//Percentage greater than or equal to 80 🡪 Distinction
//Percentage between 60 and 79 🡪 First Division
//Percentage between 45 and 59 🡪 Second Division
//Percentage between 32 and 44 🡪 Third Division
//Percentage less than or equal to 31 🡪 Fail

#include<stdio.h>

int main()
{
    float math, biology, chemistry, physics, english, nepali, economics;
    float percent;

    printf("Enter the marks for Math: ");
    scanf("%f", &math);

    printf("Enter the marks for Biology: ");
    scanf("%f", &biology);

    printf("Enter the marks for Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter the marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter the marks for English: ");
    scanf("%f", &english);

    printf("Enter the marks for Nepali: ");
    scanf("%f", &nepali);

    printf("Enter the marks for Economics: ");
    scanf("%f", &economics);

    percent = ((math+biology+chemistry+physics+english+nepali+economics)/700)*100;

    printf("The percentage obtained is: %.2f\n", percent);

    if(percent>=80)
    {
        printf("Distinction.");
    }

    else if(percent<80 && percent>=60)
    {
        printf("First Division.");
    }

    else if(percent<60 && percent>=45)
    {
        printf("Second Division.");
    }

    else if(percent<45 && percent>=32)
    {
        printf("Third Division.");
    }

    else
    {
        printf("Fail.");
    }

    return 0;
}
