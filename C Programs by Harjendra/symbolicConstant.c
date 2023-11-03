#include <stdio.h>

// Define symbolic constants
#define PI 3.14159
#define MAX_VALUE 100

int main() {
    // Using symbolic constants
    double radius = 5.0;
    double area = PI * radius * radius;
    int value = 75;

    printf("The area of a circle with a radius of %.2f is %.2f\n", radius, area);
    printf("The maximum allowed value is: %d\n", MAX_VALUE);
    printf("A predefined value is: %d\n", value);

    return 0;
}
