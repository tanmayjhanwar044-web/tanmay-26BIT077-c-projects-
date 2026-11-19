#include <stdio.h>

int main() {
    int a[5], i;

    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("The 5 values are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
