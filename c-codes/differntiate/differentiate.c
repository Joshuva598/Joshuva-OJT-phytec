#include <stdio.h>
#include <ctype.h>

void differentiateChars(const char *str);

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    differentiateChars(inputString);

    return 0;
}

void differentiateChars(const char *str) {
    printf("Characters: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]))
            printf("%c ", str[i]);
    }

    printf("\nNumbers: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]))
            printf("%c ", str[i]);
    }

    printf("\nSymbols: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (!(isalnum(str[i]) || isspace(str[i])))
            printf("%c ", str[i]);
    }
}

