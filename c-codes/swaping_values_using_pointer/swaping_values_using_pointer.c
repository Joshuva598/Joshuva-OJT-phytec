#include<stdio.h>

int main()
{

    int a, b;
    int *ptra, *ptrb;
    int temp;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("\n\nEnter value for b: ");
    scanf("%d", &b);

    printf("\n\nThe values before swapping are: a = %d b = %d", a, b);

    ptra = &a;    
    ptrb = &b;    

    temp = *ptra;   
    *ptra = *ptrb;  
    *ptrb = temp;   

    printf("\n\nThe values after swapping are: a = %d b = %d\n", a, b);

    return 0;

}
