//write a program that read any terms of number and display thats terms of number fibonacci series using array
//fibonacci series : 0 1 1 2 3 5 8 13 21
#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("The fibonacci series is : ");
   for(i=0;i<n;i++){
    printf("%d\n ",a[i]);
   }
}
