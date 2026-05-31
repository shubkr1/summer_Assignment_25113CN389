#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, digits, sum;

    printf("Enter lower bound and upper bound: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        num = i;
        originalNum = num;
        digits = 0;
        sum = 0;

        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            sum += pow(remainder, digits);
            originalNum /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}