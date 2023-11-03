// WAP to swap two numbers
#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swap the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    printf("After swapping, num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}
