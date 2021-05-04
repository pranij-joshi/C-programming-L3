//6.WAP to calculate area between two circles having radius r1 and r2. The radius r1 and r2 should be read from keyboard. Use symbolic constant for value of PI.

#include <stdio.h>

int main()
{
    int r1, r2;
    float area1, area2;

    float PI = 22/7;

    printf("Enter the radius of the first circle: ");
    scanf("%d", &r1);

    printf("Enter the radius of the second circle: ");
    scanf("%d", &r2);

    area1 = PI*r1*r1;
    area2 = PI*r2*r2;

    printf("The area of the first circle is: %f\n", area1);
    printf("The area of the second circle is: %f\n", area2);

    return 0;
}
