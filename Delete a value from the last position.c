#include <stdio.h>

int main() {
    int a[20], n, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n <= 0) {
        printf("Array is empty.\n");
        return 0;
    }

    n--;

    printf("Array after deleting last element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
