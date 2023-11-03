// WAP to display what time of the day it is using if else ladder.
//  Good morning
//  (t>=0.0)&&(t<12.0)
//  Good afternoon
//  (t>=12.0)&&(t<15.0)
//  Good evening
//  (t>=15.0)&&(t<19.0)
//  Default time 
//  Invalid time

#include <stdio.h>

int main() {
    float time;

    // Input from the user
    printf("Enter the time (in 24-hour format): ");
    scanf("%f", &time);

    if (time >= 0.0 && time < 12.0) {
        printf("Good morning\n");
    } else if (time >= 12.0 && time < 15.0) {
        printf("Good afternoon\n");
    } else if (time >= 15.0 && time < 19.0) {
        printf("Good evening\n");
    } else {
        printf("Invalid time\n");
    }

    return 0;
}
