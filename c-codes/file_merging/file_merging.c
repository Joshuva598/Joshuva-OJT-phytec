#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *mergedFile;
    char ch;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        perror("Error opening input files");
        return 1;
    }

    mergedFile = fopen("mergedFile.txt", "w");

    if (mergedFile == NULL) {
        perror("Error opening output file");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }

    printf("Files merged successfully.\n");

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    return 0;
}

