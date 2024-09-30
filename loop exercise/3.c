#include <stdio.h>

int main() {
    int N, sum = 0, i = 1;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer greater than zero.\n");
    } else {
        do {
            sum += i;
            i++;
        } while (i <= N);

        printf("The sum of the first %d natural numbers = %d\n", N, sum);
    }

    return 0;
}

