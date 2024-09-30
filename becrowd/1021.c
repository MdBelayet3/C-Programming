#include<stdio.h>
int main()
{
    double n;
    int n1;
    scanf("%lf",&n);
    printf("NOTAS:\n");
    n1=trunc(n/100);
    printf("%d nota(s) de R$ 100.00\n",n1);
    n=(n/100-n1)*100;
    n1=trunc(n/50);
    printf("%d nota(s) de R$ 50.00\n",n1);
    n=(n/50-n1)*50;
    n1=trunc(n/20);
    printf("%d nota(s) de R$ 20.00\n",n1);
    n=(n/20-n1)*20;
    n1=trunc(n/10);
    printf("%d nota(s) de R$ 10.00\n",n1);
    n=(n/10-n1)*10;
    n1=trunc(n/5);
    printf("%d nota(s) de R$ 5.00\n",n1);
    n=(n/5-n1)*5;
    n1=trunc(n/2);
    printf("%d nota(s) de R$ 2.00\n",n1);
    n=(n/2-n1)*2;
    printf("MOEDAS:\n");
    n1=trunc(n/1);
    printf("%d moeda(s) de R$ 1.00\n",n1);
    n=(n/1-n1)*1;
    n1=trunc(n/0.50);
    printf("%d moeda(s) de R$ 0.50\n",n1);
    n=(n/0.50-n1)*0.50;
    n1=trunc(n/0.25);
    printf("%d moeda(s) de R$ 0.25\n",n1);
    n=(n/0.25-n1)*0.25;
    n1=trunc(n/0.10);
    printf("%d moeda(s) de R$ 0.10\n",n1);
    n=(n/0.10-n1)*0.10;
    n1=trunc(n/0.05);
    printf("%d moeda(s) de R$ 0.05\n",n1);
    n=(n/0.05-n1)*0.05;
    n1=trunc(n/0.01);
    printf("%d moeda(s) de R$ 0.01\n",n1);
    return 0;
}

