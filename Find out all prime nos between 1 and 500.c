#include <stdio.h>

int main() {
    int n, i, flag;

    printf("Prime numbers between 1 and 500:\n");
    for (n = 2; n <= 500; n++) {
        flag = 0;
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", n);
        }
    }
    printf("\n");

    return 0;
}
