#include <stdio.h>

void primeFactors(int number) {
    printf("Prime factors of %d are: ", number);

    for (int i = 2; i <= number; i++) {
        while (number % i == 0) {
            printf("%d ", i);
            number /= i;
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a number to find its prime factors: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Prime factors are not defined for numbers less than or equal to 1.\n");
    } else {
        primeFactors(num);
    }

    return 0;
}

