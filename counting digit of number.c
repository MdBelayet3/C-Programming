#include<stdio.h>
int main()
{
    int num,n,count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The digit of this number : %d",count);
}

