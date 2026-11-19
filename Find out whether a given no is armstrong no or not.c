#include <stdio.h>

int main() {
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (temp == sum) {
        printf("%d is an Armstrong number.\n", temp);
    } else {
        printf("%d is NOT an Armstrong number.\n", temp);
    }

    return 0;
}
