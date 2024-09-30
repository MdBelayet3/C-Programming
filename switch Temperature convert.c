#include<stdio.h>
int main()
{
    int choice;
    float temp, result;
    printf("Temperature conversion menu\n ");
    printf("1. Fahrenheit to celcius\n");
    printf("2. Celcius to Fahrenheit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case (1):
    {
        printf("Enter your Fahrenheit temperature : ");
        scanf("%f",&temp);
        result =(temp-32)/1.8;
        printf("The temperature in celcius is =%.2f\n",result );
        break;
    }
    case (2):
    {
        printf("Enter your celcius temperature : ");
        scanf("%f",&temp);
        result =(temp*1.8)+32;
        printf("The temperature in Fahrenheit is =%.2f\n",result );
        break;
    }
    default :
        printf("Not valid");
    }
}
