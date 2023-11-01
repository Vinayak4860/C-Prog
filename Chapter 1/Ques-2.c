// find area of circle (radius is given and formula is πr^2)

#include<stdio.h>

int main() {
    int radius;
    printf("Enter Radius :");
    scanf("%d",&radius);
    printf("Area of circle is: %d", 3.14*radius*radius);
    return 0;
}