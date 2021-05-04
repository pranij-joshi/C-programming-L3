//67. WAP to calculate the factorial of given number by using ‘goto’ statement.

#include <stdio.h>

int main()
{
       int num;
       int fact = 1;
       printf("Enter a number: ");
       scanf("%d",&num);

       if(num<0)
       {
            goto end;
       }
       for(int i=1; i<=num; i++)
       {
           fact = fact * i;
       }

       printf("Factorial of %d is = %d", num, fact);
       end:

       return 0;

}
