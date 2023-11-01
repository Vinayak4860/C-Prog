// Program to find average of three numbers (sum of all no./total no.)
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    printf("Enter First no.");
    scanf("%d",&a);

    printf("Enter Second no.");
    scanf("%d",&b);

    printf("Enter First no.");
    scanf("%d",&c);
    int sum = a+b+c;
    printf("Avg is : %d",sum/3);    
    return 0;
}