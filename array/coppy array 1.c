#include<stdio.h>
int main(){
    int a1[10],a2[10],i,n;
    printf("How many number do you want to take : ");
    scanf("%d",&n);
    printf("Enter those numbers of array : ");
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("The array1 is : ");
    for(i=0;i<n;i++){
        printf("%d ",a1[i]);
    }
    for(i=0;i<n;i++){
        a2[i]=a1[i];
    }
    printf("\nThe array2 is : ");
    for(i=0;i<n;i++){
        printf("%d ",a2[i]);
    }
}

