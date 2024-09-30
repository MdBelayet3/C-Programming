#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next, count = 0;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &N);

    printf("Fibonacci Series up to %d terms:\n", N);

    while (count < N) {
        if (count <= 1) {
            next = count;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
        count++;
    }
    printf("\n");

    return 0;
}

