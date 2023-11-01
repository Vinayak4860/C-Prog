//Program to check if student passed or failed 
// marks > 30 is pass and under 30 is fail

#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks : ");
    scanf("%d", &marks);
    
    // if(marks <= 30) {
    //     printf("Failed");
    // }
    // else if(marks >= 30 && marks <= 100) {
    //     printf("Passed");
    // }
    // else {
    //     printf("Invalid marks");
    // }
    

    // ternary method

    marks <= 30 ? printf("Failed\n") : printf("Passed");
    return 0;
}