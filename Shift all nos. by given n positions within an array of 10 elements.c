#include <stdio.h>

int main() {
    int a[10], i, n, dir;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions to shift (n): ");
    scanf("%d", &n);

    printf("Enter 1 for Left shift or 2 for Right shift: ");
    scanf("%d", &dir);

    if (n >= 10) {
        for (i = 0; i < 10; i++) {
            a[i] = 0;
        }
    } else if (dir == 1) {
        for (i = 0; i < 10 - n; i++) {
            a[i] = a[i + n];
        }
        for (i = 10 - n; i < 10; i++) {
            a[i] = 0;
        }
    } else if (dir == 2) {
        for (i = 9; i >= n; i--) {
            a[i] = a[i - n];
        }
        for (i = 0; i < n; i++) {
            a[i] = 0;
        }
    }

    printf("Array after shifting:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
