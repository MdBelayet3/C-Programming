#include<stdio.h>
int main()
{
    double A,B,C,triarea,carea,traarea,sarea,rarea;
    scanf("%lf %lf %lf",&A,&B,&C);
    triarea=0.5*A*C;
    printf("TRIANGULO: %.3lf\n",triarea);
    carea=3.14159*C*C;
    printf("CIRCULO: %.3lf\n",carea);
    traarea=(((A+B)/2.0)*C);
    printf("TRAPEZIO: %.3lf\n",traarea);
    sarea=B*B;
    printf("QUADRADO: %.3lf\n",sarea);
    rarea=A*B;
    printf("RETANGULO: %.3lf\n",rarea);
    return 0;
}
