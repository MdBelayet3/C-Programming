#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number <= 1) {
        return false; // 1 and numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; // Number is divisible by i, hence not prime
        }
    }

    return true; // Number is prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

