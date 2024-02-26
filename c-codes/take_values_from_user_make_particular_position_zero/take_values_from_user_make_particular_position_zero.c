#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please enter a valid positive number for the count of elements.\n");
        return 1;
    }

    int numbers[n];
    int k;

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Enter the position to set to zero (1 to %d): ", n);
    scanf("%d", &k);

    if (k < 1 || k > n) 
    {
        printf("Invalid position. Please enter a position between 1 and %d.\n", n);
        return 1;
    }

    numbers[k - 1] = 0;

    printf("Updated array after setting position %d to zero:\n", k);
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}

