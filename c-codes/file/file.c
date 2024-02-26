#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);

    printf("Data written to the file successfully.\n");

    fclose(file);

    return 0;
}

