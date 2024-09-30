#include<stdio.h>
int main()
{
    int num;
    printf("Your password :");
    scanf("%d",&num);
    switch(num)
    {
    case '1122':
        printf("Correct password"); break;
    default:
        printf("wrong password");
    }
}
