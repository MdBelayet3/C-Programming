#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",64+col);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",64+col);
        }
        printf("\n");
    }
}
