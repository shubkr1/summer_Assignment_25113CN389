#include <stdio.h>
#include <stdio.h>

int main() {
    int num1, num2, n1, n2, temp, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    n1 = num1;
    n2 = num2;

    if (n1 < 0) n1 = -n1;
    if (n2 < 0) n2 = -n2;

    while (n2 != 0) {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    gcd = n1;

    if (num1 == 0 || num2 == 0) {
        lcm = 0;
    } else {
        lcm = (num1 * num2) / gcd;
        if (lcm < 0) lcm = -lcm;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
