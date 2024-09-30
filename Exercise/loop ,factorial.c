//write a c program that calculate the factorial of the given number
#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter a numbet : ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        fact =fact*i;
        printf("i=%d fact=%d\n",i,fact);

    }
}
