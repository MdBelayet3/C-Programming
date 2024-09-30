#include <stdio.h>

float sumOfSeries(int N) {
    float sum = 0.0;

    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    return sum;
}

int main() {
    int num;

    printf("Enter the value of N: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        float result = sumOfSeries(num);
        printf("Sum of the series up to %d terms: %.4f\n", num, result);
    }

    return 0;
}

