#include <stdio.h>

int main() 
{
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float perimeter = 2 * 3.14159 * radius;

    printf("Perimeter of the circle with radius %.2f is: %.2f\n", radius, perimeter);

    return 0;
}

