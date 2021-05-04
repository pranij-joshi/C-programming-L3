//26.WAP that asks the user for three numbers. Then determine the largest number among them.
 #include <stdio.h>

 int main()
 {
     int n1, n2, n3;

     printf("Enter the value for n1: ");
     scanf("%d", &n1);

     printf("Enter the value for n2: ");
     scanf("%d", &n2);

     printf("Enter the value for n3: ");
     scanf("%d", &n3);

     if (n1>n2 && n1> n3)
     {
         printf("The largest number is n1: %d", n1);
     }

     else if(n2>n1 && n2>n3)
     {
         printf("The largest number is n2: %d", n2);
     }

     else
     {
         printf("The largest number is n3: %d", n3);
     }

     return 0;
 }
