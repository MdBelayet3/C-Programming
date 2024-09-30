#include <stdio.h>

int findGCD(int a, int b) {
    int temp;

    // Using Euclidean algorithm to find GCD
    do {
        temp = a % b;
        a = b;
        b = temp;
    } while (b != 0);

    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Please enter non-negative integers.\n");
    } else {
        int gcd = findGCD(num1, num2);
        printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
    }

    return 0;
}

