#include <stdio.h>

int main() {
    printf("%d\n", 4 == 4); // 1 = True (True and false is not available in C unlike Python,Java and c++)
    printf("%d\n", 3 == 4); // 0 = False

    printf("%d\n", 3 > 4);
    printf("%d\n", 4 > 3);
    printf("%d\n", 4 >= 4);
    printf("%d\n", 5 <= 4);

    printf("%d\n", 4 != 4);
    printf("%d\n", 4 != 3);
    return 0;
}