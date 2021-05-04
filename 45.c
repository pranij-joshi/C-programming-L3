//45. WAP to read three sides of a triangle and check the validity of triangle. Also decide the type of triangle. (Isosceles,
//equilateral and right-angled triangle)

#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if(a+b<=c || b+c<=a || a+c<=b)
    {
        printf("The values entered is not valid.\n");
    }
    else
    {
        if(a==b && b==c)
        {
            printf("It is an equilateral triangle.");
        }

        else if(a==b || b==c || a==c)
        {
            printf("It is an isosceles triangle.");
        }

        else
        {
            printf("It is a scalene triangle.");
        }
    }
    return 0;
}
