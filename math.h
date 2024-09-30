#include<stdio.h>
int main()
{
    float t, result;
    printf("Enter any angle : ");
    scanf("%f",&t);
    result=sin(t);
    printf("sin(%.2f) = %.2f\n",t,result);
}
