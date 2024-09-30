//write a program that read three numbers and display their sum and avarege.
#include<stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;
    printf("Enter three numbers :");
    scanf("%d %d %d",&num1, &num2,&num3);
    sum=num1+num2+num3;
    avg=(float)sum/3;
    printf("Sum= %d\n",sum);
    printf("Avarege =%.2f",avg);

}
