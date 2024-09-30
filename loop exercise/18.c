#include <stdio.h>

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, base = 1;

    while (binaryNumber != 0) {
        int remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * base;
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    long long binaryNum;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    int decimalNum = binaryToDecimal(binaryNum);
    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}

