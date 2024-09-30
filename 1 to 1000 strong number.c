#include<stdio.h>
int main()
{
    int initialNum,finalNum,temp,i,r,sum=0,fact;
    printf("Enter initial number : ");
    scanf("%d",&initialNum);
    printf("Enter final number : ");
    scanf("%d",&finalNum);
  for(i=initialNum;i<=finalNum;i++)
  {
      temp=i;
    while(temp!=0)
    {
        r=temp%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
           fact=i*fact;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==i)
        printf("Strong number = %d",i);
  }

}

