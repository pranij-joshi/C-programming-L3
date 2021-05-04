//129. WAP to perform the following operations on the strings using <string.h> header file.
//a. Count the number of character in the string.
//b. Concatenate the one string to another string.
//c. Copy the one string to another.
//d. Swap the two strings to each other.
//e. Compare the two strings.

#include <stdio.h>
#include <string.h>

int main()
{
     char a[100], b[100], temp[100];
    int l1, l2, x;

    printf("Enter string 1: ");
    gets(a);
    printf("Enter string 2: ");
    gets(b);

    l1 = strlen(a);
    l2 = strlen(b);

    printf("The number of character in string 1 is: %d\n", l1);
    printf("The number of character in string 2 is: %d\n", l2);

    strcpy(temp, a);
    printf("Copying string 1 to temp: %s\n", temp);

    strcat(temp, b);
    printf("The string after concatenation is: %s\n", temp);

    printf("We have String 1: %s and String 2: %s\n", a, b);
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
    printf("After swapping: String 1: %s and String 2: %s\n", a, b);

    x = strcmp(a, b);
    printf("strcmp(a, b) = %d\n", x);



    return 0;
}
