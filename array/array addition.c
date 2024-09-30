#include<stdio.h>
int main(){
    int row_num,col_num,i,j,A[10][10],B[10][10],C[10][10];
    printf("Enter row number : ");
    scanf("%d",&row_num);
    printf("Enter column number : ");
    scanf("%d",&col_num);
    //A matrix scanning
    printf("\n");
    for(i=0;i<row_num;i++){
        for(j=0;j<col_num;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //B matrix scanning
    printf("\n");
    for(i=0;i<row_num;i++){
        for(j=0;j<col_num;j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //A matrix printing
    printf("\n");
    printf("A =");
    for(i=0;i<row_num;i++){
        printf("\t");
        for(j=0;j<col_num;j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    //B matrix printing
    printf("\n");
    printf("B =");
    for(i=0;i<row_num;i++){
        printf("\t");
        for(j=0;j<col_num;j++){
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }

    //addition of  A and B matrix
    printf("\n");
    printf("A + B =");
    for(i=0;i<row_num;i++){
        printf("\t");
        for(j=0;j<col_num;j++){
            printf("%d  ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
    }
