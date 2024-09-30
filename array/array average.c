//write a program that read any array number and display theirs averavge
#include<stdio.h>
int main(){
        int a[100],n,i,sum=0;
        printf("How many number : ");
        scanf("%d",&n);
        printf("Enter those numbers : ");
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            sum=sum+a[i];
        }
        printf("The average is = %0.2f",(float)sum/n);
}

