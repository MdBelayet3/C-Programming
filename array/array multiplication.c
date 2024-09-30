#include<stdio.h>
int main(){
    int i,j,r1,r2,c1,c2,first[10][10],second[10][10];
    printf("Enter rows and column of first matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and column of second matrix : ");
    scanf("%d %d",&r2,&c2);
    while(c1 != r2){
        printf("\nError !! Column of first matrix not equal to row of second matrix.\n");
        printf("\nEnter rows and column of first matrix : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter rows and column of second matrix : ");
        scanf("%d %d",&r2,&c2);
    }

    //first matrix scanning
    printf("\nEnter the element of first matrix.\n");
    for(i=0;i<r1;i++){
        printf("\n");
        for(j=0;j<c1;j++){
            printf("first[%d][%d] : ",i,j);
            scanf("%d",&first[i][j]);
        }
    }

    //second matrix scanning
    printf("Enter the element of second matrix.\n");
    for(i=0;i<r2;i++){
        printf("\n");
        for(j=0;j<c2;j++){
            printf("second[%d][%d] : ",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    printf("\n");

    //first matrix printing
    printf("first matrix : \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d  ",first[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //second matrix printing
    printf("second matrix : \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d  ",second[i][j]);
        }
        printf("\n");
    }
}
