//72. WAP to read a number ‘n’ & calculate its cube using function:
//a. No argument but return type
//b. Argument and return type

#include <stdio.h>

float cube();           //function prototype
float cubed(float a);   //function prototype

int main()
{
    float cube1,cube2, num;

    cube1 = cube();
    printf("%f\n\n", cube1);

    printf("Enter a number: ");
    scanf("%f", &num);

    cube2 = cubed(num);
    printf("The cube of %f is %f", num, cube2);

    return 0;
}

//No argument but return type
float cube()
{
    float i, cubed;

    printf("Enter a number: ");
    scanf("%f", &i);

    cubed = i * i * i;

    printf("The cube of %f is: ", i);

    return cubed;
}

//Argument and return type
float cubed(float a)
{
    float c;
    c = a * a * a;

    return c;
}
