#include<stdio.h>
int main()
{
    int i=2;
print:
    printf("i=%d\t",i);
    i=i+2;
    if(i<=100)
        goto print;
    return 0;

}
