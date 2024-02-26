#include <stdio.h>
#include <ctype.h>

void printVowels(const char *word);

int main() {
    char word[100];

   
    printf("Enter a word: ");
    scanf("%s", word);

    
    printVowels(word);

    return 0;
}

void printVowels(const char *word) {
    printf("Vowels in the word: ");
    
   
    for (int i = 0; word[i] != '\0'; i++) {
       
        char currentChar = toupper(word[i]);

        
        if (currentChar == 'A' || currentChar == 'E' || currentChar == 'I' || currentChar == 'O' || currentChar == 'U') {
            printf("%c ", word[i]);
        }
    }

    printf("\n");
}

