#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter marks of 5 subjects: ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\n----- MARKSHEET -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage >= 60)
        printf("Division    : First");
    else if (percentage >= 45)
        printf("Division    : Second");
    else if (percentage >= 33)
        printf("Division    : Third");
    else
        printf("Result      : Fail");

    return 0;
}