//15.Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
    float s1,s2,s3;
    printf("Enter 1st side of triangle : ");
    scanf("%f",&s1);
    printf("Enter 2nd side of triangle : ");
    scanf("%f",&s2);
    printf("Enter 3rd side of triangle : ");
    scanf("%f",&s3);
    if(s1+s2>s3)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");
}
