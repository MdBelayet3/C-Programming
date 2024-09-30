#include<stdio.h>
int main()
{
    int r,i,temp,sum=0,initialNum,finalNum;
    printf("Enter  Initial Number : ");
    scanf("%d",&initialNum);
    printf("Enter Final Number : ");
    scanf("%d",&finalNum);
    for(i=initialNum;i<=finalNum;i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(sum==i)
            printf("Armstrong Number : %d\n",sum);
        sum=0;
    }
   return 0;
}
