#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
            continue;

        printf("i=%d\n",i);
        if(i==31)
            break;

    }
    return 0;
}
