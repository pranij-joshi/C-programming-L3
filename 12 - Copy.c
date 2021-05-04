//12.The length and breadth of a rectangle are input through the keyboard. WAP to calculate the area and perimeter of the rectangle.

#include<stdio.h>

int main()
{
    int l, b, perimeter, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    perimeter = 2*(l+b);
    area = (l*b);

    printf("The perimeter of the rectangle is: %d\n", perimeter);
    printf("The area of the rectangle is: %d", area);

    return 0;
}
