#include <stdio.h>

int findGCD(int a, int b) {
    int temp;

    // Using Euclidean algorithm to find GCD
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
    } else {
        int lcm = findLCM(num1, num2);
        printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    }

    return 0;
}

N
