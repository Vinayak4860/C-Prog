// program to check if number is even or odd
#include <stdio.h> 

int main() {
    // Even -> 1
    // Odd -> 0
    int a;
    printf("Enter number");
    scanf("%d", &a);
    printf("%d\n",a % 2 == 0);
    return 0;
} 