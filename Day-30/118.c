#include <stdio.h>

int main() {
    int bookId, copies;
    char title[50], author[50];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Title: ");
    scanf("%s", title);

    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("Enter Number of Copies: ");
    scanf("%d", &copies);

    printf("\n----- Mini Library Record -----\n");
    printf("Book ID          : %d\n", bookId);
    printf("Book Title       : %s\n", title);
    printf("Author Name      : %s\n", author);
    printf("Available Copies : %d\n", copies);

    return 0;
}