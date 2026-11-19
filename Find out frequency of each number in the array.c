#include <stdio.h>

int main() {
    int a[10], visited[10] = {0};
    int i, j, count;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Frequency of each element:\n");
    for (i = 0; i < 10; i++) {
        if (visited[i] == 1) {
            continue;
        }
        count = 1;
        for (j = i + 1; j < 10; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d time(s)\n", a[i], count);
    }

    return 0;
}
