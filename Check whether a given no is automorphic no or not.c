#include <stdio.h>

int main() {
    int n, temp, sq, divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;
    temp = n;

    while (temp > 0) {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    if (sq % divisor == n) {
        printf("%d is an Automorphic number (Square = %d).\n", n, sq);
    } else {
        printf("%d is NOT an Automorphic number (Square = %d).\n", n, sq);
    }

    return 0;
}
