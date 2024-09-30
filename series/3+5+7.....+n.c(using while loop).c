// sum of the series 3+5+7+......+n
#include<stdio.h>
int main()
{
    int num,sum=0,a=3;
    printf("Enter the last number of the series : ");
    scanf("%d",&num);
    printf("3+5+7+......+%d",num);
    while(a<=num)
    {
        sum=sum+a;
        a=a+2;
    }
    printf("=%d",sum);
    return 0;
}
