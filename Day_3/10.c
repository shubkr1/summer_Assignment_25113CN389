#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the lower limit of the range: ");
    scanf("%d", &start);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    if (start < 2) {
        start = 2;
    }

    for (i = start; i <= end; i++) {
        isPrime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}