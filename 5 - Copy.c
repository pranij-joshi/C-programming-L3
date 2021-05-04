//5.WAP to calculate area and circumference of a circle having radius r. The radius r should ask user for two numbers from keyboard.

#include <stdio.h>

int main()
{
    int r, area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    area = (22/7)*r*r;

    printf("The area of the circle with radius %d is: %d", r, area);

    return 0;
}
