#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;

    printf("Enter Gross Salary: ");
    scanf("%f", &gross);

    allowance = (gross * 10) / 100;
    deduction = (gross * 3) / 100;
    net = gross + allowance - deduction;

    printf("Net Salary = %f\n", net);
    return 0;
}n
