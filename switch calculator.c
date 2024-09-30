#include<stdio.h>
int main()
{
    int num1, num2 ;
    float result;
    char op;
    printf("Enter a oparetor(+, -, *, /)\n");
    scanf("%c",&op);
    printf("Enter two numbers : ");
    scanf("%d %d",&num1, &num2);
    switch(op)
    {
    case '+':
    {
        printf("d+ %d =%d\n",num1,num2,num1+num2);
    }
    break;
    case '-':
    {
        printf("%d - %d =%d\n",num1,num2,num1-num2);
    }
    break;
    case '*':
    {
        printf("%d * %d =%d\n",num1,num2,num1*num2);
    }
    break;
    case '/':
    {
       result=num1/num2;
        printf("%d / %d =%.1f\n",num1,num2, result);
    }
    break;
    }

}
