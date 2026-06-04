#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c;

    printf("Enter the position (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    if (n == 1) {
        printf("%lld\n", a);
    } 
    else if (n == 2) {
        printf("%lld\n", b);
    } 
    else {
        for (i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld\n", b);
    }

    return 0;
}