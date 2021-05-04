//38. WAP to read 3 sides of a triangle and check the validity of the triangle and also decide the types of triangle.

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
