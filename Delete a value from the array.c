#include <stdio.h>

int main() {
    int a[20], n, i, j, val, found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++) {
        if (a[i] == val) {
            for (j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Value %d not found in the array.\n", val);
    } else {
        printf("Array after deleting %d:\n", val);
        for (i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
