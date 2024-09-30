#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int number) {
    int reversedNumber = 0, originalNumber = number;

    do {
        int remainder = number % 10;  // Extract the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Append the digit to reversedNumber
        number /= 10;  // Remove the last digit from the original number
    } while (number != 0);

    return originalNumber == reversedNumber;
}

int main() {
    int num;

    printf("Enter a number to check if it's a palindrome: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

