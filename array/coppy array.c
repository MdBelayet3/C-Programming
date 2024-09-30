//write a program that copying all the element from an array to another array
#include<stdio.h>
int main(){
    int array1[10],array2[10],i,n;
    printf("How many number : ");
    scanf("%d",&n);
    printf("Enter those number : ");
    for(i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    printf("Array 1 is : ");
    for(i=0;i<n;i++){
        printf("%d, ",array1[i]);
    }
    //copying all the element form array1 to array2
    for(i=0;i<n;i++){
        array2[i]=array1[i];
    }
    printf("\nArray 2 is : ");
    for(i=0;i<n;i++){
        printf("%d, ",array2[i]);
    }
    getch();
}
