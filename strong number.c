#include<stdio.h>
int main()
{
    int num,temp,i,r,sum=0,fact;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp=num;
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
    if(sum==num)
        printf("%d is a strong number.\n",num);
    else
        printf("%d is not a strong number.\n",num);

}
