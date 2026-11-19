#include <stdio.h>

int main() {
    int a[5], i, j, temp, choice;

    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 1 for Ascending order or 2 for Descending order: ");
    scanf("%d", &choice);

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (choice == 1 && a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            } else if (choice == 2 && a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
