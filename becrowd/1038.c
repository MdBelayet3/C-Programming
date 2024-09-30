#include<stdio.h>
int main()
{
    int n,m;
    double p1;
    scanf("%d %d",&n,&m);
    switch(n)
    {
    case(1):
        {
            p1=(m)*4.00;
            printf("Total: R$ %.2lf\n",p1); break;
        }
        case(2):
        {
            p1=(m)*4.50;
           printf("Total: R$ %.2lf\n",p1); break;
        }
        case(3):
        {
            p1=(m)*5.00;
            printf("Total: R$ %.2lf\n",p1); break;
        }
        case(4):
        {
            p1=(m)*2.00;
            printf("Total: R$ %.2lf\n",p1); break;
        }
        case(5):
        {
            p1=(m)*1.50;
           printf("Total: R$ %.2lf\n",p1); break;
        }
    }
    return 0;
}
