
#include<stdio.h>
int main()
{
   int num1, num2;
   printf("Enter 1st number = ");
   scanf("%d",&num1);
   printf("Enter 2nd number =");
   scanf("%d",&num2);
   if(num1>num2)
   {
       printf("Maximum number is = %d\n",num1);
       printf("Minimum number is = %d\n",num2);
   }
   else if(num2>num1)
    {
        printf("Maximum number is = %d\n",num2);
        printf("Minimum number is = %d\n",num1);
    }
    else
        printf("Numbers are equal");
   }
