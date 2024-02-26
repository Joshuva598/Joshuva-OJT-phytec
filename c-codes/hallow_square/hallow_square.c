#include <stdio.h>

void printHollowSquare(int side) {
    int i, j;

    for (i = 1; i <= side; i++) {
        for (j = 1; j <= side; j++) {
            if (i == 1 || i == side || j == 1 || j == side) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int side;

    printf("Enter the side length of the hollow square: ");
    scanf("%d", &side);

    printHollowSquare(side);

    return 0;
}

