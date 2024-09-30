#include<stdio.h>
int main()
{
    int first=2,second=1,i,lucas,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Lucas series : 2,1,");
 for(i=3;i<=n;i++)
    {
       lucas=first+second;
       first=second;
       second=lucas;
       printf("%d,",lucas);
    }

}
