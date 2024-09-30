#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the number of n : ");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
       //printing spaces
       for(col=n-row;col>=1;col--)
       {
           printf("  ");
       }
       //printing rows value
      for(col=2*row-1;col>=1;col--)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
}
