#include<stdio.h>
int main()
{
    double a,b,c,d,e,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
   d=((b*b)-(4*a*c));
   e=sqrt(d);
   r1=(-b+e)/(2*a);
   r2=(-b-e)/(2*a);
   if(a==0 || d<0)
   printf("Impossivel calcular\n");
   else
   {printf("R1 = %.5lf\n",r1);
   printf("R2 = %.5lf\n",r2);
   }
   return 0;
}
