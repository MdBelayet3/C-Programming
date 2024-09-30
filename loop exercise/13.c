#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the star triangle: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Printing spaces before the stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Printing stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

