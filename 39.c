//39. WAP to read annual salary of an employee and declare the tax & print the actual amount received by the employee.
//Upto 100000 = 0%
//Upto 150000 = 15%
//Above 150000 = 25%

#include <stdio.h>

int main()
{
    float salary, tax, amount;

    printf("Enter the salary of the emplyee: ");
    scanf("%f", &salary);

    if(salary <= 0.0)
    {
        printf("Invalid input!!");
    }

    else if(salary > 0.0 && salary <= 100000.0)
    {
        printf("The salary of the employee is: %f", salary);
    }

    else if(salary > 100000.0 && salary <= 150000.0)
    {
        tax = salary * (15.0/100);

        amount = salary - tax;
        printf("The salary of the employee is: %f", amount);
    }
    else
    {
        tax = salary * (25.0/100);
        amount = salary - tax;
        printf("The salary of the employee is: %f", amount);
    }

    return 0;
}
