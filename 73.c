//73. WAP that calls a function called getArea(). This function is responsible for reading the length & breadth & print area
//of rectangle.

#include <stdio.h>

void getArea();

int main()
{
    getArea();
    return 0;
}

void getArea()
{
    float l, b, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);

    area = l * b;

    printf("The area of the rectangle is: %f", area);

}
