//100. WAP to read “n” number of person’s age in an array and print minimum, maximum and average age.

#include <stdio.h>

int main()
{
    int n, min, max, average, sum = 0, i;

    printf("Enter the number of people: ");
    scanf("%d", &n);

    int age[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter the age for person No.%d: ", i+1);
        scanf("%d", &age[i]);
    }
    min = age[0];
    max = age[0];

    for(i = 0; i < n; i++)
    {
        if(age[i] < min)
        {
            min = age[i];
        }

        else if(age[i] > max)
        {
            max = age[i];
        }
        sum = sum + age[i];
    }

    average = sum/n;
    printf("The max age is: %d\n", max);
    printf("The min age is: %d\n", min);
    printf("The average age is: %d\n", average);

    return 0;

}
