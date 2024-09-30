#include<stdio.h>
int main()
{
    float mark;
    printf("Enter a mark : ");
    scanf("%f",&mark);
    if(mark>=33)
        printf("Pass");
    else
        printf("Fail");
}
