#include <stdio.h>

void input(int roll[], char name[][30], int marks[], int n);
void display(int roll[], char name[][30], int marks[], int n);

int main() {
    int n = 3;
    int roll[3], marks[3];
    char name[3][30];

    input(roll, name, marks, n);
    display(roll, name, marks, n);

    return 0;
}

void input(int roll[], char name[][30], int marks[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

void display(int roll[], char name[][30], int marks[], int n) {
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %d\n", marks[i]);
    }
}