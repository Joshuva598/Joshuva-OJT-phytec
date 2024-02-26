#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    int emp_id;
    char name[50];
    struct Date date_of_birth;
    struct Date date_of_joining;
};

int main() {
    struct Employee emp;

    printf("Enter Employee Details:\n");
    printf("Employee ID: ");
    scanf("%d", &emp.emp_id);

    printf("Name: ");
    scanf("%s", emp.name);

    printf("Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &emp.date_of_birth.day, &emp.date_of_birth.month, &emp.date_of_birth.year);

    printf("Date of Joining (DD MM YYYY): ");
    scanf("%d %d %d", &emp.date_of_joining.day, &emp.date_of_joining.month, &emp.date_of_joining.year);

    printf("\n\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp.emp_id);
    printf("Name: %s\n", emp.name);
    printf("Date of Birth: %02d/%02d/%04d\n", emp.date_of_birth.day, emp.date_of_birth.month, emp.date_of_birth.year);
    printf("Date of Joining: %02d/%02d/%04d\n", emp.date_of_joining.day, emp.date_of_joining.month, emp.date_of_joining.year);

    return 0;
}

