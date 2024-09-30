// sum of the series 1+2+3+.......+n
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the last number of the series : ");
    scanf("%d",&num);
    printf("1+2+3+.....+%d",num);
    for(i=1;i<=num;i=i+1)
    {
        sum=sum+i;
    }
    printf("=%d",sum);
    getch();
}
