//14.WAP to read three sides of a triangle and calculate the area.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float p, area;

    printf("Enter the three sides of the triangle:\n");

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("c: ");
    scanf("%d", &c);

    p = (a+b+b)/2;

    area = sqrt(p*(p-a)*(p-b)*(p-c));

    printf("The area of the triangle is: %f", area);

    return 0;
}
