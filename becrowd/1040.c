#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5,avrg;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    printf("Are you read any other number? choice : \n");
    printf("(1) Yes\n");
    printf("(2) No\n");
    avrg=(n1+n2+n3+n4)/4;
    printf("Media: %.1lf\n",avrg);
    if(avrg>=7.00)
        printf("Aluno aprovado.\n");
    else if(avrg<5.0)
        printf("Aluno reprovado.\n");
    else
        printf("Aluno em exame.\n");
    return 0;
}
