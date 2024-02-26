#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < 2 * (n - i - 1); j++) 
	{
            printf(" ");
        }

        for (int k = 0; k <= i; k++) 
	{
            if (k < i) 
	    {
                printf("A ");
            } 
	    
	    else 
	    {
                printf("A");
            }
        }

        for (int l = 0; l <= i; l++) 
	{
            if (l < i) 
	    {
                printf("B ");
            } 
	    
	    else 
	    {
                printf("B");
            }
        }

        printf("\n");
    }

    return 0;
}

