#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5,avrg,moreAvrg;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    avrg=(n1+n2+n3+n4)/4;
    printf("Media: %.1lf\n",avrg);
    if(avrg>=7.00)
        printf("Aluno aprovado.\n");
    else if(avrg<5.0)
        printf("Aluno reprovado.\n");
    else
        printf("Aluno em exame.\n");
        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf",n5);
        moreAvrg = (avrg+n5)/2;
        if(moreAvrg >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else
        printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",moreAvrg);
    return 0;
}
