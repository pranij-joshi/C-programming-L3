//101. WAP that will input name of ten persons and display the result by printing in ascending and descending order.

#include <stdio.h>


int main()
{
    char name[10][100], temp[100];
    int i, j;

    for(i = 0; i < 10; i++)
    {
        printf("Enter the name %d: ", i+1);
        scanf("%s", name[i]);
    }

    for (i = 0; i < 10 ; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (strcmp(name[i], name[j]) > 0)
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }

    printf("\n..............................................\n");
    printf("The names in the ascending order are: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%s \n", name[i]);
    }


    for (i = 0; i < 10 ; i++)
        {
            for (j = i + 1; j < 10; j++)
            {
                if (strcmp(name[i], name[j]) < 0)
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }

    printf("\n..............................................\n");
    printf("The names in the descending order are: \n");
    for(i = 0; i < 10; i++)
    {
        printf("%s \n", name[i]);
    }

    return 0;
}
