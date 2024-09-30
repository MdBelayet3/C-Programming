#include<stdio.h>
int main(){
        int a[100],n,i,max=a[0];
        printf("How many number : "); //1 2 3 4 5
        scanf("%d",&n);
        printf("Enter those numbers : ");
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++){
            if(max<a[i]){
                max=a[i];
            }
        }
        printf("The maximum number is = %d",max);
}
