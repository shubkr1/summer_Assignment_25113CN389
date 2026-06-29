#include <stdio.h>

int main() {
    int a[100], n, i, choice, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1. Display Array\n");
    printf("2. Sum of Elements\n");
    printf("3. Find Largest Element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += a[i];
            printf("Sum = %d", sum);
            break;

        case 3:
            int max = a[0];
            for(i = 1; i < n; i++) {
                if(a[i] > max)
                    max = a[i];
            }
            printf("Largest Element = %d", max);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}