//13.WAP to read height and base of a triangle and find area of it.

#include <stdio.h>

int main()
{
    int h, b;
    float area;

    printf("Enter the height of the triangle: ");
    scanf("%d", &h);

    printf("Enter the base of the triangle: ");
    scanf("%d", &b);

    area = (h*b)/2;

    printf("The area of the triangle with base %d and height %d is: %f", b, h, area);

    return 0;
}
