#include <stdio.h>

int main() {
    int itemId, quantity;
    char itemName[50];
    float price, total;

    printf("Enter Item ID: ");
    scanf("%d", &itemId);

    printf("Enter Item Name: ");
    scanf("%s", itemName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price per Item: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("\n----- Inventory Record -----\n");
    printf("Item ID        : %d\n", itemId);
    printf("Item Name      : %s\n", itemName);
    printf("Quantity       : %d\n", quantity);
    printf("Price per Item : %.2f\n", price);
    printf("Total Value    : %.2f\n", total);

    return 0;
}