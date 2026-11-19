#include <stdio.h>

void readArray(int a[], int i, int n) {
    if (i == n) {
        return;
    }
    scanf("%d", &a[i]);
    readArray(a, i + 1, n);
}

void findMaxMin(int a[], int i, int n, int *max, int *min) {
    if (i == n) {
        return;
    }
    if (a[i] > *max) {
        *max = a[i];
    }
    if (a[i] < *min) {
        *min = a[i];
    }
    findMaxMin(a, i + 1, n, max, min);
}

int main() {
    int a[50], n, max, min;

    printf("Enter number of elements (max 50): ");
    scanf("%d", &n);

    if (n <= 0 || n > 50) {
        printf("Invalid number of elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    readArray(a, 0, n);

    max = a[0];
    min = a[0];
    findMaxMin(a, 1, n, &max, &min);

    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}
