//WAP to find the factors of any input no.
#include<stdio.h>

int main() {
    int num, i;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Factors of %d are : ", num);

    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d\n",i);
        }
    }
    return 0;
}