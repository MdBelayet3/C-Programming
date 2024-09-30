//4.Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
    int num=55;
    if(num%5==0)
    {
        if(num%11==0)
           printf("Number is divisible both 5 and 11");
        else
            printf("Number is divisible by 5 ");
    }
    else
        printf("Number is indivisible by 5 and 11");

}
