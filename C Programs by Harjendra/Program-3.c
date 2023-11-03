// WAP to print the table of any number

#include<stdio.h>

int main() {
    int num,i;
    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = 1; i<=10; ++i) {
        printf("%d\n", num*i);
    }
    return 0;
}