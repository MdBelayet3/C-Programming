#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter  : ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='u')
        printf("The letter is vowel. ");
    else
        printf("The letter is consonant.");
}
