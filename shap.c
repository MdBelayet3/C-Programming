#include<stdio.h>
int main()
{
 int x;
 double result;
 printf("Enter any number : ");
 scanf("%d",&x);
 result=log10(x);
 printf("log10(%d) = %lf\n",x,result);
}
