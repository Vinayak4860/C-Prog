// WAP to add, subtract, multiply, and division of two numbers using a switch case statement

#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input from the user
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Input the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator. Please enter +, -, *, or /.\n");
    }

    return 0;
}
