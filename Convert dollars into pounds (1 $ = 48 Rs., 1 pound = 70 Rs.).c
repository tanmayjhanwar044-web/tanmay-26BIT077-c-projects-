#include <stdio.h>

int main() {
    float dollars, rs, pounds;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    rs = dollars * 48;
    pounds = rs / 70;

    printf("Amount in Pounds = %f\n", pounds);
    return 0;
}
