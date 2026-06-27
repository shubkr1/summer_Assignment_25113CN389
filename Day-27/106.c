#include <stdio.h>

int main() {
    int id, age;
    char name[50], department[30];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Department: ");
    scanf("%s", department);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\n----- Employee Record -----\n");
    printf("Employee ID   : %d\n", id);
    printf("Employee Name : %s\n", name);
    printf("Age           : %d\n", age);
    printf("Department    : %s\n", department);
    printf("Salary        : %.2f\n", salary);

    return 0;
}