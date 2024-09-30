#include<stdio.h>
int main()
{
    int hour,speed;
    double fuel;
    scanf("%d",&hour);
    scanf("%d",&speed);
    fuel=(speed/12.0)*hour;
    printf("%.3lf\n",fuel);
    return 0;
}
