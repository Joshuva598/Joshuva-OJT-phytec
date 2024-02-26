#include <stdio.h>

float balance = 1000.0; 

void displayMenu();
void checkBalance();
void deposit();
void withdraw();

int main() {
    int choice;

    do {
        displayMenu(); 
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    printf("\n***** ATM Menu *****\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

void checkBalance() {
    printf("Your balance: $%.2f\n", balance);
}

void deposit() {
    float amount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Deposit successful. Your new balance: $%.2f\n", balance);
    } else {
        printf("Invalid amount. Please enter a positive amount.\n");
    }
}

void withdraw() {
    float amount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Withdrawal successful. Your new balance: $%.2f\n", balance);
    } else if (amount <= 0) {
        printf("Invalid amount. Please enter a positive amount.\n");
    } else {
        printf("Insufficient funds. Withdrawal failed.\n");
    }
}

