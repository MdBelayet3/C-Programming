//6.Write a C program to check whether a year is leap year or not.
#include<stdio.h>
int main()
{
   int year;
   printf("Enter a year : ");
   scanf("%d",&year);
   if(year%400==0)
        printf("Leap year");
   else if(year%4==0 && year%100!=0)
    printf("Leap year");
   else
    printf("Not leap year");
}
