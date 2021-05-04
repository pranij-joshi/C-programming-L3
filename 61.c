//61. WAP to print the following series:

#include <stdio.h>

int main()
{
    int i, j, k = 1;

    for(i = 1; i <= 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }

    printf("...............................\n");
    for(i = 1; i <= 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("...............................\n");
    for(i = 1; i <= 5; i++)
    {
        for(j = 0; j < i; j++)
        {
            if((j+1)%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }

    printf("...............................\n");
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("...............................\n");
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("...............................\n");
    for(i = 65; i < 70; i++)
    {
        for(j = 65; j < i+1; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }

    printf("...............................\n");
    for(i = 65; i < 70; i++)
    {
        for(j = 65; j < i+1; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    printf("...............................\n");
    for(i = 70; i > 65; i--)
    {
        for(j = 65; j < i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    printf("...............................\n");
    for(i = 70; i > 65; i--)
    {
        for(j = 65; j < i; j++)
        {
            printf("%c ", i-1);
        }
        printf("\n");
    }

    printf("...............................\n");
    for (i=1; i<=5; i++)
    {
		for (j=5; j>=i; j--)
		{
			printf(" ");
		}
		for (k=1; k<=i; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}

	printf("...............................\n");
    for (i=65; i<70; i++)
    {
		for (j=70; j>i; j--)
		{
			printf(" ");
		}
		for (k=65; k<=i; k++)
		{
			printf("%c", k);
		}
		printf("\n");
	}
    return 0;
}
