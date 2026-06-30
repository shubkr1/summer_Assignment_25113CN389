#include <stdio.h>

int main() {
    int roll[5], marks[5], i;
    char name[5][30];

    for (i = 0; i < 5; i++) {
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %d\n", marks[i]);
    }

    return 0;
}