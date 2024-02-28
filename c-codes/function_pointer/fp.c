#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

typedef int (*OperationFunc)(int, int);

int performOperation(OperationFunc operation, int operand1, int operand2) {
    return operation(operand1, operand2);
}

int main() {
    int num1 = 10, num2 = 5;
    
    OperationFunc addPtr = add;
    OperationFunc subtractPtr = subtract;
    OperationFunc multiplyPtr = multiply;

    int resultAdd = performOperation(addPtr, num1, num2);
    int resultSubtract = performOperation(subtractPtr, num1, num2);
    int resultMultiply = performOperation(multiplyPtr, num1, num2);

    printf("Addition: %d\n", resultAdd);
    printf("Subtraction: %d\n", resultSubtract);
    printf("Multiplication: %d\n", resultMultiply);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

