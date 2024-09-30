#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    do {
        remainder = number % 10;  // Extract the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Append the digit to reversedNumber
        number /= 10;  // Remove the last digit from the original number
    } while (number != 0);

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

