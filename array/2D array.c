#include<stdio.h>
int main(){
    int a[3][4]={
        {5,6,7,8},
        {15,16,17,18},
        {25,26,27,28}
    },row,col;
    printf("This array is : \n");
    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
}
