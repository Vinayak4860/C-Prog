//Program to check if a number is greater than 9 & less than 100, and to check if its 2 digit number alsp
#include <stdio.h> 

int main() {
    int a;
    printf("Enter number : \n");
    scanf("%d", &a);
    printf("%d\n", a>9 && a<100);
    return 0;
}      