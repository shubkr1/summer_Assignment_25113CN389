#include <stdio.h>

int main() {
    int roll;
    char name[50];
    float marks1, marks2, marks3, total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%f%f%f", &marks1, &marks2, &marks3);

    total = marks1 + marks2 + marks3;
    percentage = total / 3;

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Marks 1     : %.2f\n", marks1);
    printf("Marks 2     : %.2f\n", marks2);
    printf("Marks 3     : %.2f\n", marks3);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    return 0;
}