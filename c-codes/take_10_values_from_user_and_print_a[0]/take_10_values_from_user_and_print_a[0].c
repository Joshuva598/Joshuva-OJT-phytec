#include<stdio.h>

int main() 
{
    int a[10];

    printf("Enter 10 values:\n");

    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &a[i]);
    }

    int index;

    printf("Enter index number to print a particular value in the array: ");
    scanf("%d", &index);

    
    if (index >= 0 && index < 10) 
    {
        printf("Value at index %d: %d\n", index, a[index]);
    } 
    
    else 
    {
        printf("Invalid index. Please enter an index between 0 and 9.\n");
    }

    return 0;
}

