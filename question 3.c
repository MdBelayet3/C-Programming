#include<stdio.h>
int main()
{
    int lnum,num;
    printf("The last value of the series : ");
    scanf("%d",&lnum);
    for(num=100;num>=lnum;num=num-5)
    {
        printf("%d, ",num);
    }
}
