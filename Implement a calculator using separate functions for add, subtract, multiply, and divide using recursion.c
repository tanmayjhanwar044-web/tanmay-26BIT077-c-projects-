#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

void runCalculator() {
    float a, b;
    int choice, again;

    printf("\nEnter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Choose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Result = %.2f\n", add(a, b));
    } else if (choice == 2) {
        printf("Result = %.2f\n", subtract(a, b));
    } else if (choice == 3) {
        printf("Result = %.2f\n", multiply(a, b));
    } else if (choice == 4) {
        if (b == 0) {
            printf("Cannot divide by zero.\n");
        } else {
            printf("Result = %.2f\n", divide(a, b));
        }
    } else {
        printf("Invalid choice.\n");
    }

    printf("Do you want to calculate again? (1 for Yes, 0 for No): ");
    scanf("%d", &again);

    if (again == 1) {
        runCalculator();
    }
}

int main() {
    runCalculator();
    return 0;
}
