#include<stdio.h>
int main(){
    int A[100][100],B[100][100],i,j,row_num,col_num;
    printf("How many row you want to take : ");
    scanf("%d",&row_num);
    printf("How many column you want to take : ");
    scanf("%d",&col_num);
    printf("Enter A matrix element : ");
    for(i=0;i<row_num;i++){
        for(j=0;j<col_num;j++){
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
