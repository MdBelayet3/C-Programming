#include <stdio.h>

void decimalToBinary(int decimalNumber) {
    long long binaryNumber = 0;
    int remainder, placeValue = 1;

    do {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * placeValue;
        placeValue *= 10;
        decimalNumber /= 2;
    } while (decimalNumber != 0);

    printf("Binary equivalent: %lld\n", binaryNumber);
}

int main() {
    int decimalNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    decimalToBinary(decimalNum);

    return 0;
}

