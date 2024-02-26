#include <stdio.h>

int main() 
{
    unsigned int hexNumber;

    printf("Enter a hexadecimal number: ");
    scanf("%X", &hexNumber);

    printf("Decimal representation of 0x%X is: %u\n", hexNumber, hexNumber);

    return 0;
}

