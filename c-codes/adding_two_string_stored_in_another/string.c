#include <stdio.h>

void addStrings(char str1[], char str2[], char result[]) {
    int i, j;

    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j) {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    addStrings(str1, str2, result);

    printf("Resultant string after addition: %s\n", result);

    return 0;
}

