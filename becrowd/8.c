#include<stdio.h>
int main()
{
    int cp1,up1,cp2,up2;
    float pp1,pp2,ans;
    scanf("%d %d %f",&cp1,&up1,&pp1);
    scanf("%d %d %f",&cp2,&up2,&pp2);
    ans=((up1*pp1)+(up2*pp2));
    printf("VALOR A PAGAR: R$ %.2f",ans);
    return 0;
}
