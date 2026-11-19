#include <stdio.h>

void swap(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("Inside swap function: x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;

    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("Before calling swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After calling swap (original values unchanged): a = %d, b = %d\n", a, b);

    return 0;
}
