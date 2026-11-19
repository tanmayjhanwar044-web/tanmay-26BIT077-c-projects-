#include <stdio.h>

void checkMarks(int i, int n, float *total, int *fail) {
    float marks;

    if (i > n) {
        return;
    }

    printf("Enter marks of subject %d: ", i);
    scanf("%f", &marks);

    *total = *total + marks;
    if (marks < 35) {
        *fail = 1;
    }

    checkMarks(i + 1, n, total, fail);
}

int main() {
    int n, fail = 0;
    float total = 0, avg;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of subjects.\n");
        return 0;
    }

    checkMarks(1, n, &total, &fail);
    avg = total / n;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    if (fail == 1) {
        printf("Result: Fail (secured less than 35 marks in a subject).\n");
    } else if (avg >= 70) {
        printf("Result: Distinction\n");
    } else if (avg >= 60) {
        printf("Result: First Class\n");
    } else if (avg >= 50) {
        printf("Result: Second Class\n");
    } else {
        printf("Result: Third Class\n");
    }

    return 0;
}
