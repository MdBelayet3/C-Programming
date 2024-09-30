#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>=1 && num<=100)
    {
        if(num==100)
            printf("One Hundred");
        else if (num>=10 && num<=19)
            switch(num)
            {
            case (10):
                printf("Ten");
                break;
            case (11):
                printf("Elaven");
                break;
            case (12):
                printf("Twelve");
                break;
            case (13):
                printf("Theirteen");
                break;
            case (14):
                printf("Fourteen");
                break;
            case (15):
                printf("Fifteen");
                break;
            case (16):
                printf("Sixteen");
                break;
            case (17):
                printf("Seventeen");
                break;
            case (18):
                printf("Eighteen");
                break;
            case (19):
                printf("Nineteen");
                break;
            }
        else
        {
            int tens =num/10;
            int ones=num%10;
            switch(tens)
            {
            case(2):
                printf("Twenty\t");
                break;
            case(3):
                printf("Theirty\t");
                break;
            case(4):
                printf("Fourty\t");
                break;
            case(5):
                printf("Fifty\t");
                break;
            case(6):
                printf("Sixty\t");
                break;
            case(7):
                printf("Seventy\t");
                break;
            case(8):
                printf("Eighty\t");
                break;
            case(9):
                printf("Ninty\t");
                break;
            }
            switch(ones)
            {
            case(1):
                printf("one");
                break;
            case(2):
                printf("Two");
                break;
            case(3):
                printf("Three");
                break;
            case(4):
                printf("Four");
                break;
            case(5):
                printf("Five");
                break;
            case(6):
                printf("Six");
                break;
            case(7):
                printf("Seven");
                break;
            case(8):
                printf("Eight");
                break;
            case(9):
                printf("Nine");
                break;
            }
        }
    }
    else
        printf("Not valid");
}
