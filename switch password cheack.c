//write a program that read a password(1122) and check the password correct or wrong .

#include<stdio.h>
int main()
{
    int password;
    printf("Enter your password : ");
    scanf("%d",&password);
    switch (password)
    {
    case (1122):
        printf("Correct password");
        break;
    default :
        printf("Incorrect password");
    }
}
