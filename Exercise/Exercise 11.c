//11.Write a C program to input week number and print week day
#include<stdio.h>
int main()
{
    int num;
    printf("Enter week number : ");
    scanf("%d",&num);
    switch (num)
    {
    case (1):
        printf("Saturday");
        break;
    case (2):
        printf("Sunday");
        break;
    case (3):
        printf("Monday");
        break;
    case (4):
        printf("Tuesday");
        break;
    case (5):
        printf("Wednesday");
        break;
    case (6):
        printf("Thursday");
        break;
    case (7):
        printf("Friday");
        break;
    default :
        printf("Not valid");
    }
}
