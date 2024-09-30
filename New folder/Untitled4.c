#include <stdio.h>
#include <math.h>

int main() {
    double x, base, logValue;

    printf("Enter the number: ");
    scanf("%lf", &x);

    printf("Enter the base: ");
    scanf("%lf", &base);

    // Calculate logarithm with the specified base
    logValue = log(x) / log(base);

    printf("The logarithm of %.2lf with base %.2lf is: %.4lf\n", x, base, logValue);

    return 0;
}
