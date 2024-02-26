#include <stdio.h>

int main() 
{
    int values[10];

    printf("Enter 10 values:\n");

    for (int i = 0; i < 10; i++) 
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < 10 - 1; i++) 
    {
        for (int j = 0; j < 10 - i - 1; j++) 
	{
            if (values[j] > values[j + 1]) 
	    {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

    
    printf("Values in ascending order:\n");
    
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", values[i]);
    }

    printf("\n");

    return 0;
}

