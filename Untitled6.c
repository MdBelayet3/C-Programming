#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    printf("Enter value of M and N : ");
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;

    }
    printf("sum=%d",sum);
}
