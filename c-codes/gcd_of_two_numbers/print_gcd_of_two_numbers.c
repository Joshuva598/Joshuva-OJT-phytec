#include <stdio.h>

int main() 
{
    int num1, num2;

    // Prompt the user to enter the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and print the GCD
    while (num2 != 0) 
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("The GCD of %d and %d is: %d\n", num1, num2, num1);

    return 0;
}

