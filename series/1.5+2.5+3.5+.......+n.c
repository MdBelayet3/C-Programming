#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("Enter floating number of n : ");
    scanf("%f",&n);
    printf("1.5+2.5+3.5+......+%.1f",n);
    for(i=1.5;i<=n;i=i+1)
    {
        sum=sum+i;
    }
    printf("=%.1f",sum);
}
