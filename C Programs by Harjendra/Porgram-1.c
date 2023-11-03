// WAP TO COMPUTE THE SQUARE ROOT OF FIRST 10 NUMBERS USING FOR LOOPS
#include<stdio.h>
#include<math.h>

int main() {
    int i;
    for (i=1; i<=10; i++) {
        printf("Square root of %d is %f\n", i, sqrt(i));
    }

    return 0;
}