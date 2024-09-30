//16.Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main()
{
    float s1, s2, s3;
    printf("Enter 1st side of triangle : ");
    scanf("%f",&s1);
    printf("Enter 2nd side of triangle : ");
    scanf("%f",&s2);
    printf("Enter 3rd side of triangle : ");
    scanf("%f",&s3);
    if(s1==s2==s3)
        printf("Equilateral Triangle.");
    else if(s1==s2 || s2==s3 || s1==s3 )
        printf("Isosceles Triangle.");
    else
        printf("Scalene Triangle.");
}
