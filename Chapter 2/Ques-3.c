/* 
Program to print true or false if 
1) its sunday AND its snowing
2) its sunday OR its raining
*/
#include <stdio.h> 

int main() {
    int isSunday = 1;
    int isSnowing = 0;
    int isRaining = 1;
    printf("%d", isSunday && isSnowing);
    printf("%d", isSunday || isRaining);
}