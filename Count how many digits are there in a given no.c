#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        count++;
        n = n / 10;
    } while (n != 0);

    printf("Total digits = %d\n", count);
    return 0;
}
