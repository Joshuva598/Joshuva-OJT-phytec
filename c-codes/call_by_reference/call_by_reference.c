#include <stdio.h>

void modifyValues(int *a, int *b);

int main() {
    int num1 = 10, num2 = 5;

    printf("Before modification: num1 = %d, num2 = %d\n", num1, num2);

    modifyValues(&num1, &num2);

    printf("After modification: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void modifyValues(int *a, int *b) {
    (*a)++;
    (*b)--;
}

