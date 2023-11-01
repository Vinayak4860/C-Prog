// Take a number(n) from user & output its cube(n*n*n)

#include <stdio.h>

int main() {
    int number;
    printf("enter number");
    scanf("%d", &number);
    printf("Cube of number is : %d",number * number * number);
    return 0;
}