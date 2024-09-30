#include <stdio.h>
#include <math.h>
int mx(int a, int b) {
     return (a+b+abs(a-b))/2;
}
void main() {
    int x,y,z,answer;
    scanf("%d %d %d", &x, &y, &z); // or any other way to read 3 numbers
    answer=mx(a,b);
    answer=mx(answer, c);
    printf("Max of %d, %d, %d is %d\n", a, b, c, answer);
}
