// WAP to calc. area of triangle
#include <stdio.h>

int main() {
    double base, height, area;

    // Input the base and height of the triangle from the user
    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    // Calculate the area of the triangle
    area = 0.5 * base * height;

    // Check if the input values are valid (non-negative)
    if (base >= 0 && height >= 0) {
        // Display the calculated area
        printf("The area of the triangle is: %lf\n", area);
    } else {
        printf("Base and height must be non-negative numbers.\n");
    }

    return 0;
}
