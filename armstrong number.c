#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = log10(number) + 1;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n");
    } else {
        printf("%d is not an Armstrong number.\n");
    }

    return 0;
}

