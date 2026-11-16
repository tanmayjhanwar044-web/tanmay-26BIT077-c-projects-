#include <stdio.h>

int main() {
    float p, r, n, i;

    printf("Enter Principal (P), Rate (R), and Time in years (N): ");
    scanf("%f %f %f", &p, &r, &n);

    i = (p * r * n) / 100;

    printf("Simple Interest = %f\n", i);
    return 0;
}
