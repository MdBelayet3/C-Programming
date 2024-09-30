//8.Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%C",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U' )
        printf("Vowel");
    else
        printf("Consonant");
}
