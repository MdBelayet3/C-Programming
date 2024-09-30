#include<stdio.h>
int main(){
    int A[100][100],i,col_num,row_num,j;
    printf("How many row you want to take? : ");
    scanf("%d",&row_num);
    printf("How many column you want to take? : ");
    scanf("%d",&col_num);
    printf("\n");
    for(i=0;i<row_num;i++){
        for(j=0;j<col_num;j++){
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("2D array is : \n");
    for(i=0;i<row_num;i++){
        for(j=0;j<col_num;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
