//Program to print the following series 5,10,15,----,n

#include <stdio.h>

int main() 
{
    int number ;
    
    printf("Enter the value of number:");
    scanf("%d", &number);

    printf("The series is:\n");

    for (int i = 5; i <= number; i += 5) 
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

