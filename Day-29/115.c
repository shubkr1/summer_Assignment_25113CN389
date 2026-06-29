#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Convert to Uppercase\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reversed String = %s", str);
            break;

        case 3:
            printf("Uppercase String = %s", strupr(str));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}