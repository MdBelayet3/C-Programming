#include<stdio.h>
int main()
{
    int num,temp,r,sum=0,reverse;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    reverse=sum;
    if(reverse==num)
        printf("The number is palindrome.\n");
    else
        printf("The number is not palindrome.\n");
    return 0;
}

