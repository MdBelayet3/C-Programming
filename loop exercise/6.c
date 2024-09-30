#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Using a while loop to determine if the number is odd or even
    while (number != 0) {
        if (number % 2 == 0) {
            printf("%d is an even number.\n", number);
        } else {
            printf("%d is an odd number.\n", number);
        }

        printf("Enter another integer number (or 0 to exit): ");
        scanf("%d", &number);
    }

    printf("Exiting the program.\n");

    return 0;
}

