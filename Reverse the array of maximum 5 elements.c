#include <stdio.h>

int main() {
    int a[5], n, i, temp;

    printf("Enter number of elements (max 5): ");
    scanf("%d", &n);

    if (n < 1 || n > 5) {
        printf("Please enter a size between 1 and 5.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
