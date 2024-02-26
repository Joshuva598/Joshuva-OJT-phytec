#include <stdio.h>

void printDiamond(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number for a proper diamond pattern.\n");
        return 1;
    }

    printDiamond(n);

    return 0;
}

