#include <stdio.h>

void printNumberInWords(int num);

int main() {
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the number in words
    printNumberInWords(number);

    return 0;
}

void printNumberInWords(int num) {
    // Arrays to store words for numbers
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Check if the number is out of range
    if (num < 1 || num > 9999) {
        printf("Number out of range (1-9999)\n");
        return;
    }

    // Extract digits
    int thousands = num / 1000;
    int hundreds = (num % 1000) / 100;
    int tensPart = (num % 100) / 10;
    int onesPart = num % 10;

    // Print thousands place
    if (thousands > 0) {
        printf("%s Thousand ", ones[thousands]);
    }

    // Print hundreds place
    if (hundreds > 0) {
        printf("%s Hundred ", ones[hundreds]);
    }

    // Print tens and ones place
    if (tensPart == 1) {
        printf("%s ", teens[onesPart]);
    } else {
        if (tensPart > 1) {
            printf("%s ", tens[tensPart]);
        }
        if (onesPart > 0) {
            printf("%s ", ones[onesPart]);
        }
    }

    printf("\n");
}

