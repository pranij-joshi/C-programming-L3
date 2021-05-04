//135. Modify question number 134 to read information of 10 Employees and display them.

#include <stdio.h>

struct Employee
{
    char emp_id[25];
    char emp_name[50];
    char emp_post[50];
    float emp_salary;
}e[10];

int main()
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\tFor employee %d: \n", i+1);
        printf("Enter the employee ID: ");
        scanf("%s",e[i].emp_id);

        printf("Enter the employee name: ");
        scanf("%s",e[i].emp_name);

        printf("Enter the employee post: ");
        scanf("%s",e[i].emp_post);

        printf("Enter the employee salary: ");
        scanf("%f", &e[i].emp_salary);

        printf("\n...........................................\n");
    }


    for(i = 0; i < 10; i++)
    {
        printf("The details for employee %d are:\n", i+1);
        printf("The employee ID is: %s\n", e[i].emp_id);
        printf("The employee name is: %s\n", e[i].emp_name);
        printf("The employee post is: %s\n", e[i].emp_post);
        printf("The employee salary is: %.2f\n", e[i].emp_salary);
        printf("...........................................\n");
    }


    return 0;
}
