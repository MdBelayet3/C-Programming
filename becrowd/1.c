#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    for(i=2;i>num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("Thats prime number\n");
    else
        printf("Thats not prime\n");
   return 0;
}
