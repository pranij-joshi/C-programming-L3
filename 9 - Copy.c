//9.WAP that asks the name of student and marks obtained by him/her in seven subjects. Display the percentage of the student assuming full marks 100 for each subject.

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

    printf("The percentage obtained is: %f", percent);

    return 0;
}
