#include <stdio.h>

void printLowerCase(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            putchar(str[i] + ('a' - 'A'));
        } else {
            putchar(str[i]);
        }
        i++;
    }
}

int main() {
    char inputString[100]; 

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Lowercase of the string: ");
    printLowerCase(inputString);
    printf("\n");

    return 0;
}

