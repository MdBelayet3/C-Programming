//write a program that read any number of array display their sum and average
#include<stdio.h>
int main()
{
    int a[100], sum=0, i,n;
    printf("How many number you want : ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
     scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        sum = sum+a[i];
    }
    printf("The sum = %d\n",sum);
    printf("The average is = %0.2f\n", (float)sum/n);
}

