//15.Two numbers are input through the keyboard into two variables A and B. WAP to swap the content of A and B.

#include <stdio.h>

int main()
{
    char c1 = 'a',
        c2 = 'b',
        temp;

    printf("The character in c1 is %c and c2 is %c\n\n", c1, c2);

    temp = c1;
    c1 = c2;
    c2 = temp;

    printf("The characters are swapped.\n");
    printf("c1: %c\n", c1);
    printf("c2: %c\n", c2);

    return 0;
}
