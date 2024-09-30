#include <stdio.h>

int main() {
    double base, exponent, result = 1.0;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Checking for negative exponent
    if (exponent < 0) {
        printf("This program does not handle negative exponents.\n");
    } else {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }

        printf("%.2lf raised to the power %.2lf = %.2lf\n", base, exponent, result);
    }

    return 0;
}

