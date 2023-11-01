#include<stdio.h>

int main() {
    int a,b;
    int Sum,Sub,Div,Mul,Remainder;
    printf("Enter First No. :");
    scanf("%d", &a);
    printf("Enter Second No. :");
    scanf("%d", &b);
    Sum = a+b;
    Sub = a-b;
    Div = a/b;
    Mul = a*b;
    Remainder = a%b;
    printf("Sum is : %d\n", Sum);
    printf("Sub is : %d\n", Sub);
    printf("Div is : %d\n", Div);
    printf("Mul is : %d\n", Mul);
    printf("Remainder is : %d\n", Remainder);
    return 0;
}