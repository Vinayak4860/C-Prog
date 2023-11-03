// WAP to display the name of the angle when the user inputs a number
//      reflecting an angle in degrees?
//a) if angle>0 and angle<90
//Acute angle
//b) if angle == 90
//Right angle
//c) if angle >90 and angle< 180 
//Obtuse angle
//d) if angle == 180
//Straight angle
//e) if angle>180 and angle<360
//Reflex angle
//f) default
//           Enter valid no

#include <stdio.h>

int main() {
    double angle;

    // Input from the user
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);

    if (angle > 0 && angle < 90) {
        printf("Acute angle\n");
    } else if (angle == 90) {
        printf("Right angle\n");
    } else if (angle > 90 && angle < 180) {
        printf("Obtuse angle\n");
    } else if (angle == 180) {
        printf("Straight angle\n");
    } else if (angle > 180 && angle < 360) {
        printf("Reflex angle\n");
    } else {
        printf("Enter a valid angle between 0 and 360 degrees.\n");
    }

    return 0;
}
