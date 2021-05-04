//35. WAP that asks the user to enter his/her marks of 5 subjects and print the corresponding grade.
//100 – 80 = A
//70 – 60 = B
//59 – 50 = C
//49 – 40 = D
//< 40 = F

#include <stdio.h>

int main()
{
    int marks[5], i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter the marks for Subject %d:", i+1);
        scanf("%d", &marks[i]);

        if(marks[i] <= 100 && marks[i] >=80)
        {
            printf("The grade for subject %d is A.", i+1);
        }

        else if(marks[i] < 80 && marks[i] >= 60)
        {
            printf("The grade for subject %d is B.", i+1);
        }

        else if(marks[i] < 60 && marks[i] >= 50)
        {
            printf("The grade for subject %d is C.", i+1);
        }

        else if(marks[i] < 50 && marks[i] >= 40)
        {
            printf("The grade for subject %d is D.", i+1);
        }

        else if(marks[i] < 40 && marks[i] >=0)
        {
            printf("The grade for subject %d is F.", i+1);
        }

        else
        {
            printf("Invalid marks!!");
        }
        printf("\n\n");
    }
    return 0;
}
