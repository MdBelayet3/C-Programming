//9.Write a C program to input any character and check whether it is alphabet, digit or special
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a'  && ch<='z' )
        printf("Alphabet");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Special");

}
