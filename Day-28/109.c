#include <stdio.h>

int main() {
    int bookId;
    char title[50], author[50];
    int quantity;

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Title: ");
    scanf("%s", title);

    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", bookId);
    printf("Book Title  : %s\n", title);
    printf("Author      : %s\n", author);
    printf("Quantity    : %d\n", quantity);

    return 0;
}