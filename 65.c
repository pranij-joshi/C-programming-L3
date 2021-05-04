//65. WAP to take the options from the user for Save(S), Open(O), Exit (E) and print the corresponding message like” you
//want to open the file?” by using switch case.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char options;
    char choice;
    printf("Enter 'S' to Save, 'O' to open and 'E' to exit: ");
    scanf("%c", &options);

    if(tolower(options) == 's')
    {
        printf("The file has been saved");
    }

    else if(tolower(options) == 'o')
    {
        printf("The file has been opened.");
    }

    else if(tolower(options) == 'e')
    {
        printf("The file has been exited");
    }

    else
    {
        printf("Invalid input!!");
    }


    return 0;
}
