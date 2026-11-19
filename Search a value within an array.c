#include <stdio.h>

int main() {
    int a[20], n, i, val, found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++) {
        if (a[i] == val) {
            printf("Value %d found at position %d (index %d).\n", val, i + 1, i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Value %d not found in the array.\n", val);
    }

    return 0;
}
