#include <stdio.h>
#include <string.h>

#define MAX_KEY_LENGTH 20

int main() {
    char predefinedKey[MAX_KEY_LENGTH] = "open123"; 
    char userKey[MAX_KEY_LENGTH];

    printf("Enter the key to unlock: ");
    scanf("%s", userKey);

    
    if (strcmp(predefinedKey, userKey) == 0) {
        printf("Lock opened. Welcome!\n");
    } else {
        printf("Incorrect key. Lock remains closed.\n");
    }

    return 0;
}

