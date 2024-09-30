#include<stdio.h>
#include<math.h>
int main()
{
    double t_degree,t_radians,result;
    printf("Enter the value of degree : ");
    scanf("%lf",&t_degree);
    t_radians=(t_degree*(M_PI/180));
    result=sin(t_radians);
    printf("sin(%.2lf) = %.5lf",t_degree,result);

}
