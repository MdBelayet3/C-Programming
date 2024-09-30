#include<stdio.h>
int main(){
    int A[100][100],i,j,col_num,row_num;
    printf("How many row you want to take? : ");
    scanf("%d",&row_num);
    printf("How many column you want to take? : ");
    scanf("%d",&col_num);
    for(i=1;i<=row_num;i++){
        printf("Assign the %d value of %d number row : \n",col_num,i);
        for(j=0;j<col_num;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("This array is = \n");
    for(i=1;i<=row_num;i++){
        for(j=0;j<col_num;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
