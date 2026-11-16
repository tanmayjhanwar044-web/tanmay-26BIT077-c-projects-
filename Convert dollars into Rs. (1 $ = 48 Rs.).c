#include <stdio.h>

int main() {
    float dollars, rs;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    rs = dollars * 48;

    printf("Amount in Rs. = %f\n", rs);
    return 0;
}
