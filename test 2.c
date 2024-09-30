#include<stdio.h>
int main()
{
    float c, f;
    printf("enter fahranheit temperature : ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("the centigrade temperature = %.2f\n",c);
}
