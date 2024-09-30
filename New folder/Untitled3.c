#include<stdio.h>
#include<math.h>
int main()
{
    float x,result;
    printf("Enter a number : ");
    scanf("%f",&x);
    result=log10(x);
    printf("log 10(%.1f) = %.5f\n",x,result);
}
