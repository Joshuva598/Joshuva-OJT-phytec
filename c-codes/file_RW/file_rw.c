#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[100];

    inputFile = fopen("input.txt", "r");

    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    while (fgets(line, sizeof(line), inputFile) != NULL) {
        fputs(line, outputFile);
    }

    printf("File copied successfully.\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

