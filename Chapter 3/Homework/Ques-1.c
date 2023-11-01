// Program to check if the given number is a natural number
#include <stdio.h> 

int main() {
    int number;
    printf("Enter number : ");
    scanf("%d", &number);

    if(number >= 1) {
        printf("Natural number");
    }
    else {
        printf("It is not a natural number");
    }
    return 0;
}