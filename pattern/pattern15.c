#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter value of row : ");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",64+col);
        }
        printf("\n");
    }
}
