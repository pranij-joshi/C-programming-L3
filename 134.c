//134. WAP to create a structure named Employee having members emp_id, emp_name, emp_post, and emp_salary.
//Read the data of an employee and display it on screen.

#include <stdio.h>

struct Employee
{
    char emp_id[25];
    char emp_name[50];
    char emp_post[50];
    float emp_salary;
};

int main()
{
    struct Employee e;

    printf("Enter the employee ID: ");
    gets(e.emp_id);

    printf("Enter the employee name: ");
    gets(e.emp_name);

    printf("Enter the employee post: ");
    gets(e.emp_post);

    printf("Enter the employee salary: ");
    scanf("%f", &e.emp_salary);

    printf("\n...........................................\n");

    printf("The employee ID is: %s\n", e.emp_id);
    printf("The employee name is: %s\n", e.emp_name);
    printf("The employee post is: %s\n", e.emp_post);
    printf("The employee salary is: %.2f\n", e.emp_salary);
    printf("...........................................\n");

    return 0;
}
