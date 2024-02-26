#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Reading data from the file:\n");

    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    fclose(file);

    return 0;
}

