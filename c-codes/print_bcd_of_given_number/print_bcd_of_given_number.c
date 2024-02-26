#include <stdio.h>

void decimalToBCD(int number) 
{
    printf("BCD representation of %d is: ", number);

    while (number > 0) 
    {
        int digit = number % 10;

        for (int i = 3; i >= 0; i--) 
	{
            int bit = (digit >> i) & 1;
            printf("%d", bit);
        }

        printf(" ");
        number /= 10;
    }

    printf("\n");
}

int main() 
{
    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    decimalToBCD(number);

    return 0;
}

