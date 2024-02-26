#include <stdio.h>

int main() 
{
    int n;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < i; j++) 
	{
            printf("  ");
        }

        for (int k = 0; k < n - i; k++) 
	{
            printf("A ");
        }
       
        for (int l = 0; l < n - i; l++) 
	{
            if (l < n - i - 1) 
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

