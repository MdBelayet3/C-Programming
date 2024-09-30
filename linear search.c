//write a program that read any value of an array and display it's position of this /array
//like [23,45,67,15,24,70] what is the position of 15
#include<stdio.h>
int main(){
    int num[ ]={12,45,67,34,86,33,30},value,i,position=-1;
    printf("Enter this value that you want : ");
    scanf("%d",&value);
    for(i=0;i<7;i++){
        if(value==num[i]){
            position=i+1;
            break;
        }
    }
    if(position==-1){
        printf("Not Found");
    }
    else{
        printf("In this array position of %d is %d",value,position);
    }
}
