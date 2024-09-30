#include<stdio.h>
int main()
{
    int x;
    double y,ans;
    scanf("%d",&x);
    scanf("%lf",&y);
    ans=x/y;
    printf("%.3lf km/l\n",ans);
    return 0;
}
