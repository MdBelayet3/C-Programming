//3.Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
    int num=-4;
    if(num>0)
        printf("The number is positive.");
    else if(num<0)
        printf("The number is negative.");
    else
        printf("The number is zero.");
}
