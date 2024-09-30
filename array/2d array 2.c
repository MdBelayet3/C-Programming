#include<stdio.h>
int main(){
    int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},num=20,i;
    //printf("Enter the numbers of array length : ");
    //scanf("%d",&num);
   // for(i=0;i<num;i++){
     //   printf("a[%d] : ",i);
      //  scanf("%d",&a[i]);
   // }
    printf("a 10 to 20 position elements = :");
    for(i=4;i<num-6;i++){
        printf(" %d ",a[i]);
    }
}
