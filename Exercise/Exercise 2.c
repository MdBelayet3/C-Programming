//2.Write a C program to find maximum between three numbers.
#include<stdio.h>
int main()
{
    int num1=60, num2=75, num3=54;
    if(num1>num2 && num1>num3)
        printf("Maximum number is = %d\n",num1);
    else if(num2>num1 && num2>num3)
        printf("Maximum number is = %d\n", num2);
    else
        printf("Maximum number is = %d", num3);
}
