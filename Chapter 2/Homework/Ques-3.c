// program to print the smallest number of two
#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter number");
    scanf("%d", &a);
    printf("Enter number");
    scanf("%d", &b);
    printf("A is smallest? : %d", a<b);
    return 0;
}