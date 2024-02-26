#include <stdio.h>

void printPositiveNumbers(int arr[], int size);
void printNegativeNumbers(int arr[], int size);

int main() {
    int arr[] = {5, -3, 2, -8, 9, -1, 0, -4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Positive numbers in the array: ");
    printPositiveNumbers(arr, size);

    printf("\nNegative numbers in the array: ");
    printNegativeNumbers(arr, size);
    
    printf("\n");
    return 0;
}

void printPositiveNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0)
            printf("%d ", arr[i]);
    }
}

void printNegativeNumbers(int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0)
            printf("%d ", arr[i]);
    }
}

