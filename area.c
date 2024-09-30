#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter centigrade temperature = ");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("The fahrenheit temperature is = %.2f",f);
}
