#include<stdio.h>
int main(){
    int col_num,row_num,i,j;
    int A[10][10];
    printf("Enter row number : ");
    scanf("%d",&row_num);
    printf("Enter column number : ");
    scanf("%d",&col_num);
    //loop for scanning array matrix
    for(i=0;i<row_num;i++){
        printf("\n");
        for(j=0;j<col_num;j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
        printf("A = ");

    //loop for printing  array matrix
    for(i=0;i<row_num;i++){
        printf("\t");
        for(j=0;j<col_num;j++){
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
}

