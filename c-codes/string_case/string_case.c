#include <stdio.h>
#include <ctype.h>

void printingUpperCase(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        putchar(toupper(str[i]));
        i++;
    }
}

int main() {
    char inputString[100]; 

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("Uppercase of the string: ");
    printingUpperCase(inputString);
    printf("\n");

    return 0;
}

