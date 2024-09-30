//18.Write a C program to calculate profit or loss.
#include <stdio.h>

int main() {
    double costPrice, sellingPrice, profitOrLoss;

    printf("Enter the cost price: ");
    scanf("%lf", &costPrice);

    printf("Enter the selling price: ");
    scanf("%lf", &sellingPrice);

    profitOrLoss = sellingPrice - costPrice;

    if (profitOrLoss > 0) {
        printf("You have made a profit of %.2lf.\n", profitOrLoss);
    } else if (profitOrLoss < 0) {
        printf("You have incurred a loss of %.2lf.\n", -profitOrLoss);
    } else {
        printf("You neither made a profit nor incurred a loss.\n");
    }

    return 0;
}

