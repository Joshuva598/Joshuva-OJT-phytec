#include<stdio.h>

int main() 
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int n = number; 
    int num;
    int result = 0;

    while (n > 0) 
    {
        num = n % 10;
        result = result * 10 + num;
        n = n / 10;
    }

    if (result == number) 
    {
        printf("Given number is palindrome\n");
    } 
    
    else 
    {
        printf("Given number is not palindrome\n");
    }

    return 0;
}
