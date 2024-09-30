#include<stdio.h>
int main()
{
    double i,n,sum=0;
    printf("Enter value of the n : ");
    scanf("%lf",&n);
    printf("1+1/2+1/3+.....+1/%.0lf",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1/i;
    }
    printf("=%.2lf",sum);

}
