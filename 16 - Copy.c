//16.WAP which reads radius of sphere from keyboard and calculate its volume and area. [Hint: Volume🡪 4πr3/3 and Area 🡪 4πr2

#include <stdio.h>

int main()
{
    int r;
    float area, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &r);

    area = 4*(22/7)*r*r;

    volume = (4*(22/7)*r*r*r)/3;

    printf("The area of the circle is %f\n", area);
    printf("The volume of the circle is %f\n", volume);

    return 0;
}
