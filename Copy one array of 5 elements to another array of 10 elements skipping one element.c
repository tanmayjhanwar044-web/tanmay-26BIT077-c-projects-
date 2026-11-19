#include <stdio.h>

int main() {
    int a[5], b[10] = {0};
    int i;

    printf("Enter 5 elements for the first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        b[i * 2] = a[i];
    }

    printf("Second array of 10 elements (with skipped elements as 0):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
