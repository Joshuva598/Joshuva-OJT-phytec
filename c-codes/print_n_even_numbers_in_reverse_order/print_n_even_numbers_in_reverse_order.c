#include <stdio.h>

int main() 
{
    int number;


    printf("Enter the value of n: ");
    scanf("%d", &number);

   
    printf("The first %d even numbers in reverse order:\n", number);

    for (int i = number * 2; i >= 2; i -= 2) 
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

