#include <stdio.h>

int main() {
    printf("%d\n", 4>3 && 3>4); // AND
    printf("%d\n", 4>3 || 3>4); // OR
    printf("%d\n", !(3>4)); // NOT
    printf("%d\n", !(4>3 && 3>4)); // NOT, AND
    return 0;
}