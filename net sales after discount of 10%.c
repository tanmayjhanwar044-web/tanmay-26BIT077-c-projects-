#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;

    printf("Enter Gross Sales: ");
    scanf("%f", &gross_sales);

    discount = (gross_sales * 10) / 100;
    net_sales = gross_sales - discount;

    printf("Net Sales = %f\n", net_sales);
    return 0;
}
