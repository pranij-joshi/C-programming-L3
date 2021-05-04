//123. WAP to read age of ‘n’ student & display the 2nd lowest age.

#include <stdio.h>

void read(int age[], int n);
void second_lowest(int age[], int n);

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int age[n];

    read(age, n);

    second_lowest(age, n);

    return 0;
}


void read(int age[], int n)
{
    int i;

    printf("Enter the age of the students: \n");
    for(i = 0; i < n; i++)
    {
        printf("For student %d: ", i+1);
        scanf("%d",&age[i]);
    }
}

void second_lowest(int age[], int n)
{
    int i, j, temp;

    for(i = 0; i < n; i++)
    {
        for(j = i+0; j < n; j++)
        {
            if(age[i] < age[j])
            {
                temp = age[i];
                age[i] = age[j];
                age[j] = temp;
            }
        }
    }

    printf("\n....................................\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", age[i]);
    }

    printf("\n....................................\n");
    if(age[n-1] < age[n-2])
    {
        printf("The second lowest age is: %d", age[n-2]);
    }
    else if(age[n-1] == age[n-2])
    {
        printf("The second lowest age is: %d", age[n-3]);
    }
    else if(age[n-1] == age[n-3])
    {
        printf("The second lowest age is: %d", age[n-4]);
    }
    printf("\n....................................\n");

}
