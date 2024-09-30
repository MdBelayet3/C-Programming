//14.Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter 1st angle of Triangle = ");
    scanf("%f",&a);
    printf("Enter 2nd angle of Triangle = ");
    scanf("%f",&b);
    printf("Enter 3rd angle of Triangle = ");
    scanf("%f",&c);
    if(a+b+c==180)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");
}
