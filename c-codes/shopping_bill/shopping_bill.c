#include <stdio.h>

float calculateTotalCost(int quantity, float unitPrice) 
{
    return quantity * unitPrice;
}

int main() 
{
    int n; 
    printf("Enter the number of items: ");
    scanf("%d", &n);
    
    char items[n][50];
    int quantities[n];
    float unitPrices[n];
    
    for (int i = 0; i < n; i++) 
    {
        printf("Enter the name of item %d: ", i + 1);
        scanf("%s", items[i]);

        printf("Enter the quantity of item %d: ", i + 1);
        scanf("%d", &quantities[i]);

        printf("Enter the unit price of item %d: ", i + 1);
        scanf("%f", &unitPrices[i]);
    }

    printf("\n\n----------------------------------\n");
    printf("      Shopping Bill\n");
    printf("----------------------------------\n");

    float totalBill = 0;
    
    for (int i = 0; i < n; i++) 
    {
        float totalCost = calculateTotalCost(quantities[i], unitPrices[i]);

        printf("%-20s   %5d   %.2f   %.2f\n", items[i], quantities[i], unitPrices[i], totalCost);

        totalBill += totalCost; 
    }

    printf("----------------------------------\n");
    printf("      Total Bill: %.2f\n", totalBill);

    return 0;
}

