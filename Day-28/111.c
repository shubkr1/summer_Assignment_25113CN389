#include <stdio.h>

int main() {
    char name[50];
    int age, tickets;
    float price = 500, total;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", name);
    printf("Age            : %d\n", age);
    printf("Tickets Booked : %d\n", tickets);
    printf("Ticket Price   : %.2f\n", price);
    printf("Total Amount   : %.2f\n", total);

    return 0;
}