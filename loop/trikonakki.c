#include<stdio.h>
int main()
{
    int i,f1=0,f2=1,n, res;
    printf("Enter any number : ");
    scanf("%d",&n);
    i=1;
    printf("%d %d",f1,f2);
    while(i<=(n-2))
    {
        res=f1+f2;
        printf("Numbers are = %d\n",res);
        f1=f2;
        f2=res;
        i++;
    }
}
