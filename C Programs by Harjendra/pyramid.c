// * star pyramid

#include<stdio.h>

int main() {
    int n = 5;
    int i,j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++){
            printf("* "); // For number pyramid (printf("%d",j);) 
        }
        printf("\n");
    }
    return 0;
}


