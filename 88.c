//88. WAP to take one dimensional array of n size and display each index individually.

int main()
{
    int n, i;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i <= n; i++)
    {
        printf("Index for %d element in array is: %d\n", i+1, i);
    }

    return 0;
}
