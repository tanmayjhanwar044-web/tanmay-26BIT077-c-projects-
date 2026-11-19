#include <stdio.h>

int main() {
    int n, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev) {
        printf("%d is a Palindrome number.\n", temp);
    } else {
        printf("%d is NOT a Palindrome number.\n", temp);
    }

    return 0;
}
