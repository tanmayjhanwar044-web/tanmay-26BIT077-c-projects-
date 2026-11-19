#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i);
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}
