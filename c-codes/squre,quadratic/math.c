#include <stdio.h>
#include <math.h>

void calculateRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Root: %lf\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1: %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2: %lf - %lfi\n", realPart, imaginaryPart);
    }
}

int main() {
    printf("Test Case 1:\n");
    calculateRoots(1, -3, 2);

    printf("\nTest Case 2:\n");
    calculateRoots(1, -6, 9);

    printf("\nTest Case 3:\n");
    calculateRoots(1, 2, 5);

    return 0;
}

