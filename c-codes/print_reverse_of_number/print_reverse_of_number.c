#include<stdio.h>

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int n = number;
    int reversedResult = 0;
    int num;

    while (n > 0) {
        num = n % 10;
        reversedResult = reversedResult * 10 + num;
        n = n / 10;
    }

    printf("Reverse of given number: %d\n", reversedResult);

    return 0;
}

