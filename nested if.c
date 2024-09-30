#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if (num%2==0)
    {
        if(num%3==0)
            printf("Number is divisible 2 and also 3");
        else
            printf("Number is divisible 2 but not 3");
    }
    else
        printf("num is odd");
}
