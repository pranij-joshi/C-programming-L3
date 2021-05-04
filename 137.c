//137. Modify question number 134 using structure and pointer.

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
    struct Employee *ePtr, e;

    ePtr = &e;

    printf("Enter the employee ID: ");
    gets(ePtr->emp_id);

    printf("Enter the employee name: ");
    gets(ePtr->emp_name);

    printf("Enter the employee post: ");
    gets(ePtr->emp_post);

    printf("Enter the employee salary: ");
    scanf("%f", &ePtr->emp_salary);

    printf("\n...........................................\n");

    printf("The employee ID is: %s\n", ePtr->emp_id);
    printf("The employee name is: %s\n", ePtr->emp_name);
    printf("The employee post is: %s\n", ePtr->emp_post);
    printf("The employee salary is: %.2f\n", ePtr->emp_salary);
    printf("...........................................\n");

    return 0;
}

