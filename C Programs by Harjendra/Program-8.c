// WAP to check if a no is divisible by both 5 and 7?

#include<stdio.h> 

int main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0) {
        printf("No. is divisible by 5 and 7");
    }
    else {
        printf("Not divisible by 5 and 7");
    }
    return 0;
}