#include <stdio.h>

void printLeftAngleTriangle(char str[]) {
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; j <= i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
}

int main() {
    char inputString[100]; 

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Left Angle Triangle:\n");
    printLeftAngleTriangle(inputString);

    return 0;
}

