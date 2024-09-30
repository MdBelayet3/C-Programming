#include<stdio.h>
int main(){
    int a[100],n,i,min = a[0];
    printf("How many number : ");
    scanf("%d",&n);
    printf("Enter those numbers : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("The minimum of this array = %d ",min);
}
