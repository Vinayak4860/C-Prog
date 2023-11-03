// Wap to calculate the sum of first 10 natural number
#include <stdio.h>

int main() {
    int n = 10; // The number of natural numbers to sum
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}
