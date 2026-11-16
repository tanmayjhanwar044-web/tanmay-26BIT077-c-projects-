#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Addition = %f\n", a + b);
    printf("Subtraction = %f\n", a - b);
    printf("Multiplication = %f\n", a * b);
    printf("Division = %f\n", a / b);

    return 0;
}
