//3*4+5*6+7*8+........+n1*n2
#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=3,b=4;
    printf("Enter n1 and n2 : ");
    scanf("%d %d",&n1,&n2);
    printf("3*4+5*6+7*8+........+%d*%d",n1,n2);
    while(a<=n1&&b<=n2)
    {
        sum=sum+a*b;
        a=a+2;
        b=b+2;
    }
    printf("=%d",sum);
    return 0;

}
