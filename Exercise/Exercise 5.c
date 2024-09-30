//5.Write a C program to check whether a number is even or odd.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num%2==0)
        printf(" Even number.");
    else
        printf("Odd number.");
}
