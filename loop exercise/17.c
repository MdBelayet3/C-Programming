
#include <stdio.h>

int main() {
    int rows, i = 1;

    printf("Enter the number of rows for the number pattern: ");
    scanf("%d", &rows);

    while (i <= rows) {
        int j = 1;
        while (j <= i) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
