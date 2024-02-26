#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    
    int arr[MAX_SIZE];

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("\nArray elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);

        
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

