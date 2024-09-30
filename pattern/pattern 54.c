#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Enter the value of n : ");
    scanf("%d");
    for(row=n;row>=1;row--)
    {
        for(col=n-row;col>=1;col--)
        {
            printf("  ");
        }
        for(col=2*row-1;col>=1;col--)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}
