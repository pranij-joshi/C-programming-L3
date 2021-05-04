//76. WAP to read length, breadth & height of cube and print its volume using function.

#include <stdio.h>

void volume();

int main()
{
    volume();

    return 0;
}

void volume()
{
    float l, b, h, v;

    printf("Enter the length of the cube: ");
    scanf("%f", &l);

    printf("Enter the breadth of the cube: ");
    scanf("%f", &b);

    printf("Enter the height of the cube: ");
    scanf("%f", &h);

    v = l *  b * h;

    printf("The volume of the cube is: %f", v);

    getch();
}
