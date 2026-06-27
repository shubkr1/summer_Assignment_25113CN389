#include <stdio.h>

int main() {
    int id;
    char name[50];
    float basic, hra, da, gross;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    printf("\n----- Salary Slip -----\n");
    printf("Employee ID   : %d\n", id);
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", gross);

    return 0;
}
 