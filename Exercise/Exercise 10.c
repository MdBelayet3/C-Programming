//10.Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("Uppercase alphabet");
    else
        printf("Lowercase alphabet");
}
