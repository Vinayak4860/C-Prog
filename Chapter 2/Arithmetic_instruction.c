#include<stdio.h>
#include<math.h> // for using pow operator

int main() {

    int a = 2,  b = 4;
    int sum = a+b;
    int mult = a*b;
    int sub = a-b;
    int div = a/b;
    int remainder = a%b;
    printf("sum is %d\n", sum);
    printf("sub is %d\n", sub);
    printf("mult is %d\n", mult);
    printf("div is %d\n", div);
    printf("remainder is %d\n", remainder);

// To use Power operator in C for ex. ---> 2^4
// We use the operator shown below
    
    int power = pow(a,b);
    printf("Power is %d", power);
    return 0;
}