//117. WAP to sort a list of strings alphabetically using a two-dimensional character array.

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of string in the list: ");
    scanf("%d", &n);

    char str[n][100], temp[100];

    printf("Enter the list of strings: \n");
    for(i = 0; i <= n; i++)
    {
        gets(str[i]);
    }

    printf("\n...................................\n");
    printf("The strings in the list are: \n");
    for(i = 0; i <= n; i++)
    {
        printf("%s\n", (str[i]));
    }

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(strcmp(str[j],str[i]) < 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\n...................................\n");
    printf("The strings in alphabetical order are: \n");
    for(i = 0; i <= n; i++)
    {
        printf("%s\n", (str[i]));
    }

    return 0;
}
