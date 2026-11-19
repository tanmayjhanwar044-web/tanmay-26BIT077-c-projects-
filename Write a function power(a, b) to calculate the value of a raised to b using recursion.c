#include <stdio.h>

long power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    return a * power(a, b - 1);
}

int main() {
    int a, b;

    printf("Enter base (a) and non-negative exponent (b): ");
    scanf("%d %d", &a, &b);

    if (b < 0) {
        printf("Please enter a non-negative exponent.\n");
    } else {
        printf("%d raised to %d = %ld\n", a, b, power(a, b));
    }

    return 0;
}
