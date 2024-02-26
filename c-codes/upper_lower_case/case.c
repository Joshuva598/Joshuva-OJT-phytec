#include <stdio.h>

char oppositeCase(char ch);

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Opposite case: %c\n", oppositeCase(ch));

    return 0;
}

char oppositeCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {

        return ch - 32;
    } else if (ch >= 'A' && ch <= 'Z') {

        return ch + 32;
    } else {

        return ch;
    }
}

