//57. WAP to read the age of 10 person and count the number of person of age group 50 to 60.

#include <stdio.h>

int main()
{
    int age, count = 0, i;

    for(i = 0; i < 10; i++)
    {
        printf("Enter the age of the person: ");
        scanf("%d", &age);

        if(age <= 0)
        {
            printf("Invalid input!!");
        }

        if(age >= 50 && age <= 60)
        {
            count = count + 1;
        }
    }

    printf("The number of people between the age 50 and 60 is: %d", count);

    return 0;
}
