#include <stdio.h>

int main() {
    int n, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Separated digits: ");
    while (n > 0) {
        rem = n % 10;
        printf("%d", rem);
        n = n / 10;
        if (n > 0) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
