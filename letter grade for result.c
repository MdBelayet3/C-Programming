#include<stdio.h>
int main()
{
    float mark;
    printf("Enter a mark : ");
    scanf("%f",&mark);
    if(mark>100 || mark<=0)
        printf("Invalid");
    else if(mark<=100 && mark>=80)
        printf("A+");
    else if(mark<=79 && mark>=70)
        printf("A");
    else if(mark<=69 && mark>=60)
        printf("A-");
    else if(mark<=59 && mark>=50)
        printf("B");
    else if(mark<=49 && mark>=40)
        printf("C");
    else if(mark<=39 && mark>=33)
        printf("D");
    else
        printf("Fail");
}
