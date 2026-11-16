#include <stdio.h>

int main() {
    float l, b, area, perimeter;

    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);

    return 0;
}
