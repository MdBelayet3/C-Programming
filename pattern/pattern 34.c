#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++)
        {
            if(row%2==0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}
