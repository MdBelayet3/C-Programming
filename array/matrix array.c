#include<stdio.h>
int main(){
    int A[4][4],i,j;
    int array_size = sizeof(A[0][0]);
    int fullArraySize = sizeof(A);
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("A[%d][%d] = ",i,j);
        scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<2;i++){
        for(j=1;j<3;j++){
            printf(" %d ",A[i][j]);
        }
            printf("\n");
    }
    printf("The size of one element is = %d\n",fullArraySize);
    printf("The size of one element is = %d",array_size);
}
