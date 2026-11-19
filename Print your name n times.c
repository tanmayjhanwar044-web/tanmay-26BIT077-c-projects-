#include <stdio.h>

int main() {
    int i, n;

    printf("Enter how many times to print your name: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Your Name\n");
    }

    return 0;
}
