#include<stdio.h>
int main()
{
     int i ,n;
    printf("Enter any number of n : ");
    scanf("%d",&n);
    for(i=2; i<=n; i=i+2)
    {
        printf("%d\n",i);
    }
}
