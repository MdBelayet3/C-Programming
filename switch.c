#include<stdio.h>
int main()
{
    int num;
    printf(" enter password :");
    scanf(" %d",&num);
    switch(num)
    {
        case '1122'
        printf("correct password"); break;
        default:
            printf("'incorrect");
    }
}
