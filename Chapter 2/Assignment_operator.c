#include <stdio.h>

int main() {
    int a = 2;
    int b = 4;
    a += b; // a = a + b
    b *= a; // b = b * a
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}